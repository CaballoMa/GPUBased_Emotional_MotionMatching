// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/MotionMatchingAnimNodeLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionMatchingAnimNodeLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
	POSESEARCH_API UClass* Z_Construct_UClass_UMotionMatchingAnimNodeLibrary();
	POSESEARCH_API UClass* Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References

static_assert(std::is_polymorphic<FMotionMatchingAnimNodeReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FMotionMatchingAnimNodeReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionMatchingAnimNodeReference;
class UScriptStruct* FMotionMatchingAnimNodeReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionMatchingAnimNodeReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionMatchingAnimNodeReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("MotionMatchingAnimNodeReference"));
	}
	return Z_Registration_Info_UScriptStruct_MotionMatchingAnimNodeReference.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FMotionMatchingAnimNodeReference>()
{
	return FMotionMatchingAnimNodeReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/MotionMatchingAnimNodeLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionMatchingAnimNodeReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FAnimNodeReference,
		&NewStructOps,
		"MotionMatchingAnimNodeReference",
		nullptr,
		0,
		sizeof(FMotionMatchingAnimNodeReference),
		alignof(FMotionMatchingAnimNodeReference),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionMatchingAnimNodeReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionMatchingAnimNodeReference.InnerSingleton, Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionMatchingAnimNodeReference.InnerSingleton;
	}
	DEFINE_FUNCTION(UMotionMatchingAnimNodeLibrary::execForceInterruptNextUpdate)
	{
		P_GET_STRUCT_REF(FMotionMatchingAnimNodeReference,Z_Param_Out_MotionMatchingNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionMatchingAnimNodeLibrary::ForceInterruptNextUpdate(Z_Param_Out_MotionMatchingNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionMatchingAnimNodeLibrary::execResetDatabasesToSearch)
	{
		P_GET_STRUCT_REF(FMotionMatchingAnimNodeReference,Z_Param_Out_MotionMatchingNode);
		P_GET_UBOOL(Z_Param_bForceInterrupt);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionMatchingAnimNodeLibrary::ResetDatabasesToSearch(Z_Param_Out_MotionMatchingNode,Z_Param_bForceInterrupt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionMatchingAnimNodeLibrary::execSetDatabasesToSearch)
	{
		P_GET_STRUCT_REF(FMotionMatchingAnimNodeReference,Z_Param_Out_MotionMatchingNode);
		P_GET_TARRAY_REF(UPoseSearchDatabase*,Z_Param_Out_Databases);
		P_GET_UBOOL(Z_Param_bForceInterruptIfNew);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionMatchingAnimNodeLibrary::SetDatabasesToSearch(Z_Param_Out_MotionMatchingNode,Z_Param_Out_Databases,Z_Param_bForceInterruptIfNew);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionMatchingAnimNodeLibrary::execSetDatabaseToSearch)
	{
		P_GET_STRUCT_REF(FMotionMatchingAnimNodeReference,Z_Param_Out_MotionMatchingNode);
		P_GET_OBJECT(UPoseSearchDatabase,Z_Param_Database);
		P_GET_UBOOL(Z_Param_bForceInterruptIfNew);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionMatchingAnimNodeLibrary::SetDatabaseToSearch(Z_Param_Out_MotionMatchingNode,Z_Param_Database,Z_Param_bForceInterruptIfNew);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionMatchingAnimNodeLibrary::execConvertToMotionMatchingNodePure)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_STRUCT_REF(FMotionMatchingAnimNodeReference,Z_Param_Out_MotionMatchingNode);
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionMatchingAnimNodeLibrary::ConvertToMotionMatchingNodePure(Z_Param_Out_Node,Z_Param_Out_MotionMatchingNode,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionMatchingAnimNodeLibrary::execConvertToMotionMatchingNode)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMotionMatchingAnimNodeReference*)Z_Param__Result=UMotionMatchingAnimNodeLibrary::ConvertToMotionMatchingNode(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void UMotionMatchingAnimNodeLibrary::StaticRegisterNativesUMotionMatchingAnimNodeLibrary()
	{
		UClass* Class = UMotionMatchingAnimNodeLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToMotionMatchingNode", &UMotionMatchingAnimNodeLibrary::execConvertToMotionMatchingNode },
			{ "ConvertToMotionMatchingNodePure", &UMotionMatchingAnimNodeLibrary::execConvertToMotionMatchingNodePure },
			{ "ForceInterruptNextUpdate", &UMotionMatchingAnimNodeLibrary::execForceInterruptNextUpdate },
			{ "ResetDatabasesToSearch", &UMotionMatchingAnimNodeLibrary::execResetDatabasesToSearch },
			{ "SetDatabasesToSearch", &UMotionMatchingAnimNodeLibrary::execSetDatabasesToSearch },
			{ "SetDatabaseToSearch", &UMotionMatchingAnimNodeLibrary::execSetDatabaseToSearch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics
	{
		struct MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNode_Parms
		{
			FAnimNodeReference Node;
			EAnimNodeReferenceConversionResult Result;
			FMotionMatchingAnimNodeReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNode_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_Node_MetaData), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_Node_MetaData) }; // 1480235276
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNode_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 4144947483
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 3183695579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|MotionMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a motion matching node context from an anim node context */" },
#endif
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/PoseSearch/MotionMatchingAnimNodeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a motion matching node context from an anim node context" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionMatchingAnimNodeLibrary, nullptr, "ConvertToMotionMatchingNode", nullptr, nullptr, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics
	{
		struct MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNodePure_Parms
		{
			FAnimNodeReference Node;
			FMotionMatchingAnimNodeReference MotionMatchingNode;
			bool Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MotionMatchingNode;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNodePure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_Node_MetaData), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_Node_MetaData) }; // 1480235276
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_MotionMatchingNode = { "MotionMatchingNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNodePure_Parms, MotionMatchingNode), Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 3183695579
	void Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNodePure_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNodePure_Parms), &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_MotionMatchingNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|MotionMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a motion matching node context from an anim node context (pure) */" },
#endif
		{ "DisplayName", "Convert to Motion Matching Node" },
		{ "ModuleRelativePath", "Public/PoseSearch/MotionMatchingAnimNodeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a motion matching node context from an anim node context (pure)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionMatchingAnimNodeLibrary, nullptr, "ConvertToMotionMatchingNodePure", nullptr, nullptr, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNodePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::MotionMatchingAnimNodeLibrary_eventConvertToMotionMatchingNodePure_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics
	{
		struct MotionMatchingAnimNodeLibrary_eventForceInterruptNextUpdate_Parms
		{
			FMotionMatchingAnimNodeReference MotionMatchingNode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionMatchingNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MotionMatchingNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::NewProp_MotionMatchingNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::NewProp_MotionMatchingNode = { "MotionMatchingNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventForceInterruptNextUpdate_Parms, MotionMatchingNode), Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::NewProp_MotionMatchingNode_MetaData), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::NewProp_MotionMatchingNode_MetaData) }; // 3183695579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::NewProp_MotionMatchingNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|MotionMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Ignore the continuing pose (the current clip that's playing) and force a new search.\n\x09 * @param MotionMatchingNode - The motion matching node to operate on.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/MotionMatchingAnimNodeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ignore the continuing pose (the current clip that's playing) and force a new search.\n@param MotionMatchingNode - The motion matching node to operate on." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionMatchingAnimNodeLibrary, nullptr, "ForceInterruptNextUpdate", nullptr, nullptr, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::MotionMatchingAnimNodeLibrary_eventForceInterruptNextUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::MotionMatchingAnimNodeLibrary_eventForceInterruptNextUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics
	{
		struct MotionMatchingAnimNodeLibrary_eventResetDatabasesToSearch_Parms
		{
			FMotionMatchingAnimNodeReference MotionMatchingNode;
			bool bForceInterrupt;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionMatchingNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MotionMatchingNode;
		static void NewProp_bForceInterrupt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceInterrupt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::NewProp_MotionMatchingNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::NewProp_MotionMatchingNode = { "MotionMatchingNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventResetDatabasesToSearch_Parms, MotionMatchingNode), Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::NewProp_MotionMatchingNode_MetaData), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::NewProp_MotionMatchingNode_MetaData) }; // 3183695579
	void Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::NewProp_bForceInterrupt_SetBit(void* Obj)
	{
		((MotionMatchingAnimNodeLibrary_eventResetDatabasesToSearch_Parms*)Obj)->bForceInterrupt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::NewProp_bForceInterrupt = { "bForceInterrupt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionMatchingAnimNodeLibrary_eventResetDatabasesToSearch_Parms), &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::NewProp_bForceInterrupt_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::NewProp_MotionMatchingNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::NewProp_bForceInterrupt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|MotionMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clear the effects of SetDatabaseToSearch/SetDatabasesToSearch and resume searching the Database property on the motion matching node.\n\x09 * @param MotionMatchingNode - The motion matching node to operate on.\n\x09 * @param bForceInterrupt - Force a search after the reset. If false, the continuing pose (the current clip that's playing) will continue\n\x09\x09to play until a better match is found from the Database property.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/MotionMatchingAnimNodeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear the effects of SetDatabaseToSearch/SetDatabasesToSearch and resume searching the Database property on the motion matching node.\n@param MotionMatchingNode - The motion matching node to operate on.\n@param bForceInterrupt - Force a search after the reset. If false, the continuing pose (the current clip that's playing) will continue\n               to play until a better match is found from the Database property." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionMatchingAnimNodeLibrary, nullptr, "ResetDatabasesToSearch", nullptr, nullptr, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::MotionMatchingAnimNodeLibrary_eventResetDatabasesToSearch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::MotionMatchingAnimNodeLibrary_eventResetDatabasesToSearch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics
	{
		struct MotionMatchingAnimNodeLibrary_eventSetDatabasesToSearch_Parms
		{
			FMotionMatchingAnimNodeReference MotionMatchingNode;
			TArray<UPoseSearchDatabase*> Databases;
			bool bForceInterruptIfNew;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionMatchingNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MotionMatchingNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Databases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Databases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Databases;
		static void NewProp_bForceInterruptIfNew_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceInterruptIfNew;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_MotionMatchingNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_MotionMatchingNode = { "MotionMatchingNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventSetDatabasesToSearch_Parms, MotionMatchingNode), Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_MotionMatchingNode_MetaData), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_MotionMatchingNode_MetaData) }; // 3183695579
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_Databases_Inner = { "Databases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_Databases_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_Databases = { "Databases", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventSetDatabasesToSearch_Parms, Databases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_Databases_MetaData), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_Databases_MetaData) };
	void Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_bForceInterruptIfNew_SetBit(void* Obj)
	{
		((MotionMatchingAnimNodeLibrary_eventSetDatabasesToSearch_Parms*)Obj)->bForceInterruptIfNew = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_bForceInterruptIfNew = { "bForceInterruptIfNew", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionMatchingAnimNodeLibrary_eventSetDatabasesToSearch_Parms), &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_bForceInterruptIfNew_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_MotionMatchingNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_Databases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_Databases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::NewProp_bForceInterruptIfNew,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|MotionMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the database to search on the motion matching node. This overrides the Database property on the motion matching node.\n\x09 * @param MotionMatchingNode - The motion matching node to operate on.\n\x09 * @param Databases - Array of databases for the motion matching node to search.\n\x09 * @param bForceInterruptIfNew - If true, ignore the continuing pose (the current clip that's playing) and force a search of the new databases. \n\x09\x09If false, the continuing pose will continue to play until a better match is found in one of the new databases. This setting is ignored if the \n\x09\x09motion matching node is already searching this array of databases (note: a subset of databases or the same databases in a different order is\n\x09\x09""considered to be a new array of databases).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/MotionMatchingAnimNodeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the database to search on the motion matching node. This overrides the Database property on the motion matching node.\n@param MotionMatchingNode - The motion matching node to operate on.\n@param Databases - Array of databases for the motion matching node to search.\n@param bForceInterruptIfNew - If true, ignore the continuing pose (the current clip that's playing) and force a search of the new databases.\n               If false, the continuing pose will continue to play until a better match is found in one of the new databases. This setting is ignored if the\n               motion matching node is already searching this array of databases (note: a subset of databases or the same databases in a different order is\n               considered to be a new array of databases)." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionMatchingAnimNodeLibrary, nullptr, "SetDatabasesToSearch", nullptr, nullptr, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::MotionMatchingAnimNodeLibrary_eventSetDatabasesToSearch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::MotionMatchingAnimNodeLibrary_eventSetDatabasesToSearch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics
	{
		struct MotionMatchingAnimNodeLibrary_eventSetDatabaseToSearch_Parms
		{
			FMotionMatchingAnimNodeReference MotionMatchingNode;
			UPoseSearchDatabase* Database;
			bool bForceInterruptIfNew;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionMatchingNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MotionMatchingNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Database;
		static void NewProp_bForceInterruptIfNew_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceInterruptIfNew;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_MotionMatchingNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_MotionMatchingNode = { "MotionMatchingNode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventSetDatabaseToSearch_Parms, MotionMatchingNode), Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_MotionMatchingNode_MetaData), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_MotionMatchingNode_MetaData) }; // 3183695579
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_Database = { "Database", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionMatchingAnimNodeLibrary_eventSetDatabaseToSearch_Parms, Database), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_bForceInterruptIfNew_SetBit(void* Obj)
	{
		((MotionMatchingAnimNodeLibrary_eventSetDatabaseToSearch_Parms*)Obj)->bForceInterruptIfNew = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_bForceInterruptIfNew = { "bForceInterruptIfNew", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionMatchingAnimNodeLibrary_eventSetDatabaseToSearch_Parms), &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_bForceInterruptIfNew_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_MotionMatchingNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_Database,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::NewProp_bForceInterruptIfNew,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|MotionMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the database to search on the motion matching node. This overrides the Database property on the motion matching node.\n\x09 * @param MotionMatchingNode - The motion matching node to operate on.\n\x09 * @param Database - The database for the motion matching node to search.\n\x09 * @param bForceInterruptIfNew - If true, ignore the continuing pose (the current clip that's playing) and force a search of the new database. \n\x09\x09If false, the continuing pose will continue to play until a better match is found in the new database. This setting is ignored if the \n\x09\x09motion matching node is already searching this database.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/MotionMatchingAnimNodeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the database to search on the motion matching node. This overrides the Database property on the motion matching node.\n@param MotionMatchingNode - The motion matching node to operate on.\n@param Database - The database for the motion matching node to search.\n@param bForceInterruptIfNew - If true, ignore the continuing pose (the current clip that's playing) and force a search of the new database.\n               If false, the continuing pose will continue to play until a better match is found in the new database. This setting is ignored if the\n               motion matching node is already searching this database." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionMatchingAnimNodeLibrary, nullptr, "SetDatabaseToSearch", nullptr, nullptr, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::MotionMatchingAnimNodeLibrary_eventSetDatabaseToSearch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::MotionMatchingAnimNodeLibrary_eventSetDatabaseToSearch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionMatchingAnimNodeLibrary);
	UClass* Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_NoRegister()
	{
		return UMotionMatchingAnimNodeLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode, "ConvertToMotionMatchingNode" }, // 2846908587
		{ &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure, "ConvertToMotionMatchingNodePure" }, // 1233128196
		{ &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate, "ForceInterruptNextUpdate" }, // 4096529472
		{ &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch, "ResetDatabasesToSearch" }, // 596230516
		{ &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch, "SetDatabasesToSearch" }, // 3575211214
		{ &Z_Construct_UFunction_UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch, "SetDatabaseToSearch" }, // 447767641
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Exposes operations that can be run on a Motion Matching node via Anim Node Functions such as \"On Become Relevant\" and \"On Update\".\n" },
#endif
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "PoseSearch/MotionMatchingAnimNodeLibrary.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/MotionMatchingAnimNodeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposes operations that can be run on a Motion Matching node via Anim Node Functions such as \"On Become Relevant\" and \"On Update\"." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionMatchingAnimNodeLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::ClassParams = {
		&UMotionMatchingAnimNodeLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMotionMatchingAnimNodeLibrary()
	{
		if (!Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.OuterSingleton, Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UMotionMatchingAnimNodeLibrary>()
	{
		return UMotionMatchingAnimNodeLibrary::StaticClass();
	}
	UMotionMatchingAnimNodeLibrary::UMotionMatchingAnimNodeLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionMatchingAnimNodeLibrary);
	UMotionMatchingAnimNodeLibrary::~UMotionMatchingAnimNodeLibrary() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_Statics::ScriptStructInfo[] = {
		{ FMotionMatchingAnimNodeReference::StaticStruct, Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics::NewStructOps, TEXT("MotionMatchingAnimNodeReference"), &Z_Registration_Info_UScriptStruct_MotionMatchingAnimNodeReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionMatchingAnimNodeReference), 3183695579U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionMatchingAnimNodeLibrary, UMotionMatchingAnimNodeLibrary::StaticClass, TEXT("UMotionMatchingAnimNodeLibrary"), &Z_Registration_Info_UClass_UMotionMatchingAnimNodeLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionMatchingAnimNodeLibrary), 1824433605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_1569132426(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
