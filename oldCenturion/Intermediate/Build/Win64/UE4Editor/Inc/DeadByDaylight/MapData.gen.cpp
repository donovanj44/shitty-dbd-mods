// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MapData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UProceduralGenerationData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTileProperties();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
	void UMapData::StaticRegisterNativesUMapData()
	{
	}
	UClass* Z_Construct_UClass_UMapData_NoRegister()
	{
		return UMapData::StaticClass();
	}
	struct Z_Construct_UClass_UMapData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__proceduralGenerationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__proceduralGenerationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gesture_MetaData[];
#endif
		static void NewProp_Gesture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Gesture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blackboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapTileProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapTileProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapTileProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Draft_MetaData[];
#endif
		static void NewProp_Draft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Draft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioThemeSoundBank_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AudioThemeSoundBank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioThemeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioThemeEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStateWeather_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioStateWeather;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStateThemes_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioStateThemes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeWeather_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThemeWeather;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThemeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapData.h" },
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp__proceduralGenerationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapData_Statics::NewProp__proceduralGenerationData = { "_proceduralGenerationData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, _proceduralGenerationData), Z_Construct_UClass_UProceduralGenerationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp__proceduralGenerationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp__proceduralGenerationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_Gesture_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	void Z_Construct_UClass_UMapData_Statics::NewProp_Gesture_SetBit(void* Obj)
	{
		((UMapData*)Obj)->Gesture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapData), &Z_Construct_UClass_UMapData_Statics::NewProp_Gesture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_Gesture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_Gesture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_Blackboard_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_Blackboard = { "Blackboard", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, Blackboard), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_Blackboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_Blackboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_MapTileProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_MapTileProperties = { "MapTileProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, MapTileProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_MapTileProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_MapTileProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_MapTileProperties_Inner = { "MapTileProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTileProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_Draft_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	void Z_Construct_UClass_UMapData_Statics::NewProp_Draft_SetBit(void* Obj)
	{
		((UMapData*)Obj)->Draft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_Draft = { "Draft", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapData), &Z_Construct_UClass_UMapData_Statics::NewProp_Draft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_Draft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_Draft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_MapHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, MapHeight), METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_MapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_MapHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_MapWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, MapWidth), METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_MapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_MapWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_AudioThemeSoundBank_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_AudioThemeSoundBank = { "AudioThemeSoundBank", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, AudioThemeSoundBank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_AudioThemeSoundBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_AudioThemeSoundBank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_AudioThemeEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_AudioThemeEvent = { "AudioThemeEvent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, AudioThemeEvent), METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_AudioThemeEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_AudioThemeEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_AudioStateWeather_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_AudioStateWeather = { "AudioStateWeather", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, AudioStateWeather), METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_AudioStateWeather_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_AudioStateWeather_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_AudioStateThemes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_AudioStateThemes = { "AudioStateThemes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, AudioStateThemes), METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_AudioStateThemes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_AudioStateThemes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_ThemeWeather_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_ThemeWeather = { "ThemeWeather", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, ThemeWeather), METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_ThemeWeather_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_ThemeWeather_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapData_Statics::NewProp_ThemeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMapData_Statics::NewProp_ThemeName = { "ThemeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapData, ThemeName), METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::NewProp_ThemeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::NewProp_ThemeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp__proceduralGenerationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_Gesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_Blackboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_MapTileProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_MapTileProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_Draft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_MapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_MapWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_AudioThemeSoundBank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_AudioThemeEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_AudioStateWeather,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_AudioStateThemes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_ThemeWeather,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapData_Statics::NewProp_ThemeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapData_Statics::ClassParams = {
		&UMapData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMapData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapData, 1519965723);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMapData>()
	{
		return UMapData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapData(Z_Construct_UClass_UMapData, &UMapData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMapData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
