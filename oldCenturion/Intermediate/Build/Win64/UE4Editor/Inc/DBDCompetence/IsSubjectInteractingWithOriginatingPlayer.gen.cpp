// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsSubjectInteractingWithOriginatingPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsSubjectInteractingWithOriginatingPlayer() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UIsSubjectInteractingWithOriginatingPlayer::StaticRegisterNativesUIsSubjectInteractingWithOriginatingPlayer()
	{
	}
	UClass* Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer_NoRegister()
	{
		return UIsSubjectInteractingWithOriginatingPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsSubjectInteractingWithOriginatingPlayer.h" },
		{ "ModuleRelativePath", "Public/IsSubjectInteractingWithOriginatingPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsSubjectInteractingWithOriginatingPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer_Statics::ClassParams = {
		&UIsSubjectInteractingWithOriginatingPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsSubjectInteractingWithOriginatingPlayer, 3980496101);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsSubjectInteractingWithOriginatingPlayer>()
	{
		return UIsSubjectInteractingWithOriginatingPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsSubjectInteractingWithOriginatingPlayer(Z_Construct_UClass_UIsSubjectInteractingWithOriginatingPlayer, &UIsSubjectInteractingWithOriginatingPlayer::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsSubjectInteractingWithOriginatingPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsSubjectInteractingWithOriginatingPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
