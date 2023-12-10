# coding:utf-8
import os
import re
import sys
import json
import shutil
import inspect
import hashlib
import tempfile
import traceback
from textwrap import dedent
from functools import partial


from maya import cmds
from maya import mel
import pymel.core as pm
import pymel.core.nodetypes as nt

from maya import OpenMayaUI

from PySide2 import QtUiTools

uifile_path = os.path.dirname(__file__) + "\MAYA_retarget.ui"

from PySide2.QtCore import Qt

try:
    from Qt import QtGui
    from Qt import QtCore
    from Qt import QtWidgets
    from Qt.QtCompat import wrapInstance,QFileDialog
except:
    from PySide2 import QtGui
    from PySide2 import QtCore
    from PySide2 import QtWidgets
    from shiboken2 import wrapInstance
    from PySide2.QtWidgets import QFileDialog
    from PySide2 import QtUiTools
    from PySide2.QtCore import Qt



def loadui(uifile_path):
    uifile = QtCore.QFile(uifile_path)
    uifile.open(QtCore.QFile.ReadOnly)
    uiWindow = QtUiTools.QUiLoader().load(uifile)
    uifile.close()
    return uiWindow
class MainWindow():

    def __init__(self, parent=None):


        self.File_List = []
        self.ui = loadui(uifile_path)
        self.ui.Enter_Anim_FBX_File.clicked.connect(self.getFile)
        self.ui.ExportTo_btn.clicked.connect(lambda: self.ui.export_line.setText(QtWidgets.QFileDialog.getExistingDirectory(self.ui)))
        self.ui.LinkStart.clicked.connect(self.mainFunction)
        self.ui.oldHikChar.clicked.connect(self.setSource_line)
        self.ui.newHikChar.clicked.connect(self.setTarget_line)
        self.ui.delete_2.clicked.connect(self.clear_item)
        self.ui.deleteAll.clicked.connect(self.clear_list)


        self.ui.setWindowFlags(Qt.WindowStaysOnTopHint)
        self.ui.show()
        self.sourceObj = None
        self.targetObj = None

        self.source_line = ""
        self.target_line = ""
        self.export_line = ""
        self.progress=0

    def clear_progress_bar(self):
        self.progress=0
        self.ui.progressBar.setValue(0)

    #从列表中清除所有 需要retarget的动画文件
    def clear_list(self):
        self.ui.importFileList.clear()
    #从列表中清除选定需要retarget的动画文件
    def clear_item(self):
        listItems = self.ui.importFileList.selectedItems()
        if not listItems: return
        for item in listItems:
            self.ui.importFileList.takeItem(self.ui.importFileList.row(item))

    def setSource_line(self):
        self.clear_progress_bar()
        curr_obj =  pm.ls(selection=True)
        joint_list =  pm.listRelatives(curr_obj, allDescendents=True ,  typ = "joint")

        char_list = pm.ls(typ="HIKCharacterNode")
        for char in char_list:
            if char.Spine.get() in joint_list:
                self.source_line = str(char)
                self.ui.source_line.setText(str(char))
                self.sourceObj = curr_obj
                return
        self.ui.source_line.setText("QWQ didn't find Character")
        cmds.warning("source HIK charactor doesn't exist")

    def setTarget_line(self):
        self.clear_progress_bar()
        curr_obj = pm.ls(selection=True)
        joint_list = pm.listRelatives(curr_obj, allDescendents=True, typ="joint")

        char_list = pm.ls(typ="HIKCharacterNode")
        for char in char_list:
            if char.Spine.get() in joint_list:
                self.target_line = str(char)
                self.ui.target_line.setText(str(char))
                self.targetObj = curr_obj
                print(self.targetObj[0].name())
                return
        self.ui.target_line.setText("QWQ didn't find Character")
        cmds.warning("target HIK charactor doesn't exist")



    def getFile(self):
        self.clear_progress_bar()
        directory = QtCore.QDir.currentPath()
        path_list, _ = QFileDialog().getOpenFileNames(self.ui, caption=u"get maya file", filter="fbx files (*fbx);;all files (*)")


        for path in path_list:
            self.addItem(path)
    def addItem(self,path):
        _, file_name = os.path.split(path)
        matches = self.ui.importFileList.findItems(file_name, QtCore.Qt.MatchExactly)
        if not matches:
            item = QtWidgets.QListWidgetItem(file_name)
            item.setToolTip(path)
            self.ui.importFileList.addItem(item)
        else:
            for match in matches:
                if path == match.toolTip():
                    break
            else:
                item = QtWidgets.QListWidgetItem(file_name)
                item.setToolTip(path)
                self.ui.importFileList.addItem(item)

    def SetFbxExportParameter(self):
        if not pm.pluginInfo('fbxmaya', q=True, loaded=True):
            pm.loadPlugin('fbxmaya')
        pm.mel.FBXResetExport()

        # NOTE 获取支持的最高版本 FBX
        try:
            pm.FBXExportFileVersion(v=None)
        except Exception as err:
            version = re.search(r"FBX\d+", str(err)).group()

        pm.mel.FBXExportFileVersion(v=version)
        #pm.mel.FBXExportUpAxis('z')
        pm.mel.FBXExportShapes(v=False)
        pm.mel.FBXExportScaleFactor(1)
        pm.mel.FBXExportInAscii(v=True)
        pm.mel.FBXExportLights(v=False)
        pm.mel.FBXExportSkins(v=False)
        pm.mel.FBXExportSmoothingGroups(v=True)
        pm.mel.FBXExportSmoothMesh(v=False)
        pm.mel.FBXExportEmbeddedTextures(v=False)
        pm.mel.FBXExportCameras(v=False)
        pm.mel.FBXExportBakeResampleAnimation(v=False)
        pm.mel.FBXExportSkeletonDefinitions(v=True)

    def SetFbxImportParameter(self):
        if not pm.pluginInfo('fbxmaya', q=True, loaded=True):
            pm.loadPlugin('fbxmaya')



    def saveSettings(self):

        self.source_line = self.ui.source_line.text()
        self.target_line = self.ui.target_line.text()
        self.export_line = self.ui.export_line.text()

        print(self.source_line)
        print(self.target_line)
        print(self.export_line)

    def mainFunction(self):
        self.SetFbxImportParameter()
        self.SetFbxExportParameter()

        while self.progress<10:
            self.progress += 0.5
            self.ui.progressBar.setValue(self.progress)


        self.saveSettings()
        self.startRetarget()

    #开始主流程
    def startRetarget(self):

        source = self.source_line
        target = self.target_line
        export_path = self.export_line

        check = True

        if not source:
            cmds.warning("target HIK charactor doesn't exist")
        elif not target:
            cmds.warning("source HIK charactor doesn't exist")
        elif not os.path.exists(export_path):
            cmds.warning("export path doesn't exist")
        else:
            check = False

        if check:
            self.clear_progress_bar()
            return

        self.saveSettings()


        file_list = [self.ui.importFileList.item(i).toolTip() for i in range(self.ui.importFileList.count())]

        self.error_list = []

        for i in range(self.ui.importFileList.count()):
            m_name = self.ui.importFileList.item(i).text()
            m_name_list = m_name.split(".")
            print(m_name_list[0])
            path = self.ui.importFileList.item(i).toolTip()
            print(str(path))
            self.loadAnimFile(str(path),i,m_name_list[0])
            part = 90/self.ui.importFileList.count()

            while self.progress < 10+part*i:
                self.progress += 0.5
                self.ui.progressBar.setValue(self.progress)

        self.ui.progressBar.setValue(100)

        # NOTE 打开输出路径
        #os.startfile(self.export_line.text())

    def loadAnimFile(self, file_path, index, m_name):


        # NOTE 打开文件
        pm.importFile(file_path)

        target = self.target_line
        source = self.source_line

        for hik_node in pm.ls(typ="HIKCharacterNode"):
            if source in str(hik_node):
                source = hik_node
                break
        else:
            err_msg = "%s - cannot find old HIK Character " % file_path
            self.error_list.append(err_msg)
            return

        for hik_node in pm.ls(typ="HIKCharacterNode"):
            if target in str(hik_node):
                target = hik_node
                break
        else:
            err_msg = "%s - cannot find new HIK Character " % file_path
            self.error_list.append(err_msg)
            return

        # NOTE 重定向
        pm.mel.hikSetCharacterInput(target, source)

        export_path = self.export_line
        #pm.renameFile(os.path.join(export_path, pm.sceneName().basename()))
        new_name = export_path+"/"+ m_name + "_exportAnim.fbx"

        cmds.select(self.targetObj[0].name())
        cmds.FBXExport('-file', new_name, '-s')
        #pm.mel.FBXExport(f=m_name+"_exportAnim")



def onMayaDroppedPythonFile(*args):

    pass
        #loadui(uifile_path)


main_window = MainWindow()