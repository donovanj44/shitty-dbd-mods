// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CameraAttachmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAttachmentComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCameraAttachmentComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCameraAttachmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCameraAttachment();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCameraAttachmentComponent::execDetach)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Detach();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAttachmentComponent::execIsAttached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAttachmentComponent::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UCameraAttachmentComponent::StaticRegisterNativesUCameraAttachmentComponent()
	{
		UClass* Class = UCameraAttachmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Detach", &UCameraAttachmentComponent::execDetach },
			{ "IsAttached", &UCameraAttachmentComponent::execIsAttached },
			{ "Reset", &UCameraAttachmentComponent::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraAttachmentComponent_Detach_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAttachmentComponent_Detach_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAttachmentComponent_Detach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAttachmentComponent, nullptr, "Detach", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAttachmentComponent_Detach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAttachmentComponent_Detach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAttachmentComponent_Detach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraAttachmentComponent_Detach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics
	{
		struct CameraAttachmentComponent_eventIsAttached_Parms
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
	void Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraAttachmentComponent_eventIsAttached_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraAttachmentComponent_eventIsAttached_Parms), &Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAttachmentComponent, nullptr, "IsAttached", nullptr, nullptr, sizeof(CameraAttachmentComponent_eventIsAttached_Parms), Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAttachmentComponent_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAttachmentComponent_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAttachmentComponent_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAttachmentComponent, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAttachmentComponent_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAttachmentComponent_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAttachmentComponent_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraAttachmentComponent_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraAttachmentComponent_NoRegister()
	{
		return UCameraAttachmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAttachmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentCameraAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currentCameraAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultCameraAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__defaultCameraAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__anchor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__anchor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAttachmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraAttachmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraAttachmentComponent_Detach, "Detach" }, // 2179786776
		{ &Z_Construct_UFunction_UCameraAttachmentComponent_IsAttached, "IsAttached" }, // 3493378224
		{ &Z_Construct_UFunction_UCameraAttachmentComponent_Reset, "Reset" }, // 1030990524
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAttachmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CameraAttachmentComponent.h" },
		{ "ModuleRelativePath", "Public/CameraAttachmentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__currentCameraAttachment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__currentCameraAttachment = { "_currentCameraAttachment", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAttachmentComponent, _currentCameraAttachment), Z_Construct_UScriptStruct_FCameraAttachment, METADATA_PARAMS(Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__currentCameraAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__currentCameraAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__defaultCameraAttachment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__defaultCameraAttachment = { "_defaultCameraAttachment", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAttachmentComponent, _defaultCameraAttachment), Z_Construct_UScriptStruct_FCameraAttachment, METADATA_PARAMS(Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__defaultCameraAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__defaultCameraAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__anchor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CameraAttachmentComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__anchor = { "_anchor", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAttachmentComponent, _anchor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__anchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__anchor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAttachmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__currentCameraAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__defaultCameraAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAttachmentComponent_Statics::NewProp__anchor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAttachmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAttachmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraAttachmentComponent_Statics::ClassParams = {
		&UCameraAttachmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraAttachmentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAttachmentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAttachmentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAttachmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAttachmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraAttachmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraAttachmentComponent, 3963847575);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCameraAttachmentComponent>()
	{
		return UCameraAttachmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraAttachmentComponent(Z_Construct_UClass_UCameraAttachmentComponent, &UCameraAttachmentComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCameraAttachmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAttachmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
