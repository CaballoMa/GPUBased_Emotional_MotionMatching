// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeShader/Public/ExampleComputeShader/ExampleComputeShader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleComputeShader() {}
// Cross Module References
	COMPUTESHADER_API UClass* Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution();
	COMPUTESHADER_API UClass* Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_NoRegister();
	COMPUTESHADER_API UFunction* Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_ComputeShader();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics
	{
		struct _Script_ComputeShader_eventOnExampleComputeShaderLibrary_AsyncExecutionCompleted_Parms
		{
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ComputeShader_eventOnExampleComputeShaderLibrary_AsyncExecutionCompleted_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::NewProp_Value_MetaData), Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExampleComputeShader/ExampleComputeShader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ComputeShader, nullptr, "OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::_Script_ComputeShader_eventOnExampleComputeShaderLibrary_AsyncExecutionCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::_Script_ComputeShader_eventOnExampleComputeShaderLibrary_AsyncExecutionCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnExampleComputeShaderLibrary_AsyncExecutionCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnExampleComputeShaderLibrary_AsyncExecutionCompleted, const int32 Value)
{
	struct _Script_ComputeShader_eventOnExampleComputeShaderLibrary_AsyncExecutionCompleted_Parms
	{
		int32 Value;
	};
	_Script_ComputeShader_eventOnExampleComputeShaderLibrary_AsyncExecutionCompleted_Parms Parms;
	Parms.Value=Value;
	OnExampleComputeShaderLibrary_AsyncExecutionCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UExampleComputeShaderLibrary_AsyncExecution::execExecuteBaseComputeShader)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Arg1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Arg2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UExampleComputeShaderLibrary_AsyncExecution**)Z_Param__Result=UExampleComputeShaderLibrary_AsyncExecution::ExecuteBaseComputeShader(Z_Param_WorldContextObject,Z_Param_Arg1,Z_Param_Arg2);
		P_NATIVE_END;
	}
	void UExampleComputeShaderLibrary_AsyncExecution::StaticRegisterNativesUExampleComputeShaderLibrary_AsyncExecution()
	{
		UClass* Class = UExampleComputeShaderLibrary_AsyncExecution::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteBaseComputeShader", &UExampleComputeShaderLibrary_AsyncExecution::execExecuteBaseComputeShader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics
	{
		struct ExampleComputeShaderLibrary_AsyncExecution_eventExecuteBaseComputeShader_Parms
		{
			UObject* WorldContextObject;
			int32 Arg1;
			int32 Arg2;
			UExampleComputeShaderLibrary_AsyncExecution* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Arg1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Arg2;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExampleComputeShaderLibrary_AsyncExecution_eventExecuteBaseComputeShader_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::NewProp_Arg1 = { "Arg1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExampleComputeShaderLibrary_AsyncExecution_eventExecuteBaseComputeShader_Parms, Arg1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::NewProp_Arg2 = { "Arg2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExampleComputeShaderLibrary_AsyncExecution_eventExecuteBaseComputeShader_Parms, Arg2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExampleComputeShaderLibrary_AsyncExecution_eventExecuteBaseComputeShader_Parms, ReturnValue), Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::NewProp_Arg1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::NewProp_Arg2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "ComputeShader" },
		{ "ModuleRelativePath", "Public/ExampleComputeShader/ExampleComputeShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution, nullptr, "ExecuteBaseComputeShader", nullptr, nullptr, Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::ExampleComputeShaderLibrary_AsyncExecution_eventExecuteBaseComputeShader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::ExampleComputeShaderLibrary_AsyncExecution_eventExecuteBaseComputeShader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExampleComputeShaderLibrary_AsyncExecution);
	UClass* Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_NoRegister()
	{
		return UExampleComputeShaderLibrary_AsyncExecution::StaticClass();
	}
	struct Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeShader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExampleComputeShaderLibrary_AsyncExecution_ExecuteBaseComputeShader, "ExecuteBaseComputeShader" }, // 1115027125
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExampleComputeShader/ExampleComputeShader.h" },
		{ "ModuleRelativePath", "Public/ExampleComputeShader/ExampleComputeShader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExampleComputeShader/ExampleComputeShader.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExampleComputeShaderLibrary_AsyncExecution, Completed), Z_Construct_UDelegateFunction_ComputeShader_OnExampleComputeShaderLibrary_AsyncExecutionCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::NewProp_Completed_MetaData), Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::NewProp_Completed_MetaData) }; // 3250423532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExampleComputeShaderLibrary_AsyncExecution>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::ClassParams = {
		&UExampleComputeShaderLibrary_AsyncExecution::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::Class_MetaDataParams), Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution()
	{
		if (!Z_Registration_Info_UClass_UExampleComputeShaderLibrary_AsyncExecution.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExampleComputeShaderLibrary_AsyncExecution.OuterSingleton, Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExampleComputeShaderLibrary_AsyncExecution.OuterSingleton;
	}
	template<> COMPUTESHADER_API UClass* StaticClass<UExampleComputeShaderLibrary_AsyncExecution>()
	{
		return UExampleComputeShaderLibrary_AsyncExecution::StaticClass();
	}
	UExampleComputeShaderLibrary_AsyncExecution::UExampleComputeShaderLibrary_AsyncExecution(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleComputeShaderLibrary_AsyncExecution);
	UExampleComputeShaderLibrary_AsyncExecution::~UExampleComputeShaderLibrary_AsyncExecution() {}
	struct Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_ComputeShader_Plugin_Source_ComputeShader_Public_ExampleComputeShader_ExampleComputeShader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_ComputeShader_Plugin_Source_ComputeShader_Public_ExampleComputeShader_ExampleComputeShader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExampleComputeShaderLibrary_AsyncExecution, UExampleComputeShaderLibrary_AsyncExecution::StaticClass, TEXT("UExampleComputeShaderLibrary_AsyncExecution"), &Z_Registration_Info_UClass_UExampleComputeShaderLibrary_AsyncExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExampleComputeShaderLibrary_AsyncExecution), 2214999942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_ComputeShader_Plugin_Source_ComputeShader_Public_ExampleComputeShader_ExampleComputeShader_h_1013939405(TEXT("/Script/ComputeShader"),
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_ComputeShader_Plugin_Source_ComputeShader_Public_ExampleComputeShader_ExampleComputeShader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_ComputeShader_Plugin_Source_ComputeShader_Public_ExampleComputeShader_ExampleComputeShader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
