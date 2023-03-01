// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyRankFrame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyRankFrame() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyRankFrame_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyRankFrame();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGTallyRankFrame::execSetData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rank);
		P_GET_ENUM(EPlayerRole,Z_Param_playerRole);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_rank,EPlayerRole(Z_Param_playerRole));
		P_NATIVE_END;
	}
	void UUMGTallyRankFrame::StaticRegisterNativesUUMGTallyRankFrame()
	{
		UClass* Class = UUMGTallyRankFrame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UUMGTallyRankFrame::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics
	{
		struct UMGTallyRankFrame_eventSetData_Parms
		{
			int32 rank;
			EPlayerRole playerRole;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerRole_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::NewProp_playerRole = { "playerRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyRankFrame_eventSetData_Parms, playerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::NewProp_playerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyRankFrame_eventSetData_Parms, rank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::NewProp_playerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::NewProp_playerRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::NewProp_rank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyRankFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyRankFrame, nullptr, "SetData", nullptr, nullptr, sizeof(UMGTallyRankFrame_eventSetData_Parms), Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyRankFrame_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyRankFrame_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyRankFrame_NoRegister()
	{
		return UUMGTallyRankFrame::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyRankFrame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyRankFrame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyRankFrame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyRankFrame_SetData, "SetData" }, // 3077459605
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankFrame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyRankFrame.h" },
		{ "ModuleRelativePath", "Public/UMGTallyRankFrame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankFrame_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "UMGTallyRankFrame" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyRankFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyRankFrame_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankFrame, Label), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankFrame_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankFrame_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankFrame_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "UMGTallyRankFrame" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyRankFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyRankFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankFrame, Frame), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankFrame_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankFrame_Statics::NewProp_Frame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyRankFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankFrame_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankFrame_Statics::NewProp_Frame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyRankFrame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyRankFrame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyRankFrame_Statics::ClassParams = {
		&UUMGTallyRankFrame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTallyRankFrame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankFrame_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankFrame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankFrame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyRankFrame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyRankFrame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyRankFrame, 395391401);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyRankFrame>()
	{
		return UUMGTallyRankFrame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyRankFrame(Z_Construct_UClass_UUMGTallyRankFrame, &UUMGTallyRankFrame::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyRankFrame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyRankFrame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
