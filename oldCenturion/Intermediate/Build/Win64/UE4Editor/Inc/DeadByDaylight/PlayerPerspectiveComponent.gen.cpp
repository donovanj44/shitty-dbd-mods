// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerPerspectiveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPerspectiveComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerPerspectiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerPerspectiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerPerspectiveComponent::execIsLocallyObserved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyObserved();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerPerspectiveComponent::execUpdateLocallyObserved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLocallyObserved();
		P_NATIVE_END;
	}
	void UPlayerPerspectiveComponent::StaticRegisterNativesUPlayerPerspectiveComponent()
	{
		UClass* Class = UPlayerPerspectiveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLocallyObserved", &UPlayerPerspectiveComponent::execIsLocallyObserved },
			{ "UpdateLocallyObserved", &UPlayerPerspectiveComponent::execUpdateLocallyObserved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics
	{
		struct PlayerPerspectiveComponent_eventIsLocallyObserved_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerPerspectiveComponent_eventIsLocallyObserved_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerPerspectiveComponent_eventIsLocallyObserved_Parms), &Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPerspectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerPerspectiveComponent, nullptr, "IsLocallyObserved", nullptr, nullptr, sizeof(PlayerPerspectiveComponent_eventIsLocallyObserved_Parms), Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerPerspectiveComponent_UpdateLocallyObserved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerPerspectiveComponent_UpdateLocallyObserved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPerspectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPerspectiveComponent_UpdateLocallyObserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerPerspectiveComponent, nullptr, "UpdateLocallyObserved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerPerspectiveComponent_UpdateLocallyObserved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPerspectiveComponent_UpdateLocallyObserved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerPerspectiveComponent_UpdateLocallyObserved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerPerspectiveComponent_UpdateLocallyObserved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerPerspectiveComponent_NoRegister()
	{
		return UPlayerPerspectiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerPerspectiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerPerspectiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerPerspectiveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerPerspectiveComponent_IsLocallyObserved, "IsLocallyObserved" }, // 3975679418
		{ &Z_Construct_UFunction_UPlayerPerspectiveComponent_UpdateLocallyObserved, "UpdateLocallyObserved" }, // 3932960641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPerspectiveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerPerspectiveComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerPerspectiveComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerPerspectiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerPerspectiveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerPerspectiveComponent_Statics::ClassParams = {
		&UPlayerPerspectiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerPerspectiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPerspectiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerPerspectiveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerPerspectiveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerPerspectiveComponent, 3858670531);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPlayerPerspectiveComponent>()
	{
		return UPlayerPerspectiveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerPerspectiveComponent(Z_Construct_UClass_UPlayerPerspectiveComponent, &UPlayerPerspectiveComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPlayerPerspectiveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerPerspectiveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
