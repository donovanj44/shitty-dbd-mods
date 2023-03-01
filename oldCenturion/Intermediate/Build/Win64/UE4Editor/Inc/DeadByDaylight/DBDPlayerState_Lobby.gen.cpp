// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPlayerState_Lobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerState_Lobby() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_Lobby_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_Lobby();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_Menu();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ADBDPlayerState_Lobby::StaticRegisterNativesADBDPlayerState_Lobby()
	{
	}
	UClass* Z_Construct_UClass_ADBDPlayerState_Lobby_NoRegister()
	{
		return ADBDPlayerState_Lobby::StaticClass();
	}
	struct Z_Construct_UClass_ADBDPlayerState_Lobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOwnershipValidated_MetaData[];
#endif
		static void NewProp_IsOwnershipValidated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOwnershipValidated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDPlayerState_Menu,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDPlayerState_Lobby.h" },
		{ "ModuleRelativePath", "Public/DBDPlayerState_Lobby.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::NewProp_IsOwnershipValidated_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState_Lobby.h" },
	};
#endif
	void Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::NewProp_IsOwnershipValidated_SetBit(void* Obj)
	{
		((ADBDPlayerState_Lobby*)Obj)->IsOwnershipValidated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::NewProp_IsOwnershipValidated = { "IsOwnershipValidated", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDPlayerState_Lobby), &Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::NewProp_IsOwnershipValidated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::NewProp_IsOwnershipValidated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::NewProp_IsOwnershipValidated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::NewProp_IsOwnershipValidated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDPlayerState_Lobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::ClassParams = {
		&ADBDPlayerState_Lobby::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDPlayerState_Lobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDPlayerState_Lobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDPlayerState_Lobby, 1562660462);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDPlayerState_Lobby>()
	{
		return ADBDPlayerState_Lobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDPlayerState_Lobby(Z_Construct_UClass_ADBDPlayerState_Lobby, &ADBDPlayerState_Lobby::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDPlayerState_Lobby"), false, nullptr, nullptr, nullptr);

	void ADBDPlayerState_Lobby::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsOwnershipValidated(TEXT("IsOwnershipValidated"));

		const bool bIsValid = true
			&& Name_IsOwnershipValidated == ClassReps[(int32)ENetFields_Private::IsOwnershipValidated].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADBDPlayerState_Lobby"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDPlayerState_Lobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
