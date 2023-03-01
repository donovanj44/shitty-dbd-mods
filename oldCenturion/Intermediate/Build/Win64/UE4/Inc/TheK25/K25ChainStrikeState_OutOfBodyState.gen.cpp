// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainStrikeState_OutOfBodyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainStrikeState_OutOfBodyState() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeBaseState();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UK25ChainStrikeState_OutOfBodyState::StaticRegisterNativesUK25ChainStrikeState_OutOfBodyState()
	{
	}
	UClass* Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_NoRegister()
	{
		return UK25ChainStrikeState_OutOfBodyState::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fovTimeChangeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fovTimeChangeDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK25ChainStrikeBaseState,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ChainStrikeState_OutOfBodyState.h" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeState_OutOfBodyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::NewProp__fovTimeChangeDuration_MetaData[] = {
		{ "Category", "K25ChainStrikeState_OutOfBodyState" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeState_OutOfBodyState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::NewProp__fovTimeChangeDuration = { "_fovTimeChangeDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeState_OutOfBodyState, _fovTimeChangeDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::NewProp__fovTimeChangeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::NewProp__fovTimeChangeDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::NewProp__fovTimeChangeDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainStrikeState_OutOfBodyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::ClassParams = {
		&UK25ChainStrikeState_OutOfBodyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainStrikeState_OutOfBodyState, 2089415912);
	template<> THEK25_API UClass* StaticClass<UK25ChainStrikeState_OutOfBodyState>()
	{
		return UK25ChainStrikeState_OutOfBodyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainStrikeState_OutOfBodyState(Z_Construct_UClass_UK25ChainStrikeState_OutOfBodyState, &UK25ChainStrikeState_OutOfBodyState::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainStrikeState_OutOfBodyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainStrikeState_OutOfBodyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
