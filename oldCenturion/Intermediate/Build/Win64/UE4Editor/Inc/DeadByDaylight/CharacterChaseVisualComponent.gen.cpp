// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterChaseVisualComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterChaseVisualComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseEndEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseStartEvent__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterChaseVisualComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterChaseVisualComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseEndEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseEndEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseEndEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "CharacterChaseVisualComponentOnChaseEndEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseEndEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseEndEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseEndEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseEndEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseStartEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseStartEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseStartEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "CharacterChaseVisualComponentOnChaseStartEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseStartEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseStartEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseStartEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseStartEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCharacterChaseVisualComponent::execOnAllChaseEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAllChaseEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterChaseVisualComponent::execOnObservedCharacterChange)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObservedCharacterChange(Z_Param_player);
		P_NATIVE_END;
	}
	void UCharacterChaseVisualComponent::StaticRegisterNativesUCharacterChaseVisualComponent()
	{
		UClass* Class = UCharacterChaseVisualComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAllChaseEnd", &UCharacterChaseVisualComponent::execOnAllChaseEnd },
			{ "OnObservedCharacterChange", &UCharacterChaseVisualComponent::execOnObservedCharacterChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterChaseVisualComponent_OnAllChaseEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterChaseVisualComponent_OnAllChaseEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterChaseVisualComponent_OnAllChaseEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterChaseVisualComponent, nullptr, "OnAllChaseEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterChaseVisualComponent_OnAllChaseEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterChaseVisualComponent_OnAllChaseEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterChaseVisualComponent_OnAllChaseEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterChaseVisualComponent_OnAllChaseEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics
	{
		struct CharacterChaseVisualComponent_eventOnObservedCharacterChange_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterChaseVisualComponent_eventOnObservedCharacterChange_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterChaseVisualComponent, nullptr, "OnObservedCharacterChange", nullptr, nullptr, sizeof(CharacterChaseVisualComponent_eventOnObservedCharacterChange_Parms), Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterChaseVisualComponent_NoRegister()
	{
		return UCharacterChaseVisualComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterChaseVisualComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fovModifyFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fovModifyFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__relativeRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__relativeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__relativeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__relativeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__relativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__relativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vignetteMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__vignetteMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChaseEndEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaseEndEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChaseStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaseStartEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterChaseVisualComponent_OnAllChaseEnd, "OnAllChaseEnd" }, // 1051842595
		{ &Z_Construct_UFunction_UCharacterChaseVisualComponent_OnObservedCharacterChange, "OnObservedCharacterChange" }, // 1242224484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterChaseVisualComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__fovModifyFactor_MetaData[] = {
		{ "Category", "CharacterChaseVisualComponent" },
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__fovModifyFactor = { "_fovModifyFactor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterChaseVisualComponent, _fovModifyFactor), METADATA_PARAMS(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__fovModifyFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__fovModifyFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterChaseVisualComponent" },
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeRotation = { "_relativeRotation", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterChaseVisualComponent, _relativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterChaseVisualComponent" },
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeScale = { "_relativeScale", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterChaseVisualComponent, _relativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CharacterChaseVisualComponent" },
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeLocation = { "_relativeLocation", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterChaseVisualComponent, _relativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__vignetteMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__vignetteMeshComp = { "_vignetteMeshComp", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterChaseVisualComponent, _vignetteMeshComp), Z_Construct_UClass_UMaterialHelperUnaffectedStaticMeshComp_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__vignetteMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__vignetteMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp_OnChaseEndEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp_OnChaseEndEvent = { "OnChaseEndEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterChaseVisualComponent, OnChaseEndEvent), Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseEndEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp_OnChaseEndEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp_OnChaseEndEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp_OnChaseStartEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterChaseVisualComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp_OnChaseStartEvent = { "OnChaseStartEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterChaseVisualComponent, OnChaseStartEvent), Z_Construct_UDelegateFunction_DeadByDaylight_CharacterChaseVisualComponentOnChaseStartEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp_OnChaseStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp_OnChaseStartEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__fovModifyFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__relativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp__vignetteMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp_OnChaseEndEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::NewProp_OnChaseStartEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterChaseVisualComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::ClassParams = {
		&UCharacterChaseVisualComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterChaseVisualComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterChaseVisualComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterChaseVisualComponent, 3556857315);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterChaseVisualComponent>()
	{
		return UCharacterChaseVisualComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterChaseVisualComponent(Z_Construct_UClass_UCharacterChaseVisualComponent, &UCharacterChaseVisualComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterChaseVisualComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterChaseVisualComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
