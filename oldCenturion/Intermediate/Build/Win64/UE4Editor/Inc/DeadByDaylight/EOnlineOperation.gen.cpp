// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EOnlineOperation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOnlineOperation() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOnlineOperation();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EOnlineOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EOnlineOperation, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EOnlineOperation"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOnlineOperation>()
	{
		return EOnlineOperation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineOperation(EOnlineOperation_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EOnlineOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EOnlineOperation_Hash() { return 2781713016U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EOnlineOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineOperation"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EOnlineOperation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineOperation::None", (int64)EOnlineOperation::None },
				{ "EOnlineOperation::HostGame", (int64)EOnlineOperation::HostGame },
				{ "EOnlineOperation::EndingSession", (int64)EOnlineOperation::EndingSession },
				{ "EOnlineOperation::DestroyingSession", (int64)EOnlineOperation::DestroyingSession },
				{ "EOnlineOperation::PreparingJoinGame", (int64)EOnlineOperation::PreparingJoinGame },
				{ "EOnlineOperation::JoinGame", (int64)EOnlineOperation::JoinGame },
				{ "EOnlineOperation::JoinCancelled", (int64)EOnlineOperation::JoinCancelled },
				{ "EOnlineOperation::OnlineCheck", (int64)EOnlineOperation::OnlineCheck },
				{ "EOnlineOperation::CancellingMatchmaking", (int64)EOnlineOperation::CancellingMatchmaking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CancellingMatchmaking.Name", "EOnlineOperation::CancellingMatchmaking" },
				{ "DestroyingSession.Name", "EOnlineOperation::DestroyingSession" },
				{ "EndingSession.Name", "EOnlineOperation::EndingSession" },
				{ "HostGame.Name", "EOnlineOperation::HostGame" },
				{ "JoinCancelled.Name", "EOnlineOperation::JoinCancelled" },
				{ "JoinGame.Name", "EOnlineOperation::JoinGame" },
				{ "ModuleRelativePath", "Public/EOnlineOperation.h" },
				{ "None.Name", "EOnlineOperation::None" },
				{ "OnlineCheck.Name", "EOnlineOperation::OnlineCheck" },
				{ "PreparingJoinGame.Name", "EOnlineOperation::PreparingJoinGame" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EOnlineOperation",
				"EOnlineOperation",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
