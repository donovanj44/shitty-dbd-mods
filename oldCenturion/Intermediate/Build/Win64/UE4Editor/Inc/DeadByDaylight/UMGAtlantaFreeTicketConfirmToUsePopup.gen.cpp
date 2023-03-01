// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaFreeTicketConfirmToUsePopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaFreeTicketConfirmToUsePopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGenericPopup();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRichTextFreeTicketDecorator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator = FName(TEXT("GetDecorator"));
	UUMGRichTextFreeTicketDecorator* UUMGAtlantaFreeTicketConfirmToUsePopup::GetDecorator()
	{
		UMGAtlantaFreeTicketConfirmToUsePopup_eventGetDecorator_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture = FName(TEXT("SetFreeTicketIconTexture"));
	void UUMGAtlantaFreeTicketConfirmToUsePopup::SetFreeTicketIconTexture(bool isSlasher)
	{
		UMGAtlantaFreeTicketConfirmToUsePopup_eventSetFreeTicketIconTexture_Parms Parms;
		Parms.isSlasher=isSlasher ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture),&Parms);
	}
	static FName NAME_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle = FName(TEXT("SetPopupTitle"));
	void UUMGAtlantaFreeTicketConfirmToUsePopup::SetPopupTitle(FText const& characterName)
	{
		UMGAtlantaFreeTicketConfirmToUsePopup_eventSetPopupTitle_Parms Parms;
		Parms.characterName=characterName;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle),&Parms);
	}
	void UUMGAtlantaFreeTicketConfirmToUsePopup::StaticRegisterNativesUUMGAtlantaFreeTicketConfirmToUsePopup()
	{
	}
	struct Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaFreeTicketConfirmToUsePopup_eventGetDecorator_Parms, ReturnValue), Z_Construct_UClass_UUMGRichTextFreeTicketDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFreeTicketConfirmToUsePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup, nullptr, "GetDecorator", nullptr, nullptr, sizeof(UMGAtlantaFreeTicketConfirmToUsePopup_eventGetDecorator_Parms), Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics
	{
		static void NewProp_isSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSlasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::NewProp_isSlasher_SetBit(void* Obj)
	{
		((UMGAtlantaFreeTicketConfirmToUsePopup_eventSetFreeTicketIconTexture_Parms*)Obj)->isSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::NewProp_isSlasher = { "isSlasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAtlantaFreeTicketConfirmToUsePopup_eventSetFreeTicketIconTexture_Parms), &Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::NewProp_isSlasher_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::NewProp_isSlasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFreeTicketConfirmToUsePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup, nullptr, "SetFreeTicketIconTexture", nullptr, nullptr, sizeof(UMGAtlantaFreeTicketConfirmToUsePopup_eventSetFreeTicketIconTexture_Parms), Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_characterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::NewProp_characterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::NewProp_characterName = { "characterName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaFreeTicketConfirmToUsePopup_eventSetPopupTitle_Parms, characterName), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::NewProp_characterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::NewProp_characterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::NewProp_characterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFreeTicketConfirmToUsePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup, nullptr, "SetPopupTitle", nullptr, nullptr, sizeof(UMGAtlantaFreeTicketConfirmToUsePopup_eventSetPopupTitle_Parms), Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_NoRegister()
	{
		return UUMGAtlantaFreeTicketConfirmToUsePopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupTitleContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PopupTitleContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeTicketIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FreeTicketIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGenericPopup,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_GetDecorator, "GetDecorator" }, // 1845239868
		{ &Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetFreeTicketIconTexture, "SetFreeTicketIconTexture" }, // 2375236616
		{ &Z_Construct_UFunction_UUMGAtlantaFreeTicketConfirmToUsePopup_SetPopupTitle, "SetPopupTitle" }, // 982058517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaFreeTicketConfirmToUsePopup.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFreeTicketConfirmToUsePopup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::NewProp_PopupTitleContent_MetaData[] = {
		{ "Category", "UMGAtlantaFreeTicketConfirmToUsePopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFreeTicketConfirmToUsePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::NewProp_PopupTitleContent = { "PopupTitleContent", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFreeTicketConfirmToUsePopup, PopupTitleContent), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::NewProp_PopupTitleContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::NewProp_PopupTitleContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::NewProp_FreeTicketIcon_MetaData[] = {
		{ "Category", "UMGAtlantaFreeTicketConfirmToUsePopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFreeTicketConfirmToUsePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::NewProp_FreeTicketIcon = { "FreeTicketIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFreeTicketConfirmToUsePopup, FreeTicketIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::NewProp_FreeTicketIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::NewProp_FreeTicketIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::NewProp_PopupTitleContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::NewProp_FreeTicketIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaFreeTicketConfirmToUsePopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::ClassParams = {
		&UUMGAtlantaFreeTicketConfirmToUsePopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaFreeTicketConfirmToUsePopup, 4252416219);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaFreeTicketConfirmToUsePopup>()
	{
		return UUMGAtlantaFreeTicketConfirmToUsePopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup(Z_Construct_UClass_UUMGAtlantaFreeTicketConfirmToUsePopup, &UUMGAtlantaFreeTicketConfirmToUsePopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaFreeTicketConfirmToUsePopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaFreeTicketConfirmToUsePopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
