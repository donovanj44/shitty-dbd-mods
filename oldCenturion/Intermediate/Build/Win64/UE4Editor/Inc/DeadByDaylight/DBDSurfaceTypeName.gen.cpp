// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDSurfaceTypeName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDSurfaceTypeName() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDSurfaceTypeName_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDSurfaceTypeName();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDSurfaceTypeName::execConvert)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_surfaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDBDSurfaceTypeName::Convert(EPhysicalSurface(Z_Param_surfaceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDSurfaceTypeName::execConvertFromPhysicalMaterial)
	{
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDBDSurfaceTypeName::ConvertFromPhysicalMaterial(Z_Param_material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDSurfaceTypeName::execGetSurfaceName)
	{
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_physicalMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDBDSurfaceTypeName::GetSurfaceName(Z_Param_physicalMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDSurfaceTypeName::execGetSurfaceType)
	{
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_physicalMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=UDBDSurfaceTypeName::GetSurfaceType(Z_Param_physicalMaterial);
		P_NATIVE_END;
	}
	void UDBDSurfaceTypeName::StaticRegisterNativesUDBDSurfaceTypeName()
	{
		UClass* Class = UDBDSurfaceTypeName::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Convert", &UDBDSurfaceTypeName::execConvert },
			{ "ConvertFromPhysicalMaterial", &UDBDSurfaceTypeName::execConvertFromPhysicalMaterial },
			{ "GetSurfaceName", &UDBDSurfaceTypeName::execGetSurfaceName },
			{ "GetSurfaceType", &UDBDSurfaceTypeName::execGetSurfaceType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics
	{
		struct DBDSurfaceTypeName_eventConvert_Parms
		{
			TEnumAsByte<EPhysicalSurface> surfaceType;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_surfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_surfaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSurfaceTypeName_eventConvert_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::NewProp_surfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::NewProp_surfaceType = { "surfaceType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSurfaceTypeName_eventConvert_Parms, surfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::NewProp_surfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::NewProp_surfaceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::NewProp_surfaceType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDSurfaceTypeName.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDSurfaceTypeName, nullptr, "Convert", nullptr, nullptr, sizeof(DBDSurfaceTypeName_eventConvert_Parms), Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDSurfaceTypeName_Convert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDSurfaceTypeName_Convert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics
	{
		struct DBDSurfaceTypeName_eventConvertFromPhysicalMaterial_Parms
		{
			const UPhysicalMaterial* material;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSurfaceTypeName_eventConvertFromPhysicalMaterial_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::NewProp_material_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSurfaceTypeName_eventConvertFromPhysicalMaterial_Parms, material), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::NewProp_material_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::NewProp_material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::NewProp_material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDSurfaceTypeName.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDSurfaceTypeName, nullptr, "ConvertFromPhysicalMaterial", nullptr, nullptr, sizeof(DBDSurfaceTypeName_eventConvertFromPhysicalMaterial_Parms), Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics
	{
		struct DBDSurfaceTypeName_eventGetSurfaceName_Parms
		{
			const UPhysicalMaterial* physicalMaterial;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSurfaceTypeName_eventGetSurfaceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::NewProp_physicalMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::NewProp_physicalMaterial = { "physicalMaterial", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSurfaceTypeName_eventGetSurfaceName_Parms, physicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::NewProp_physicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::NewProp_physicalMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::NewProp_physicalMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDSurfaceTypeName.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDSurfaceTypeName, nullptr, "GetSurfaceName", nullptr, nullptr, sizeof(DBDSurfaceTypeName_eventGetSurfaceName_Parms), Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics
	{
		struct DBDSurfaceTypeName_eventGetSurfaceType_Parms
		{
			const UPhysicalMaterial* physicalMaterial;
			TEnumAsByte<EPhysicalSurface> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSurfaceTypeName_eventGetSurfaceType_Parms, ReturnValue), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::NewProp_physicalMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::NewProp_physicalMaterial = { "physicalMaterial", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSurfaceTypeName_eventGetSurfaceType_Parms, physicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::NewProp_physicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::NewProp_physicalMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::NewProp_physicalMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDSurfaceTypeName.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDSurfaceTypeName, nullptr, "GetSurfaceType", nullptr, nullptr, sizeof(DBDSurfaceTypeName_eventGetSurfaceType_Parms), Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDSurfaceTypeName_NoRegister()
	{
		return UDBDSurfaceTypeName::StaticClass();
	}
	struct Z_Construct_UClass_UDBDSurfaceTypeName_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDSurfaceTypeName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDSurfaceTypeName_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDSurfaceTypeName_Convert, "Convert" }, // 3144876755
		{ &Z_Construct_UFunction_UDBDSurfaceTypeName_ConvertFromPhysicalMaterial, "ConvertFromPhysicalMaterial" }, // 3466827541
		{ &Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceName, "GetSurfaceName" }, // 1656573250
		{ &Z_Construct_UFunction_UDBDSurfaceTypeName_GetSurfaceType, "GetSurfaceType" }, // 1511791757
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDSurfaceTypeName_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDSurfaceTypeName.h" },
		{ "ModuleRelativePath", "Public/DBDSurfaceTypeName.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDSurfaceTypeName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDSurfaceTypeName>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDSurfaceTypeName_Statics::ClassParams = {
		&UDBDSurfaceTypeName::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDSurfaceTypeName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSurfaceTypeName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDSurfaceTypeName()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDSurfaceTypeName_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDSurfaceTypeName, 2860830217);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDSurfaceTypeName>()
	{
		return UDBDSurfaceTypeName::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDSurfaceTypeName(Z_Construct_UClass_UDBDSurfaceTypeName, &UDBDSurfaceTypeName::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDSurfaceTypeName"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDSurfaceTypeName);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
