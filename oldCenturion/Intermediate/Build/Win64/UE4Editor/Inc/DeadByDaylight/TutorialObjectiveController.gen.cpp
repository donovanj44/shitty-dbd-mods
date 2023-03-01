// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TutorialObjectiveController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialObjectiveController() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialObjectiveController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialObjectiveController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UTutorialObjectiveController::execAddObjective)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_tutorialObjectiveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjective(Z_Param_tutorialObjectiveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialObjectiveController::execCompleteObjective)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_tutorialObjectiveId);
		P_GET_UBOOL(Z_Param_removeAfterCompletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteObjective(Z_Param_tutorialObjectiveId,Z_Param_removeAfterCompletion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialObjectiveController::execRemoveAllObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllObjectives();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialObjectiveController::execRemoveObjective)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_tutorialObjectiveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObjective(Z_Param_tutorialObjectiveId);
		P_NATIVE_END;
	}
	void UTutorialObjectiveController::StaticRegisterNativesUTutorialObjectiveController()
	{
		UClass* Class = UTutorialObjectiveController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObjective", &UTutorialObjectiveController::execAddObjective },
			{ "CompleteObjective", &UTutorialObjectiveController::execCompleteObjective },
			{ "RemoveAllObjectives", &UTutorialObjectiveController::execRemoveAllObjectives },
			{ "RemoveObjective", &UTutorialObjectiveController::execRemoveObjective },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics
	{
		struct TutorialObjectiveController_eventAddObjective_Parms
		{
			FName tutorialObjectiveId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tutorialObjectiveId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics::NewProp_tutorialObjectiveId = { "tutorialObjectiveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialObjectiveController_eventAddObjective_Parms, tutorialObjectiveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics::NewProp_tutorialObjectiveId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialObjectiveController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialObjectiveController, nullptr, "AddObjective", nullptr, nullptr, sizeof(TutorialObjectiveController_eventAddObjective_Parms), Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialObjectiveController_AddObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialObjectiveController_AddObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics
	{
		struct TutorialObjectiveController_eventCompleteObjective_Parms
		{
			FName tutorialObjectiveId;
			bool removeAfterCompletion;
		};
		static void NewProp_removeAfterCompletion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_removeAfterCompletion;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tutorialObjectiveId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::NewProp_removeAfterCompletion_SetBit(void* Obj)
	{
		((TutorialObjectiveController_eventCompleteObjective_Parms*)Obj)->removeAfterCompletion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::NewProp_removeAfterCompletion = { "removeAfterCompletion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TutorialObjectiveController_eventCompleteObjective_Parms), &Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::NewProp_removeAfterCompletion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::NewProp_tutorialObjectiveId = { "tutorialObjectiveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialObjectiveController_eventCompleteObjective_Parms, tutorialObjectiveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::NewProp_removeAfterCompletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::NewProp_tutorialObjectiveId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialObjectiveController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialObjectiveController, nullptr, "CompleteObjective", nullptr, nullptr, sizeof(TutorialObjectiveController_eventCompleteObjective_Parms), Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialObjectiveController_RemoveAllObjectives_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectiveController_RemoveAllObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialObjectiveController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialObjectiveController_RemoveAllObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialObjectiveController, nullptr, "RemoveAllObjectives", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectiveController_RemoveAllObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectiveController_RemoveAllObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialObjectiveController_RemoveAllObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialObjectiveController_RemoveAllObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics
	{
		struct TutorialObjectiveController_eventRemoveObjective_Parms
		{
			FName tutorialObjectiveId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tutorialObjectiveId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics::NewProp_tutorialObjectiveId = { "tutorialObjectiveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialObjectiveController_eventRemoveObjective_Parms, tutorialObjectiveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics::NewProp_tutorialObjectiveId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialObjectiveController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialObjectiveController, nullptr, "RemoveObjective", nullptr, nullptr, sizeof(TutorialObjectiveController_eventRemoveObjective_Parms), Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorialObjectiveController_NoRegister()
	{
		return UTutorialObjectiveController::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialObjectiveController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialObjectiveController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTutorialObjectiveController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTutorialObjectiveController_AddObjective, "AddObjective" }, // 1317765177
		{ &Z_Construct_UFunction_UTutorialObjectiveController_CompleteObjective, "CompleteObjective" }, // 2407463844
		{ &Z_Construct_UFunction_UTutorialObjectiveController_RemoveAllObjectives, "RemoveAllObjectives" }, // 1757964911
		{ &Z_Construct_UFunction_UTutorialObjectiveController_RemoveObjective, "RemoveObjective" }, // 39612055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialObjectiveController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TutorialObjectiveController.h" },
		{ "ModuleRelativePath", "Public/TutorialObjectiveController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialObjectiveController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialObjectiveController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialObjectiveController_Statics::ClassParams = {
		&UTutorialObjectiveController::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialObjectiveController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialObjectiveController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialObjectiveController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialObjectiveController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialObjectiveController, 4153032324);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTutorialObjectiveController>()
	{
		return UTutorialObjectiveController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialObjectiveController(Z_Construct_UClass_UTutorialObjectiveController, &UTutorialObjectiveController::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTutorialObjectiveController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialObjectiveController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
