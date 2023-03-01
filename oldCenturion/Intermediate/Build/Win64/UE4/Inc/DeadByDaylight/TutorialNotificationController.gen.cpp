// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TutorialNotificationController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialNotificationController() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialNotificationController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialNotificationController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventTutorialNotificationControllerOnBlockingNotificationDismissedEvent_Parms
		{
			FName tutorialNotificationId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tutorialNotificationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics::NewProp_tutorialNotificationId = { "tutorialNotificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventTutorialNotificationControllerOnBlockingNotificationDismissedEvent_Parms, tutorialNotificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics::NewProp_tutorialNotificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialNotificationController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventTutorialNotificationControllerOnBlockingNotificationDismissedEvent_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTutorialNotificationController::execHideNotification)
	{
		P_GET_UBOOL(Z_Param_removeAllCachedNotifs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideNotification(Z_Param_removeAllCachedNotifs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialNotificationController::execOnBlockingNotificationDismissed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlockingNotificationDismissed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialNotificationController::execShowBlockingNotification)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_tutorialNotificationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowBlockingNotification(Z_Param_tutorialNotificationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTutorialNotificationController::execShowNotification)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_tutorialNotificationId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowNotification(Z_Param_tutorialNotificationId,Z_Param_duration);
		P_NATIVE_END;
	}
	void UTutorialNotificationController::StaticRegisterNativesUTutorialNotificationController()
	{
		UClass* Class = UTutorialNotificationController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideNotification", &UTutorialNotificationController::execHideNotification },
			{ "OnBlockingNotificationDismissed", &UTutorialNotificationController::execOnBlockingNotificationDismissed },
			{ "ShowBlockingNotification", &UTutorialNotificationController::execShowBlockingNotification },
			{ "ShowNotification", &UTutorialNotificationController::execShowNotification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics
	{
		struct TutorialNotificationController_eventHideNotification_Parms
		{
			bool removeAllCachedNotifs;
		};
		static void NewProp_removeAllCachedNotifs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_removeAllCachedNotifs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::NewProp_removeAllCachedNotifs_SetBit(void* Obj)
	{
		((TutorialNotificationController_eventHideNotification_Parms*)Obj)->removeAllCachedNotifs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::NewProp_removeAllCachedNotifs = { "removeAllCachedNotifs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TutorialNotificationController_eventHideNotification_Parms), &Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::NewProp_removeAllCachedNotifs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::NewProp_removeAllCachedNotifs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialNotificationController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialNotificationController, nullptr, "HideNotification", nullptr, nullptr, sizeof(TutorialNotificationController_eventHideNotification_Parms), Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialNotificationController_HideNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialNotificationController_HideNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialNotificationController_OnBlockingNotificationDismissed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialNotificationController_OnBlockingNotificationDismissed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialNotificationController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialNotificationController_OnBlockingNotificationDismissed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialNotificationController, nullptr, "OnBlockingNotificationDismissed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialNotificationController_OnBlockingNotificationDismissed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialNotificationController_OnBlockingNotificationDismissed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialNotificationController_OnBlockingNotificationDismissed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialNotificationController_OnBlockingNotificationDismissed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics
	{
		struct TutorialNotificationController_eventShowBlockingNotification_Parms
		{
			FName tutorialNotificationId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tutorialNotificationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics::NewProp_tutorialNotificationId = { "tutorialNotificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialNotificationController_eventShowBlockingNotification_Parms, tutorialNotificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics::NewProp_tutorialNotificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialNotificationController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialNotificationController, nullptr, "ShowBlockingNotification", nullptr, nullptr, sizeof(TutorialNotificationController_eventShowBlockingNotification_Parms), Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics
	{
		struct TutorialNotificationController_eventShowNotification_Parms
		{
			FName tutorialNotificationId;
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tutorialNotificationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialNotificationController_eventShowNotification_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::NewProp_tutorialNotificationId = { "tutorialNotificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialNotificationController_eventShowNotification_Parms, tutorialNotificationId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::NewProp_tutorialNotificationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialNotificationController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialNotificationController, nullptr, "ShowNotification", nullptr, nullptr, sizeof(TutorialNotificationController_eventShowNotification_Parms), Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialNotificationController_ShowNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialNotificationController_ShowNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorialNotificationController_NoRegister()
	{
		return UTutorialNotificationController::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialNotificationController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBlockingNotificationDismissedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlockingNotificationDismissedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialNotificationController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTutorialNotificationController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTutorialNotificationController_HideNotification, "HideNotification" }, // 525584740
		{ &Z_Construct_UFunction_UTutorialNotificationController_OnBlockingNotificationDismissed, "OnBlockingNotificationDismissed" }, // 3680907804
		{ &Z_Construct_UFunction_UTutorialNotificationController_ShowBlockingNotification, "ShowBlockingNotification" }, // 3570512474
		{ &Z_Construct_UFunction_UTutorialNotificationController_ShowNotification, "ShowNotification" }, // 488049256
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialNotificationController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TutorialNotificationController.h" },
		{ "ModuleRelativePath", "Public/TutorialNotificationController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialNotificationController_Statics::NewProp_OnBlockingNotificationDismissedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TutorialNotificationController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTutorialNotificationController_Statics::NewProp_OnBlockingNotificationDismissedEvent = { "OnBlockingNotificationDismissedEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTutorialNotificationController, OnBlockingNotificationDismissedEvent), Z_Construct_UDelegateFunction_DeadByDaylight_TutorialNotificationControllerOnBlockingNotificationDismissedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTutorialNotificationController_Statics::NewProp_OnBlockingNotificationDismissedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialNotificationController_Statics::NewProp_OnBlockingNotificationDismissedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTutorialNotificationController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialNotificationController_Statics::NewProp_OnBlockingNotificationDismissedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialNotificationController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialNotificationController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialNotificationController_Statics::ClassParams = {
		&UTutorialNotificationController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTutorialNotificationController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialNotificationController_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialNotificationController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialNotificationController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialNotificationController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialNotificationController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialNotificationController, 1214526965);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTutorialNotificationController>()
	{
		return UTutorialNotificationController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialNotificationController(Z_Construct_UClass_UTutorialNotificationController, &UTutorialNotificationController::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTutorialNotificationController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialNotificationController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
