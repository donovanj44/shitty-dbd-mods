// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/StruggleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStruggleComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UStruggleComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UStruggleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStruggleSkillCheck_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStruggleComponent::execLocal_TryActivateSkillCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_TryActivateSkillCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStruggleComponent::execOnSkillCheckEnd)
	{
		P_GET_UBOOL(Z_Param_hadInput);
		P_GET_UBOOL(Z_Param_success);
		P_GET_UBOOL(Z_Param_bonus);
		P_GET_ENUM(ESkillCheckCustomType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkillCheckEnd(Z_Param_hadInput,Z_Param_success,Z_Param_bonus,ESkillCheckCustomType(Z_Param_type));
		P_NATIVE_END;
	}
	void UStruggleComponent::StaticRegisterNativesUStruggleComponent()
	{
		UClass* Class = UStruggleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Local_TryActivateSkillCheck", &UStruggleComponent::execLocal_TryActivateSkillCheck },
			{ "OnSkillCheckEnd", &UStruggleComponent::execOnSkillCheckEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStruggleComponent_Local_TryActivateSkillCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStruggleComponent_Local_TryActivateSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StruggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStruggleComponent_Local_TryActivateSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStruggleComponent, nullptr, "Local_TryActivateSkillCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStruggleComponent_Local_TryActivateSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStruggleComponent_Local_TryActivateSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStruggleComponent_Local_TryActivateSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStruggleComponent_Local_TryActivateSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics
	{
		struct StruggleComponent_eventOnSkillCheckEnd_Parms
		{
			bool hadInput;
			bool success;
			bool bonus;
			ESkillCheckCustomType type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static void NewProp_bonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bonus;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
		static void NewProp_hadInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hadInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StruggleComponent_eventOnSkillCheckEnd_Parms, type), Z_Construct_UEnum_DBDSharedTypes_ESkillCheckCustomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_bonus_SetBit(void* Obj)
	{
		((StruggleComponent_eventOnSkillCheckEnd_Parms*)Obj)->bonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_bonus = { "bonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StruggleComponent_eventOnSkillCheckEnd_Parms), &Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_bonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_success_SetBit(void* Obj)
	{
		((StruggleComponent_eventOnSkillCheckEnd_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StruggleComponent_eventOnSkillCheckEnd_Parms), &Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_hadInput_SetBit(void* Obj)
	{
		((StruggleComponent_eventOnSkillCheckEnd_Parms*)Obj)->hadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_hadInput = { "hadInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StruggleComponent_eventOnSkillCheckEnd_Parms), &Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_hadInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_bonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::NewProp_hadInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StruggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStruggleComponent, nullptr, "OnSkillCheckEnd", nullptr, nullptr, sizeof(StruggleComponent_eventOnSkillCheckEnd_Parms), Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStruggleComponent_NoRegister()
	{
		return UStruggleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStruggleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skillCheckCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__skillCheckCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStruggleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStruggleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStruggleComponent_Local_TryActivateSkillCheck, "Local_TryActivateSkillCheck" }, // 4249154692
		{ &Z_Construct_UFunction_UStruggleComponent_OnSkillCheckEnd, "OnSkillCheckEnd" }, // 1243348570
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStruggleComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StruggleComponent.h" },
		{ "ModuleRelativePath", "Public/StruggleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStruggleComponent_Statics::NewProp__skillCheckCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/StruggleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStruggleComponent_Statics::NewProp__skillCheckCount = { "_skillCheckCount", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStruggleComponent, _skillCheckCount), METADATA_PARAMS(Z_Construct_UClass_UStruggleComponent_Statics::NewProp__skillCheckCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStruggleComponent_Statics::NewProp__skillCheckCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStruggleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStruggleComponent_Statics::NewProp__skillCheckCount,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStruggleComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStruggleSkillCheck_NoRegister, (int32)VTABLE_OFFSET(UStruggleComponent, IStruggleSkillCheck), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStruggleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStruggleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStruggleComponent_Statics::ClassParams = {
		&UStruggleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStruggleComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStruggleComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStruggleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStruggleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStruggleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStruggleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStruggleComponent, 2876604619);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UStruggleComponent>()
	{
		return UStruggleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStruggleComponent(Z_Construct_UClass_UStruggleComponent, &UStruggleComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UStruggleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStruggleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
