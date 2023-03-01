// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EscapeDoorAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeDoorAnimInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEscapeDoorAnimInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEscapeDoorAnimInstance();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USleepingAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEscapeDoorAnimInstance::execPlaySound)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_akEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySound(Z_Param_akEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEscapeDoorAnimInstance::execSetIsOpen)
	{
		P_GET_UBOOL(Z_Param_isOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsOpen(Z_Param_isOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEscapeDoorAnimInstance::execSetIsOpenByKiller)
	{
		P_GET_UBOOL(Z_Param_isOpenByKiller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsOpenByKiller(Z_Param_isOpenByKiller);
		P_NATIVE_END;
	}
	void UEscapeDoorAnimInstance::StaticRegisterNativesUEscapeDoorAnimInstance()
	{
		UClass* Class = UEscapeDoorAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlaySound", &UEscapeDoorAnimInstance::execPlaySound },
			{ "SetIsOpen", &UEscapeDoorAnimInstance::execSetIsOpen },
			{ "SetIsOpenByKiller", &UEscapeDoorAnimInstance::execSetIsOpenByKiller },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics
	{
		struct EscapeDoorAnimInstance_eventPlaySound_Parms
		{
			UAkAudioEvent* akEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_akEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics::NewProp_akEvent = { "akEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EscapeDoorAnimInstance_eventPlaySound_Parms, akEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics::NewProp_akEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeDoorAnimInstance, nullptr, "PlaySound", nullptr, nullptr, sizeof(EscapeDoorAnimInstance_eventPlaySound_Parms), Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics
	{
		struct EscapeDoorAnimInstance_eventSetIsOpen_Parms
		{
			bool isOpen;
		};
		static void NewProp_isOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::NewProp_isOpen_SetBit(void* Obj)
	{
		((EscapeDoorAnimInstance_eventSetIsOpen_Parms*)Obj)->isOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::NewProp_isOpen = { "isOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeDoorAnimInstance_eventSetIsOpen_Parms), &Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::NewProp_isOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::NewProp_isOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeDoorAnimInstance, nullptr, "SetIsOpen", nullptr, nullptr, sizeof(EscapeDoorAnimInstance_eventSetIsOpen_Parms), Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics
	{
		struct EscapeDoorAnimInstance_eventSetIsOpenByKiller_Parms
		{
			bool isOpenByKiller;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOpenByKiller_MetaData[];
#endif
		static void NewProp_isOpenByKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOpenByKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::NewProp_isOpenByKiller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::NewProp_isOpenByKiller_SetBit(void* Obj)
	{
		((EscapeDoorAnimInstance_eventSetIsOpenByKiller_Parms*)Obj)->isOpenByKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::NewProp_isOpenByKiller = { "isOpenByKiller", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EscapeDoorAnimInstance_eventSetIsOpenByKiller_Parms), &Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::NewProp_isOpenByKiller_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::NewProp_isOpenByKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::NewProp_isOpenByKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::NewProp_isOpenByKiller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EscapeDoorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscapeDoorAnimInstance, nullptr, "SetIsOpenByKiller", nullptr, nullptr, sizeof(EscapeDoorAnimInstance_eventSetIsOpenByKiller_Parms), Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEscapeDoorAnimInstance_NoRegister()
	{
		return UEscapeDoorAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEscapeDoorAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isOpenByKiller_MetaData[];
#endif
		static void NewProp__isOpenByKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOpenByKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isOpen_MetaData[];
#endif
		static void NewProp__isOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USleepingAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEscapeDoorAnimInstance_PlaySound, "PlaySound" }, // 2788554843
		{ &Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpen, "SetIsOpen" }, // 3038263880
		{ &Z_Construct_UFunction_UEscapeDoorAnimInstance_SetIsOpenByKiller, "SetIsOpenByKiller" }, // 1630665059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EscapeDoorAnimInstance.h" },
		{ "ModuleRelativePath", "Public/EscapeDoorAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpenByKiller_MetaData[] = {
		{ "Category", "EscapeDoorAnimInstance" },
		{ "ModuleRelativePath", "Public/EscapeDoorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpenByKiller_SetBit(void* Obj)
	{
		((UEscapeDoorAnimInstance*)Obj)->_isOpenByKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpenByKiller = { "_isOpenByKiller", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEscapeDoorAnimInstance), &Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpenByKiller_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpenByKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpenByKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpen_MetaData[] = {
		{ "Category", "EscapeDoorAnimInstance" },
		{ "ModuleRelativePath", "Public/EscapeDoorAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpen_SetBit(void* Obj)
	{
		((UEscapeDoorAnimInstance*)Obj)->_isOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpen = { "_isOpen", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEscapeDoorAnimInstance), &Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpenByKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::NewProp__isOpen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscapeDoorAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::ClassParams = {
		&UEscapeDoorAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscapeDoorAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEscapeDoorAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEscapeDoorAnimInstance, 1282264853);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEscapeDoorAnimInstance>()
	{
		return UEscapeDoorAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEscapeDoorAnimInstance(Z_Construct_UClass_UEscapeDoorAnimInstance, &UEscapeDoorAnimInstance::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEscapeDoorAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscapeDoorAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
