// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CameraHandlerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraHandlerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCameraHandlerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCameraHandlerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventCameraHandlerComponentOnSocketChanged_Parms
		{
			EDBDCameraSocketID SocketId;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SocketId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SocketId_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventCameraHandlerComponentOnSocketChanged_Parms, SocketId), Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::NewProp_SocketId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::NewProp_SocketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::NewProp_SocketId_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "CameraHandlerComponentOnSocketChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventCameraHandlerComponentOnSocketChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCameraHandlerComponent::execAddCameraToSocket)
	{
		P_GET_ENUM(EDBDCameraSocketID,Z_Param_mode);
		P_GET_OBJECT(AActor,Z_Param_camera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCameraToSocket(EDBDCameraSocketID(Z_Param_mode),Z_Param_camera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraHandlerComponent::execGetCurrentCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraHandlerComponent::execGetSocketID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDBDCameraSocketID*)Z_Param__Result=P_THIS->GetSocketID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraHandlerComponent::execPlayVFXOnCurrentCamera)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVFXOnCurrentCamera(Z_Param_component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraHandlerComponent::execSetAttachmentComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_attachmentComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachmentComponent(Z_Param_attachmentComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraHandlerComponent::execSetSocketID)
	{
		P_GET_ENUM(EDBDCameraSocketID,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSocketID(EDBDCameraSocketID(Z_Param_mode));
		P_NATIVE_END;
	}
	void UCameraHandlerComponent::StaticRegisterNativesUCameraHandlerComponent()
	{
		UClass* Class = UCameraHandlerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCameraToSocket", &UCameraHandlerComponent::execAddCameraToSocket },
			{ "GetCurrentCamera", &UCameraHandlerComponent::execGetCurrentCamera },
			{ "GetSocketID", &UCameraHandlerComponent::execGetSocketID },
			{ "PlayVFXOnCurrentCamera", &UCameraHandlerComponent::execPlayVFXOnCurrentCamera },
			{ "SetAttachmentComponent", &UCameraHandlerComponent::execSetAttachmentComponent },
			{ "SetSocketID", &UCameraHandlerComponent::execSetSocketID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics
	{
		struct CameraHandlerComponent_eventAddCameraToSocket_Parms
		{
			EDBDCameraSocketID mode;
			AActor* camera;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraHandlerComponent_eventAddCameraToSocket_Parms, camera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraHandlerComponent_eventAddCameraToSocket_Parms, mode), Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::NewProp_camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::NewProp_mode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraHandlerComponent, nullptr, "AddCameraToSocket", nullptr, nullptr, sizeof(CameraHandlerComponent_eventAddCameraToSocket_Parms), Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics
	{
		struct CameraHandlerComponent_eventGetCurrentCamera_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraHandlerComponent_eventGetCurrentCamera_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraHandlerComponent, nullptr, "GetCurrentCamera", nullptr, nullptr, sizeof(CameraHandlerComponent_eventGetCurrentCamera_Parms), Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics
	{
		struct CameraHandlerComponent_eventGetSocketID_Parms
		{
			EDBDCameraSocketID ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraHandlerComponent_eventGetSocketID_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraHandlerComponent, nullptr, "GetSocketID", nullptr, nullptr, sizeof(CameraHandlerComponent_eventGetSocketID_Parms), Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics
	{
		struct CameraHandlerComponent_eventPlayVFXOnCurrentCamera_Parms
		{
			UParticleSystemComponent* component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraHandlerComponent_eventPlayVFXOnCurrentCamera_Parms, component), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraHandlerComponent, nullptr, "PlayVFXOnCurrentCamera", nullptr, nullptr, sizeof(CameraHandlerComponent_eventPlayVFXOnCurrentCamera_Parms), Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics
	{
		struct CameraHandlerComponent_eventSetAttachmentComponent_Parms
		{
			USceneComponent* attachmentComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attachmentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attachmentComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::NewProp_attachmentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::NewProp_attachmentComponent = { "attachmentComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraHandlerComponent_eventSetAttachmentComponent_Parms, attachmentComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::NewProp_attachmentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::NewProp_attachmentComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::NewProp_attachmentComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraHandlerComponent, nullptr, "SetAttachmentComponent", nullptr, nullptr, sizeof(CameraHandlerComponent_eventSetAttachmentComponent_Parms), Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics
	{
		struct CameraHandlerComponent_eventSetSocketID_Parms
		{
			EDBDCameraSocketID mode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraHandlerComponent_eventSetSocketID_Parms, mode), Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::NewProp_mode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraHandlerComponent, nullptr, "SetSocketID", nullptr, nullptr, sizeof(CameraHandlerComponent_eventSetSocketID_Parms), Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraHandlerComponent_NoRegister()
	{
		return UCameraHandlerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCameraHandlerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFOVSystemActive_MetaData[];
#endif
		static void NewProp__isFOVSystemActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFOVSystemActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraAttachmentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cameraAttachmentComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraAttachmentSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__cameraAttachmentSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__manualZoomCurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__manualZoomCurveFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__manualZoomAllowPerkModifiers_MetaData[];
#endif
		static void NewProp__manualZoomAllowPerkModifiers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__manualZoomAllowPerkModifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currentSocketID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currentSocketID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__delayedSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__delayedSocketID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__delayedSocketID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__cameraMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__cameraMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__cameraMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cameraMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSocketChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSocketChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraHandlerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraHandlerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraHandlerComponent_AddCameraToSocket, "AddCameraToSocket" }, // 1847311876
		{ &Z_Construct_UFunction_UCameraHandlerComponent_GetCurrentCamera, "GetCurrentCamera" }, // 3120598339
		{ &Z_Construct_UFunction_UCameraHandlerComponent_GetSocketID, "GetSocketID" }, // 1750744428
		{ &Z_Construct_UFunction_UCameraHandlerComponent_PlayVFXOnCurrentCamera, "PlayVFXOnCurrentCamera" }, // 3537952911
		{ &Z_Construct_UFunction_UCameraHandlerComponent_SetAttachmentComponent, "SetAttachmentComponent" }, // 945195396
		{ &Z_Construct_UFunction_UCameraHandlerComponent_SetSocketID, "SetSocketID" }, // 3643195912
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraHandlerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CameraHandlerComponent.h" },
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__isFOVSystemActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__isFOVSystemActive_SetBit(void* Obj)
	{
		((UCameraHandlerComponent*)Obj)->_isFOVSystemActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__isFOVSystemActive = { "_isFOVSystemActive", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCameraHandlerComponent), &Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__isFOVSystemActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__isFOVSystemActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__isFOVSystemActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraAttachmentComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraAttachmentComponent = { "_cameraAttachmentComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraHandlerComponent, _cameraAttachmentComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraAttachmentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraAttachmentComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraAttachmentSocket_MetaData[] = {
		{ "Category", "CameraHandlerComponent" },
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraAttachmentSocket = { "_cameraAttachmentSocket", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraHandlerComponent, _cameraAttachmentSocket), METADATA_PARAMS(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraAttachmentSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraAttachmentSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomCurveFloat_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomCurveFloat = { "_manualZoomCurveFloat", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraHandlerComponent, _manualZoomCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomCurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomCurveFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomAllowPerkModifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomAllowPerkModifiers_SetBit(void* Obj)
	{
		((UCameraHandlerComponent*)Obj)->_manualZoomAllowPerkModifiers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomAllowPerkModifiers = { "_manualZoomAllowPerkModifiers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCameraHandlerComponent), &Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomAllowPerkModifiers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomAllowPerkModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomAllowPerkModifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__currentSocketID_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__currentSocketID = { "_currentSocketID", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraHandlerComponent, _currentSocketID), Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID, METADATA_PARAMS(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__currentSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__currentSocketID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__currentSocketID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__delayedSocketID_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__delayedSocketID = { "_delayedSocketID", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraHandlerComponent, _delayedSocketID), Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID, METADATA_PARAMS(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__delayedSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__delayedSocketID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__delayedSocketID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap = { "_cameraMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraHandlerComponent, _cameraMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap_Key_KeyProp = { "_cameraMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap_ValueProp = { "_cameraMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp_OnSocketChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp_OnSocketChanged = { "OnSocketChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraHandlerComponent, OnSocketChanged), Z_Construct_UDelegateFunction_DeadByDaylight_CameraHandlerComponentOnSocketChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp_OnSocketChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp_OnSocketChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraHandlerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__isFOVSystemActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraAttachmentComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraAttachmentSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomCurveFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__manualZoomAllowPerkModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__currentSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__currentSocketID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__delayedSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__delayedSocketID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp__cameraMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraHandlerComponent_Statics::NewProp_OnSocketChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraHandlerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraHandlerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraHandlerComponent_Statics::ClassParams = {
		&UCameraHandlerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraHandlerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraHandlerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraHandlerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraHandlerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraHandlerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraHandlerComponent, 216208513);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCameraHandlerComponent>()
	{
		return UCameraHandlerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraHandlerComponent(Z_Construct_UClass_UCameraHandlerComponent, &UCameraHandlerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCameraHandlerComponent"), false, nullptr, nullptr, nullptr);

	void UCameraHandlerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__delayedSocketID(TEXT("_delayedSocketID"));

		const bool bIsValid = true
			&& Name__delayedSocketID == ClassReps[(int32)ENetFields_Private::_delayedSocketID].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCameraHandlerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraHandlerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
