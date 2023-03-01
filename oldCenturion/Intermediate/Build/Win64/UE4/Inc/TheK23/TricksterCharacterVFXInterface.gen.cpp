// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/TricksterCharacterVFXInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTricksterCharacterVFXInterface() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UTricksterCharacterVFXInterface_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UTricksterCharacterVFXInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TheK23();
// End Cross Module References
	void ITricksterCharacterVFXInterface::HideWeapon()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideWeapon instead.");
	}
	void ITricksterCharacterVFXInterface::SetIsInCooldown(bool isInCooldown)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetIsInCooldown instead.");
	}
	void ITricksterCharacterVFXInterface::SetIsSuperModeReady(bool isSuperModeReady)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetIsSuperModeReady instead.");
	}
	void ITricksterCharacterVFXInterface::SetKnivesVisibility(bool leftKnife, bool rightKnife)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetKnivesVisibility instead.");
	}
	void ITricksterCharacterVFXInterface::SetSuperModeActive(bool active)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSuperModeActive instead.");
	}
	void ITricksterCharacterVFXInterface::ShowWeapon()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowWeapon instead.");
	}
	void UTricksterCharacterVFXInterface::StaticRegisterNativesUTricksterCharacterVFXInterface()
	{
	}
	struct Z_Construct_UFunction_UTricksterCharacterVFXInterface_HideWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTricksterCharacterVFXInterface_HideWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TricksterCharacterVFXInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_HideWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTricksterCharacterVFXInterface, nullptr, "HideWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTricksterCharacterVFXInterface_HideWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterCharacterVFXInterface_HideWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTricksterCharacterVFXInterface_HideWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTricksterCharacterVFXInterface_HideWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics
	{
		static void NewProp_isInCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::NewProp_isInCooldown_SetBit(void* Obj)
	{
		((TricksterCharacterVFXInterface_eventSetIsInCooldown_Parms*)Obj)->isInCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::NewProp_isInCooldown = { "isInCooldown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TricksterCharacterVFXInterface_eventSetIsInCooldown_Parms), &Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::NewProp_isInCooldown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::NewProp_isInCooldown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TricksterCharacterVFXInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTricksterCharacterVFXInterface, nullptr, "SetIsInCooldown", nullptr, nullptr, sizeof(TricksterCharacterVFXInterface_eventSetIsInCooldown_Parms), Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics
	{
		static void NewProp_isSuperModeReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSuperModeReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::NewProp_isSuperModeReady_SetBit(void* Obj)
	{
		((TricksterCharacterVFXInterface_eventSetIsSuperModeReady_Parms*)Obj)->isSuperModeReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::NewProp_isSuperModeReady = { "isSuperModeReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TricksterCharacterVFXInterface_eventSetIsSuperModeReady_Parms), &Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::NewProp_isSuperModeReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::NewProp_isSuperModeReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TricksterCharacterVFXInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTricksterCharacterVFXInterface, nullptr, "SetIsSuperModeReady", nullptr, nullptr, sizeof(TricksterCharacterVFXInterface_eventSetIsSuperModeReady_Parms), Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics
	{
		static void NewProp_rightKnife_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rightKnife;
		static void NewProp_leftKnife_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_leftKnife;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::NewProp_rightKnife_SetBit(void* Obj)
	{
		((TricksterCharacterVFXInterface_eventSetKnivesVisibility_Parms*)Obj)->rightKnife = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::NewProp_rightKnife = { "rightKnife", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TricksterCharacterVFXInterface_eventSetKnivesVisibility_Parms), &Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::NewProp_rightKnife_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::NewProp_leftKnife_SetBit(void* Obj)
	{
		((TricksterCharacterVFXInterface_eventSetKnivesVisibility_Parms*)Obj)->leftKnife = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::NewProp_leftKnife = { "leftKnife", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TricksterCharacterVFXInterface_eventSetKnivesVisibility_Parms), &Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::NewProp_leftKnife_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::NewProp_rightKnife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::NewProp_leftKnife,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TricksterCharacterVFXInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTricksterCharacterVFXInterface, nullptr, "SetKnivesVisibility", nullptr, nullptr, sizeof(TricksterCharacterVFXInterface_eventSetKnivesVisibility_Parms), Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics
	{
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((TricksterCharacterVFXInterface_eventSetSuperModeActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TricksterCharacterVFXInterface_eventSetSuperModeActive_Parms), &Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TricksterCharacterVFXInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTricksterCharacterVFXInterface, nullptr, "SetSuperModeActive", nullptr, nullptr, sizeof(TricksterCharacterVFXInterface_eventSetSuperModeActive_Parms), Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTricksterCharacterVFXInterface_ShowWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTricksterCharacterVFXInterface_ShowWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TricksterCharacterVFXInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTricksterCharacterVFXInterface_ShowWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTricksterCharacterVFXInterface, nullptr, "ShowWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTricksterCharacterVFXInterface_ShowWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterCharacterVFXInterface_ShowWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTricksterCharacterVFXInterface_ShowWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTricksterCharacterVFXInterface_ShowWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTricksterCharacterVFXInterface_NoRegister()
	{
		return UTricksterCharacterVFXInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTricksterCharacterVFXInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTricksterCharacterVFXInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTricksterCharacterVFXInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTricksterCharacterVFXInterface_HideWeapon, "HideWeapon" }, // 1650741979
		{ &Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsInCooldown, "SetIsInCooldown" }, // 1694231467
		{ &Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetIsSuperModeReady, "SetIsSuperModeReady" }, // 3114614396
		{ &Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetKnivesVisibility, "SetKnivesVisibility" }, // 1651122012
		{ &Z_Construct_UFunction_UTricksterCharacterVFXInterface_SetSuperModeActive, "SetSuperModeActive" }, // 314674994
		{ &Z_Construct_UFunction_UTricksterCharacterVFXInterface_ShowWeapon, "ShowWeapon" }, // 1233955524
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterCharacterVFXInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TricksterCharacterVFXInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTricksterCharacterVFXInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITricksterCharacterVFXInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTricksterCharacterVFXInterface_Statics::ClassParams = {
		&UTricksterCharacterVFXInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTricksterCharacterVFXInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterCharacterVFXInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTricksterCharacterVFXInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTricksterCharacterVFXInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTricksterCharacterVFXInterface, 1108284012);
	template<> THEK23_API UClass* StaticClass<UTricksterCharacterVFXInterface>()
	{
		return UTricksterCharacterVFXInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTricksterCharacterVFXInterface(Z_Construct_UClass_UTricksterCharacterVFXInterface, &UTricksterCharacterVFXInterface::StaticClass, TEXT("/Script/TheK23"), TEXT("UTricksterCharacterVFXInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTricksterCharacterVFXInterface);
	static FName NAME_UTricksterCharacterVFXInterface_HideWeapon = FName(TEXT("HideWeapon"));
	void ITricksterCharacterVFXInterface::Execute_HideWeapon(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTricksterCharacterVFXInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTricksterCharacterVFXInterface_HideWeapon);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UTricksterCharacterVFXInterface_SetIsInCooldown = FName(TEXT("SetIsInCooldown"));
	void ITricksterCharacterVFXInterface::Execute_SetIsInCooldown(UObject* O, bool isInCooldown)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTricksterCharacterVFXInterface::StaticClass()));
		TricksterCharacterVFXInterface_eventSetIsInCooldown_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTricksterCharacterVFXInterface_SetIsInCooldown);
		if (Func)
		{
			Parms.isInCooldown=isInCooldown;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTricksterCharacterVFXInterface_SetIsSuperModeReady = FName(TEXT("SetIsSuperModeReady"));
	void ITricksterCharacterVFXInterface::Execute_SetIsSuperModeReady(UObject* O, bool isSuperModeReady)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTricksterCharacterVFXInterface::StaticClass()));
		TricksterCharacterVFXInterface_eventSetIsSuperModeReady_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTricksterCharacterVFXInterface_SetIsSuperModeReady);
		if (Func)
		{
			Parms.isSuperModeReady=isSuperModeReady;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTricksterCharacterVFXInterface_SetKnivesVisibility = FName(TEXT("SetKnivesVisibility"));
	void ITricksterCharacterVFXInterface::Execute_SetKnivesVisibility(UObject* O, bool leftKnife, bool rightKnife)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTricksterCharacterVFXInterface::StaticClass()));
		TricksterCharacterVFXInterface_eventSetKnivesVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTricksterCharacterVFXInterface_SetKnivesVisibility);
		if (Func)
		{
			Parms.leftKnife=leftKnife;
			Parms.rightKnife=rightKnife;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTricksterCharacterVFXInterface_SetSuperModeActive = FName(TEXT("SetSuperModeActive"));
	void ITricksterCharacterVFXInterface::Execute_SetSuperModeActive(UObject* O, bool active)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTricksterCharacterVFXInterface::StaticClass()));
		TricksterCharacterVFXInterface_eventSetSuperModeActive_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTricksterCharacterVFXInterface_SetSuperModeActive);
		if (Func)
		{
			Parms.active=active;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTricksterCharacterVFXInterface_ShowWeapon = FName(TEXT("ShowWeapon"));
	void ITricksterCharacterVFXInterface::Execute_ShowWeapon(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTricksterCharacterVFXInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTricksterCharacterVFXInterface_ShowWeapon);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
