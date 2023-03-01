// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EShadowSystem();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorSpawner_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AProceduralLevelBuilder_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGameMode_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerCameraManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerControllerBase_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBasePlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileSpawnPoint_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDUtilities::execAddComponentToActor)
	{
		P_GET_OBJECT(UClass,Z_Param_compClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_compName);
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=UDBDUtilities::AddComponentToActor(Z_Param_compClass,Z_Param_compName,Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execBoxTraceAgainstActor)
	{
		P_GET_STRUCT(FVector,Z_Param_start);
		P_GET_STRUCT(FVector,Z_Param_end);
		P_GET_OBJECT(UBoxComponent,Z_Param_box);
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_outHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::BoxTraceAgainstActor(Z_Param_start,Z_Param_end,Z_Param_box,Z_Param_actor,Z_Param_Out_outHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execCrashGameCausingInterrupt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilities::CrashGameCausingInterrupt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execDBDCapsuleTraceSingle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_GET_UBOOL(Z_Param_bIgnoreSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::DBDCapsuleTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execDBDLoadAudioBank)
	{
		P_GET_OBJECT(UAkAudioBank,Z_Param_bank);
		P_GET_OBJECT(AActor,Z_Param_caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilities::DBDLoadAudioBank(Z_Param_bank,Z_Param_caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execDBDLoadAudioBankAsync)
	{
		P_GET_OBJECT(UAkAudioBank,Z_Param_bank);
		P_GET_OBJECT(AActor,Z_Param_caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilities::DBDLoadAudioBankAsync(Z_Param_bank,Z_Param_caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execDBDLoadAudioBankByAssetPtr)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UAkAudioBank>,Z_Param_bank);
		P_GET_OBJECT(AActor,Z_Param_caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UDBDUtilities::DBDLoadAudioBankByAssetPtr(Z_Param_bank,Z_Param_caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execDistanceFromPointToPane)
	{
		P_GET_STRUCT(FVector,Z_Param_point);
		P_GET_STRUCT(FPlane,Z_Param_plane);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilities::DistanceFromPointToPane(Z_Param_point,Z_Param_plane);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execFindFloorSingle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_raycastLength);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_outHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::FindFloorSingle(Z_Param_WorldContextObject,Z_Param_location,Z_Param_raycastLength,Z_Param_Out_outHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execFindParentOfClass)
	{
		P_GET_OBJECT(AActor,Z_Param_InChild);
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UDBDUtilities::FindParentOfClass(Z_Param_InChild,Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetActiveShadowSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EShadowSystem*)Z_Param__Result=UDBDUtilities::GetActiveShadowSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetActorOwnerName)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDBDUtilities::GetActorOwnerName(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetActorSpawners)
	{
		P_GET_TARRAY_REF(UActorSpawner*,Z_Param_Out_actorSpawners);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilities::GetActorSpawners(Z_Param_Out_actorSpawners);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetAnimSequenceLength)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilities::GetAnimSequenceLength(Z_Param_sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetBuilder)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AProceduralLevelBuilder**)Z_Param__Result=UDBDUtilities::GetBuilder(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetClosestPointOnOrbit)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_centerPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_orbitterPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UDBDUtilities::GetClosestPointOnOrbit(Z_Param_Out_centerPoint,Z_Param_Out_orbitterPosition,Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetClosestSnapTransformOnOrbit)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_centerPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_orbitterPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UDBDUtilities::GetClosestSnapTransformOnOrbit(Z_Param_Out_centerPoint,Z_Param_Out_orbitterPosition,Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetComponentOwnerName)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_actorComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDBDUtilities::GetComponentOwnerName(Z_Param_actorComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetCurrentCharacterName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDBDUtilities::GetCurrentCharacterName(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetDBDAIPlayerController)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDAIPlayerController**)Z_Param__Result=UDBDUtilities::GetDBDAIPlayerController(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetDBDGameInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDBDGameInstance**)Z_Param__Result=UDBDUtilities::GetDBDGameInstance(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetDBDGameMode)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDGameMode**)Z_Param__Result=UDBDUtilities::GetDBDGameMode(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetDBDGameState)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDGameState**)Z_Param__Result=UDBDUtilities::GetDBDGameState(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetDistanceToNearestHookedSurvivor)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilities::GetDistanceToNearestHookedSurvivor(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetEndGameTunableValue)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_valueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilities::GetEndGameTunableValue(Z_Param_worldContextObject,Z_Param_valueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetFirstActorWithTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_tag);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_actorsArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UDBDUtilities::GetFirstActorWithTag(Z_Param_tag,Z_Param_Out_actorsArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetFloorLocationAt)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_raycastStartHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_raycastEndHeight);
		P_GET_UBOOL(Z_Param_useComplex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UDBDUtilities::GetFloorLocationAt(Z_Param_WorldContextObject,Z_Param_location,Z_Param_raycastStartHeight,Z_Param_raycastEndHeight,Z_Param_useComplex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetFormattedNumberString)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxDecimals);
		P_GET_PROPERTY(FIntProperty,Z_Param_minDecimals);
		P_GET_UBOOL(Z_Param_leadingZero);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDBDUtilities::GetFormattedNumberString(Z_Param_value,Z_Param_maxDecimals,Z_Param_minDecimals,Z_Param_leadingZero);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetFormattedNumberText)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxDecimals);
		P_GET_PROPERTY(FIntProperty,Z_Param_minDecimals);
		P_GET_UBOOL(Z_Param_leadingZero);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UDBDUtilities::GetFormattedNumberText(Z_Param_value,Z_Param_maxDecimals,Z_Param_minDecimals,Z_Param_leadingZero);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetImpactCollisionObjectType)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=UDBDUtilities::GetImpactCollisionObjectType(Z_Param_primitive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetImpactCollisionResponseContainer)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCollisionResponseContainer*)Z_Param__Result=UDBDUtilities::GetImpactCollisionResponseContainer(Z_Param_primitive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetInGamePlayers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ADBDPlayer*>*)Z_Param__Result=UDBDUtilities::GetInGamePlayers(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetInGameSurvivors)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ACamperPlayer*>*)Z_Param__Result=UDBDUtilities::GetInGameSurvivors(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetInGameSurvivorsByRef)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<ACamperPlayer*>*)Z_Param__Result=UDBDUtilities::GetInGameSurvivorsByRef(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetInventoryCount)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_itemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDBDUtilities::GetInventoryCount(Z_Param_worldContextObject,Z_Param_characterIndex,Z_Param_itemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetInventoryCountForMultipleCharacters)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_TARRAY(int32,Z_Param_characterIndexes);
		P_GET_PROPERTY(FNameProperty,Z_Param_itemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDBDUtilities::GetInventoryCountForMultipleCharacters(Z_Param_worldContextObject,Z_Param_characterIndexes,Z_Param_itemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetLocalDBDCameraManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayerCameraManager**)Z_Param__Result=UDBDUtilities::GetLocalDBDCameraManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetLocalDBDPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayerControllerBase**)Z_Param__Result=UDBDUtilities::GetLocalDBDPlayerController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetLocallyControlledCharacter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=UDBDUtilities::GetLocallyControlledCharacter(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetLocallyControlledCharacterRole)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerRole*)Z_Param__Result=UDBDUtilities::GetLocallyControlledCharacterRole(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetLocallyControlledKiller)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=UDBDUtilities::GetLocallyControlledKiller(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetLocallyControlledSurvivor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=UDBDUtilities::GetLocallyControlledSurvivor(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetLocallyObservedCharacter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=UDBDUtilities::GetLocallyObservedCharacter(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetLocallyObservedCharacterRole)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerRole*)Z_Param__Result=UDBDUtilities::GetLocallyObservedCharacterRole(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetLogStringMaterialInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_inStr);
		P_GET_OBJECT(UMaterialInterface,Z_Param_root);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDBDUtilities::GetLogStringMaterialInfo(Z_Param_inStr,Z_Param_root);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetMaterialHelpersAttachedToPlayerMesh)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMaterialHelper*>*)Z_Param__Result=UDBDUtilities::GetMaterialHelpersAttachedToPlayerMesh(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetMontageLength)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilities::GetMontageLength(Z_Param_montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetNearbyActorsOfType)
	{
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_GET_STRUCT(FVector,Z_Param_center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_outNearbyActors);
		P_GET_OBJECT(UClass,Z_Param_actorClassType);
		P_GET_PROPERTY(FByteProperty,Z_Param_collisionChannel);
		P_GET_OBJECT(AActor,Z_Param_ignoreActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::GetNearbyActorsOfType(Z_Param_world,Z_Param_center,Z_Param_radius,Z_Param_Out_outNearbyActors,Z_Param_actorClassType,ECollisionChannel(Z_Param_collisionChannel),Z_Param_ignoreActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetNearbyCampers)
	{
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_GET_STRUCT(FVector,Z_Param_center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_TARRAY_REF(ACamperPlayer*,Z_Param_Out_outNearbyCampers);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ignoredCampers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilities::GetNearbyCampers(Z_Param_world,Z_Param_center,Z_Param_radius,Z_Param_Out_outNearbyCampers,Z_Param_Out_ignoredCampers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetOuterMostActor)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_animInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UDBDUtilities::GetOuterMostActor(Z_Param_animInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetOwningCamper)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_animInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=UDBDUtilities::GetOwningCamper(Z_Param_animInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetOwningCharacterSkeletalMeshComponent)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_animInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=UDBDUtilities::GetOwningCharacterSkeletalMeshComponent(Z_Param_animInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetOwningDBDBasePlayer)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_animInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDBasePlayer**)Z_Param__Result=UDBDUtilities::GetOwningDBDBasePlayer(Z_Param_animInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetOwningSlasher)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_animInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=UDBDUtilities::GetOwningSlasher(Z_Param_animInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetPercentOfRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_GET_PROPERTY(FFloatProperty,Z_Param_min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilities::GetPercentOfRange(Z_Param_val,Z_Param_min,Z_Param_max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetPlayRateForMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilities::GetPlayRateForMontage(Z_Param_montage,Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetSimilarVector)
	{
		P_GET_STRUCT(FVector,Z_Param_vector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maximumDeviation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UDBDUtilities::GetSimilarVector(Z_Param_vector,Z_Param_maximumDeviation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetSlasher)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=UDBDUtilities::GetSlasher(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetSlasherTunableValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_valueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilities::GetSlasherTunableValue(Z_Param_WorldContextObject,Z_Param_valueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetThreeClosestGenerators)
	{
		P_GET_TARRAY_REF(AGenerator*,Z_Param_Out_unrevealedGenerators);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AGenerator*>*)Z_Param__Result=UDBDUtilities::GetThreeClosestGenerators(Z_Param_Out_unrevealedGenerators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetTileSpawnPoints)
	{
		P_GET_TARRAY_REF(UTileSpawnPoint*,Z_Param_Out_tileSpawnPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilities::GetTileSpawnPoints(Z_Param_Out_tileSpawnPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetVelocityXYAngleDegrees)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilities::GetVelocityXYAngleDegrees(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetXYVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UDBDUtilities::GetXYVector(Z_Param_Out_vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execGetYawOnly)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UDBDUtilities::GetYawOnly(Z_Param_Out_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execHasFloorForward)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_STRUCT(FVector,Z_Param_fowardVector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_raycastStartHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_raycastEndHeight);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_outHits);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_raycastStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::HasFloorForward(Z_Param_WorldContextObject,Z_Param_location,Z_Param_fowardVector,Z_Param_distance,Z_Param_raycastStartHeight,Z_Param_raycastEndHeight,Z_Param_Out_outHits,Z_Param_Out_raycastStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execHasLineOfSightToTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_startPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_targetPosition);
		P_GET_OBJECT(AActor,Z_Param_ignoredActor);
		P_GET_UBOOL(Z_Param_useComplex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::HasLineOfSightToTarget(Z_Param_WorldContextObject,Z_Param_Out_startPosition,Z_Param_Out_targetPosition,Z_Param_ignoredActor,Z_Param_useComplex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execHasWalkableSurfaceForward)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_STRUCT(FVector,Z_Param_fowardVector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_raycastStartHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_raycastEndHeight);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_outHits);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_raycastStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::HasWalkableSurfaceForward(Z_Param_WorldContextObject,Z_Param_location,Z_Param_fowardVector,Z_Param_distance,Z_Param_raycastStartHeight,Z_Param_raycastEndHeight,Z_Param_Out_outHits,Z_Param_Out_raycastStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execIsInKillerTeam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::IsInKillerTeam(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execIsInSurvivorTeam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::IsInSurvivorTeam(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execIsInTutorialLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::IsInTutorialLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execIsLocallyObservingAKiller)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::IsLocallyObservingAKiller(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execIsLocallyObservingASurvivor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::IsLocallyObservingASurvivor(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execIsNonViolent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::IsNonViolent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execIsReplaceDisconnectedPlayersWithBotsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::IsReplaceDisconnectedPlayersWithBotsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execIsServer)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::IsServer(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execLogMeshMaterialInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_inStr);
		P_GET_OBJECT(UMeshComponent,Z_Param_root);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilities::LogMeshMaterialInfo(Z_Param_inStr,Z_Param_root);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execLogString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_inStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilities::LogString(Z_Param_inStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execNormalizeXY)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_vector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::NormalizeXY(Z_Param_Out_vector,Z_Param_tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execPointerToInt)
	{
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDBDUtilities::PointerToInt(Z_Param_obj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execPrintStringEmbiggened)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FIntProperty,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilities::PrintStringEmbiggened(Z_Param_WorldContextObject,Z_Param_InString,Z_Param_TextColor,Z_Param_Duration,Z_Param_Key,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execResolveCharacterIdFromPlayerState)
	{
		P_GET_OBJECT(ADBDPlayerState,Z_Param_playerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDBDUtilities::ResolveCharacterIdFromPlayerState(Z_Param_playerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execSetComponentCastHiddenShadow)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_component);
		P_GET_UBOOL(Z_Param_castShadow);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDUtilities::SetComponentCastHiddenShadow(Z_Param_component,Z_Param_castShadow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execSphereTraceAgainstActor)
	{
		P_GET_STRUCT(FVector,Z_Param_start);
		P_GET_STRUCT(FVector,Z_Param_end);
		P_GET_OBJECT(USphereComponent,Z_Param_sphere);
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_outHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::SphereTraceAgainstActor(Z_Param_start,Z_Param_end,Z_Param_sphere,Z_Param_actor,Z_Param_Out_outHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execSphereTraceSingle)
	{
		P_GET_STRUCT(FVector,Z_Param_start);
		P_GET_STRUCT(FVector,Z_Param_end);
		P_GET_OBJECT(USphereComponent,Z_Param_sphere);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_outHitResult);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ignoredActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::SphereTraceSingle(Z_Param_start,Z_Param_end,Z_Param_sphere,Z_Param_Out_outHitResult,Z_Param_Out_ignoredActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execToAngle_negative180to180)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDUtilities::ToAngle_negative180to180(Z_Param_angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execWithinRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_max);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::WithinRange(Z_Param_min,Z_Param_max,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDUtilities::execWithinRangeExclusive)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_max);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDUtilities::WithinRangeExclusive(Z_Param_min,Z_Param_max,Z_Param_value);
		P_NATIVE_END;
	}
	void UDBDUtilities::StaticRegisterNativesUDBDUtilities()
	{
		UClass* Class = UDBDUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddComponentToActor", &UDBDUtilities::execAddComponentToActor },
			{ "BoxTraceAgainstActor", &UDBDUtilities::execBoxTraceAgainstActor },
			{ "CrashGameCausingInterrupt", &UDBDUtilities::execCrashGameCausingInterrupt },
			{ "DBDCapsuleTraceSingle", &UDBDUtilities::execDBDCapsuleTraceSingle },
			{ "DBDLoadAudioBank", &UDBDUtilities::execDBDLoadAudioBank },
			{ "DBDLoadAudioBankAsync", &UDBDUtilities::execDBDLoadAudioBankAsync },
			{ "DBDLoadAudioBankByAssetPtr", &UDBDUtilities::execDBDLoadAudioBankByAssetPtr },
			{ "DistanceFromPointToPane", &UDBDUtilities::execDistanceFromPointToPane },
			{ "FindFloorSingle", &UDBDUtilities::execFindFloorSingle },
			{ "FindParentOfClass", &UDBDUtilities::execFindParentOfClass },
			{ "GetActiveShadowSystem", &UDBDUtilities::execGetActiveShadowSystem },
			{ "GetActorOwnerName", &UDBDUtilities::execGetActorOwnerName },
			{ "GetActorSpawners", &UDBDUtilities::execGetActorSpawners },
			{ "GetAnimSequenceLength", &UDBDUtilities::execGetAnimSequenceLength },
			{ "GetBuilder", &UDBDUtilities::execGetBuilder },
			{ "GetClosestPointOnOrbit", &UDBDUtilities::execGetClosestPointOnOrbit },
			{ "GetClosestSnapTransformOnOrbit", &UDBDUtilities::execGetClosestSnapTransformOnOrbit },
			{ "GetComponentOwnerName", &UDBDUtilities::execGetComponentOwnerName },
			{ "GetCurrentCharacterName", &UDBDUtilities::execGetCurrentCharacterName },
			{ "GetDBDAIPlayerController", &UDBDUtilities::execGetDBDAIPlayerController },
			{ "GetDBDGameInstance", &UDBDUtilities::execGetDBDGameInstance },
			{ "GetDBDGameMode", &UDBDUtilities::execGetDBDGameMode },
			{ "GetDBDGameState", &UDBDUtilities::execGetDBDGameState },
			{ "GetDistanceToNearestHookedSurvivor", &UDBDUtilities::execGetDistanceToNearestHookedSurvivor },
			{ "GetEndGameTunableValue", &UDBDUtilities::execGetEndGameTunableValue },
			{ "GetFirstActorWithTag", &UDBDUtilities::execGetFirstActorWithTag },
			{ "GetFloorLocationAt", &UDBDUtilities::execGetFloorLocationAt },
			{ "GetFormattedNumberString", &UDBDUtilities::execGetFormattedNumberString },
			{ "GetFormattedNumberText", &UDBDUtilities::execGetFormattedNumberText },
			{ "GetImpactCollisionObjectType", &UDBDUtilities::execGetImpactCollisionObjectType },
			{ "GetImpactCollisionResponseContainer", &UDBDUtilities::execGetImpactCollisionResponseContainer },
			{ "GetInGamePlayers", &UDBDUtilities::execGetInGamePlayers },
			{ "GetInGameSurvivors", &UDBDUtilities::execGetInGameSurvivors },
			{ "GetInGameSurvivorsByRef", &UDBDUtilities::execGetInGameSurvivorsByRef },
			{ "GetInventoryCount", &UDBDUtilities::execGetInventoryCount },
			{ "GetInventoryCountForMultipleCharacters", &UDBDUtilities::execGetInventoryCountForMultipleCharacters },
			{ "GetLocalDBDCameraManager", &UDBDUtilities::execGetLocalDBDCameraManager },
			{ "GetLocalDBDPlayerController", &UDBDUtilities::execGetLocalDBDPlayerController },
			{ "GetLocallyControlledCharacter", &UDBDUtilities::execGetLocallyControlledCharacter },
			{ "GetLocallyControlledCharacterRole", &UDBDUtilities::execGetLocallyControlledCharacterRole },
			{ "GetLocallyControlledKiller", &UDBDUtilities::execGetLocallyControlledKiller },
			{ "GetLocallyControlledSurvivor", &UDBDUtilities::execGetLocallyControlledSurvivor },
			{ "GetLocallyObservedCharacter", &UDBDUtilities::execGetLocallyObservedCharacter },
			{ "GetLocallyObservedCharacterRole", &UDBDUtilities::execGetLocallyObservedCharacterRole },
			{ "GetLogStringMaterialInfo", &UDBDUtilities::execGetLogStringMaterialInfo },
			{ "GetMaterialHelpersAttachedToPlayerMesh", &UDBDUtilities::execGetMaterialHelpersAttachedToPlayerMesh },
			{ "GetMontageLength", &UDBDUtilities::execGetMontageLength },
			{ "GetNearbyActorsOfType", &UDBDUtilities::execGetNearbyActorsOfType },
			{ "GetNearbyCampers", &UDBDUtilities::execGetNearbyCampers },
			{ "GetOuterMostActor", &UDBDUtilities::execGetOuterMostActor },
			{ "GetOwningCamper", &UDBDUtilities::execGetOwningCamper },
			{ "GetOwningCharacterSkeletalMeshComponent", &UDBDUtilities::execGetOwningCharacterSkeletalMeshComponent },
			{ "GetOwningDBDBasePlayer", &UDBDUtilities::execGetOwningDBDBasePlayer },
			{ "GetOwningSlasher", &UDBDUtilities::execGetOwningSlasher },
			{ "GetPercentOfRange", &UDBDUtilities::execGetPercentOfRange },
			{ "GetPlayRateForMontage", &UDBDUtilities::execGetPlayRateForMontage },
			{ "GetSimilarVector", &UDBDUtilities::execGetSimilarVector },
			{ "GetSlasher", &UDBDUtilities::execGetSlasher },
			{ "GetSlasherTunableValue", &UDBDUtilities::execGetSlasherTunableValue },
			{ "GetThreeClosestGenerators", &UDBDUtilities::execGetThreeClosestGenerators },
			{ "GetTileSpawnPoints", &UDBDUtilities::execGetTileSpawnPoints },
			{ "GetVelocityXYAngleDegrees", &UDBDUtilities::execGetVelocityXYAngleDegrees },
			{ "GetXYVector", &UDBDUtilities::execGetXYVector },
			{ "GetYawOnly", &UDBDUtilities::execGetYawOnly },
			{ "HasFloorForward", &UDBDUtilities::execHasFloorForward },
			{ "HasLineOfSightToTarget", &UDBDUtilities::execHasLineOfSightToTarget },
			{ "HasWalkableSurfaceForward", &UDBDUtilities::execHasWalkableSurfaceForward },
			{ "IsInKillerTeam", &UDBDUtilities::execIsInKillerTeam },
			{ "IsInSurvivorTeam", &UDBDUtilities::execIsInSurvivorTeam },
			{ "IsInTutorialLevel", &UDBDUtilities::execIsInTutorialLevel },
			{ "IsLocallyObservingAKiller", &UDBDUtilities::execIsLocallyObservingAKiller },
			{ "IsLocallyObservingASurvivor", &UDBDUtilities::execIsLocallyObservingASurvivor },
			{ "IsNonViolent", &UDBDUtilities::execIsNonViolent },
			{ "IsReplaceDisconnectedPlayersWithBotsActive", &UDBDUtilities::execIsReplaceDisconnectedPlayersWithBotsActive },
			{ "IsServer", &UDBDUtilities::execIsServer },
			{ "LogMeshMaterialInfo", &UDBDUtilities::execLogMeshMaterialInfo },
			{ "LogString", &UDBDUtilities::execLogString },
			{ "NormalizeXY", &UDBDUtilities::execNormalizeXY },
			{ "PointerToInt", &UDBDUtilities::execPointerToInt },
			{ "PrintStringEmbiggened", &UDBDUtilities::execPrintStringEmbiggened },
			{ "ResolveCharacterIdFromPlayerState", &UDBDUtilities::execResolveCharacterIdFromPlayerState },
			{ "SetComponentCastHiddenShadow", &UDBDUtilities::execSetComponentCastHiddenShadow },
			{ "SphereTraceAgainstActor", &UDBDUtilities::execSphereTraceAgainstActor },
			{ "SphereTraceSingle", &UDBDUtilities::execSphereTraceSingle },
			{ "ToAngle_negative180to180", &UDBDUtilities::execToAngle_negative180to180 },
			{ "WithinRange", &UDBDUtilities::execWithinRange },
			{ "WithinRangeExclusive", &UDBDUtilities::execWithinRangeExclusive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics
	{
		struct DBDUtilities_eventAddComponentToActor_Parms
		{
			UClass* compClass;
			FName compName;
			AActor* actor;
			UActorComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_compName;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_compClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventAddComponentToActor_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventAddComponentToActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_compName = { "compName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventAddComponentToActor_Parms, compName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_compClass = { "compClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventAddComponentToActor_Parms, compClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_compName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::NewProp_compClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "AddComponentToActor", nullptr, nullptr, sizeof(DBDUtilities_eventAddComponentToActor_Parms), Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_AddComponentToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_AddComponentToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics
	{
		struct DBDUtilities_eventBoxTraceAgainstActor_Parms
		{
			FVector start;
			FVector end;
			const UBoxComponent* box;
			const AActor* actor;
			FHitResult outHitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outHitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_end;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventBoxTraceAgainstActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventBoxTraceAgainstActor_Parms), &Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_outHitResult = { "outHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventBoxTraceAgainstActor_Parms, outHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventBoxTraceAgainstActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_box_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_box = { "box", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventBoxTraceAgainstActor_Parms, box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_box_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_end_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventBoxTraceAgainstActor_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_end_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_end_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventBoxTraceAgainstActor_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_outHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_end,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::NewProp_start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "BoxTraceAgainstActor", nullptr, nullptr, sizeof(DBDUtilities_eventBoxTraceAgainstActor_Parms), Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_CrashGameCausingInterrupt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_CrashGameCausingInterrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_CrashGameCausingInterrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "CrashGameCausingInterrupt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_CrashGameCausingInterrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_CrashGameCausingInterrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_CrashGameCausingInterrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_CrashGameCausingInterrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics
	{
		struct DBDUtilities_eventDBDCapsuleTraceSingle_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			float Radius;
			float HalfHeight;
			TEnumAsByte<ECollisionChannel> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventDBDCapsuleTraceSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventDBDCapsuleTraceSingle_Parms), &Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((DBDUtilities_eventDBDCapsuleTraceSingle_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventDBDCapsuleTraceSingle_Parms), &Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDCapsuleTraceSingle_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDCapsuleTraceSingle_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDCapsuleTraceSingle_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((DBDUtilities_eventDBDCapsuleTraceSingle_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventDBDCapsuleTraceSingle_Parms), &Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDCapsuleTraceSingle_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDCapsuleTraceSingle_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDCapsuleTraceSingle_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDCapsuleTraceSingle_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDCapsuleTraceSingle_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_Start_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDCapsuleTraceSingle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "DBDCapsuleTraceSingle", nullptr, nullptr, sizeof(DBDUtilities_eventDBDCapsuleTraceSingle_Parms), Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics
	{
		struct DBDUtilities_eventDBDLoadAudioBank_Parms
		{
			UAkAudioBank* bank;
			AActor* caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caller;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::NewProp_caller = { "caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDLoadAudioBank_Parms, caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::NewProp_bank = { "bank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDLoadAudioBank_Parms, bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::NewProp_caller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::NewProp_bank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "DBDLoadAudioBank", nullptr, nullptr, sizeof(DBDUtilities_eventDBDLoadAudioBank_Parms), Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics
	{
		struct DBDUtilities_eventDBDLoadAudioBankAsync_Parms
		{
			UAkAudioBank* bank;
			AActor* caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caller;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::NewProp_caller = { "caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDLoadAudioBankAsync_Parms, caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::NewProp_bank = { "bank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDLoadAudioBankAsync_Parms, bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::NewProp_caller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::NewProp_bank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "DBDLoadAudioBankAsync", nullptr, nullptr, sizeof(DBDUtilities_eventDBDLoadAudioBankAsync_Parms), Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics
	{
		struct DBDUtilities_eventDBDLoadAudioBankByAssetPtr_Parms
		{
			TSoftObjectPtr<UAkAudioBank> bank;
			AActor* caller;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caller;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDLoadAudioBankByAssetPtr_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::NewProp_caller = { "caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDLoadAudioBankByAssetPtr_Parms, caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::NewProp_bank = { "bank", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDBDLoadAudioBankByAssetPtr_Parms, bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::NewProp_caller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::NewProp_bank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "DBDLoadAudioBankByAssetPtr", nullptr, nullptr, sizeof(DBDUtilities_eventDBDLoadAudioBankByAssetPtr_Parms), Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics
	{
		struct DBDUtilities_eventDistanceFromPointToPane_Parms
		{
			FVector point;
			FPlane plane;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_plane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDistanceFromPointToPane_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_plane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_plane = { "plane", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDistanceFromPointToPane_Parms, plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_plane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventDistanceFromPointToPane_Parms, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_plane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::NewProp_point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "DistanceFromPointToPane", nullptr, nullptr, sizeof(DBDUtilities_eventDistanceFromPointToPane_Parms), Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics
	{
		struct DBDUtilities_eventFindFloorSingle_Parms
		{
			UObject* WorldContextObject;
			FVector location;
			float raycastLength;
			FHitResult outHit;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outHit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_raycastLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventFindFloorSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventFindFloorSingle_Parms), &Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_outHit = { "outHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventFindFloorSingle_Parms, outHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_raycastLength = { "raycastLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventFindFloorSingle_Parms, raycastLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventFindFloorSingle_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventFindFloorSingle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_outHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_raycastLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "FindFloorSingle", nullptr, nullptr, sizeof(DBDUtilities_eventFindFloorSingle_Parms), Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_FindFloorSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_FindFloorSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics
	{
		struct DBDUtilities_eventFindParentOfClass_Parms
		{
			AActor* InChild;
			UClass* InClass;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InChild;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventFindParentOfClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventFindParentOfClass_Parms, InClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventFindParentOfClass_Parms, InChild), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::NewProp_InClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::NewProp_InChild,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "FindParentOfClass", nullptr, nullptr, sizeof(DBDUtilities_eventFindParentOfClass_Parms), Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_FindParentOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_FindParentOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics
	{
		struct DBDUtilities_eventGetActiveShadowSystem_Parms
		{
			EShadowSystem ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetActiveShadowSystem_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_EShadowSystem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetActiveShadowSystem", nullptr, nullptr, sizeof(DBDUtilities_eventGetActiveShadowSystem_Parms), Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics
	{
		struct DBDUtilities_eventGetActorOwnerName_Parms
		{
			AActor* actor;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetActorOwnerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetActorOwnerName_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetActorOwnerName", nullptr, nullptr, sizeof(DBDUtilities_eventGetActorOwnerName_Parms), Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics
	{
		struct DBDUtilities_eventGetActorSpawners_Parms
		{
			TArray<UActorSpawner*> actorSpawners;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_actorSpawners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorSpawners_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::NewProp_actorSpawners_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::NewProp_actorSpawners = { "actorSpawners", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetActorSpawners_Parms, actorSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::NewProp_actorSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::NewProp_actorSpawners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::NewProp_actorSpawners_Inner = { "actorSpawners", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::NewProp_actorSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::NewProp_actorSpawners_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetActorSpawners", nullptr, nullptr, sizeof(DBDUtilities_eventGetActorSpawners_Parms), Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetActorSpawners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetActorSpawners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics
	{
		struct DBDUtilities_eventGetAnimSequenceLength_Parms
		{
			UAnimSequence* sequence;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetAnimSequenceLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::NewProp_sequence = { "sequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetAnimSequenceLength_Parms, sequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::NewProp_sequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetAnimSequenceLength", nullptr, nullptr, sizeof(DBDUtilities_eventGetAnimSequenceLength_Parms), Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics
	{
		struct DBDUtilities_eventGetBuilder_Parms
		{
			const UObject* WorldContextObject;
			AProceduralLevelBuilder* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetBuilder_Parms, ReturnValue), Z_Construct_UClass_AProceduralLevelBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetBuilder_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetBuilder", nullptr, nullptr, sizeof(DBDUtilities_eventGetBuilder_Parms), Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetBuilder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetBuilder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics
	{
		struct DBDUtilities_eventGetClosestPointOnOrbit_Parms
		{
			FVector centerPoint;
			FVector orbitterPosition;
			float distance;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orbitterPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_orbitterPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_centerPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_centerPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetClosestPointOnOrbit_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_distance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetClosestPointOnOrbit_Parms, distance), METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_orbitterPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_orbitterPosition = { "orbitterPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetClosestPointOnOrbit_Parms, orbitterPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_orbitterPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_orbitterPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_centerPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_centerPoint = { "centerPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetClosestPointOnOrbit_Parms, centerPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_centerPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_centerPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_orbitterPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::NewProp_centerPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetClosestPointOnOrbit", nullptr, nullptr, sizeof(DBDUtilities_eventGetClosestPointOnOrbit_Parms), Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics
	{
		struct DBDUtilities_eventGetClosestSnapTransformOnOrbit_Parms
		{
			FVector centerPoint;
			FVector orbitterPosition;
			float distance;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orbitterPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_orbitterPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_centerPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_centerPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetClosestSnapTransformOnOrbit_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_distance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetClosestSnapTransformOnOrbit_Parms, distance), METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_orbitterPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_orbitterPosition = { "orbitterPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetClosestSnapTransformOnOrbit_Parms, orbitterPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_orbitterPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_orbitterPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_centerPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_centerPoint = { "centerPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetClosestSnapTransformOnOrbit_Parms, centerPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_centerPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_centerPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_orbitterPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::NewProp_centerPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetClosestSnapTransformOnOrbit", nullptr, nullptr, sizeof(DBDUtilities_eventGetClosestSnapTransformOnOrbit_Parms), Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics
	{
		struct DBDUtilities_eventGetComponentOwnerName_Parms
		{
			UActorComponent* actorComponent;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetComponentOwnerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::NewProp_actorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::NewProp_actorComponent = { "actorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetComponentOwnerName_Parms, actorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::NewProp_actorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::NewProp_actorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::NewProp_actorComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetComponentOwnerName", nullptr, nullptr, sizeof(DBDUtilities_eventGetComponentOwnerName_Parms), Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics
	{
		struct DBDUtilities_eventGetCurrentCharacterName_Parms
		{
			const UObject* WorldContextObject;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetCurrentCharacterName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetCurrentCharacterName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetCurrentCharacterName", nullptr, nullptr, sizeof(DBDUtilities_eventGetCurrentCharacterName_Parms), Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics
	{
		struct DBDUtilities_eventGetDBDAIPlayerController_Parms
		{
			ADBDPlayer* player;
			ADBDAIPlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetDBDAIPlayerController_Parms, ReturnValue), Z_Construct_UClass_ADBDAIPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetDBDAIPlayerController_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetDBDAIPlayerController", nullptr, nullptr, sizeof(DBDUtilities_eventGetDBDAIPlayerController_Parms), Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics
	{
		struct DBDUtilities_eventGetDBDGameInstance_Parms
		{
			const UObject* WorldContextObject;
			UDBDGameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetDBDGameInstance_Parms, ReturnValue), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetDBDGameInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetDBDGameInstance", nullptr, nullptr, sizeof(DBDUtilities_eventGetDBDGameInstance_Parms), Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics
	{
		struct DBDUtilities_eventGetDBDGameMode_Parms
		{
			const UObject* worldContextObject;
			ADBDGameMode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetDBDGameMode_Parms, ReturnValue), Z_Construct_UClass_ADBDGameMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetDBDGameMode_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetDBDGameMode", nullptr, nullptr, sizeof(DBDUtilities_eventGetDBDGameMode_Parms), Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics
	{
		struct DBDUtilities_eventGetDBDGameState_Parms
		{
			const UObject* worldContextObject;
			ADBDGameState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetDBDGameState_Parms, ReturnValue), Z_Construct_UClass_ADBDGameState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetDBDGameState_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetDBDGameState", nullptr, nullptr, sizeof(DBDUtilities_eventGetDBDGameState_Parms), Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetDBDGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetDBDGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics
	{
		struct DBDUtilities_eventGetDistanceToNearestHookedSurvivor_Parms
		{
			const ADBDPlayer* player;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetDistanceToNearestHookedSurvivor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetDistanceToNearestHookedSurvivor_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetDistanceToNearestHookedSurvivor", nullptr, nullptr, sizeof(DBDUtilities_eventGetDistanceToNearestHookedSurvivor_Parms), Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics
	{
		struct DBDUtilities_eventGetEndGameTunableValue_Parms
		{
			UObject* worldContextObject;
			FName valueName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_valueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetEndGameTunableValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::NewProp_valueName = { "valueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetEndGameTunableValue_Parms, valueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetEndGameTunableValue_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::NewProp_valueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetEndGameTunableValue", nullptr, nullptr, sizeof(DBDUtilities_eventGetEndGameTunableValue_Parms), Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics
	{
		struct DBDUtilities_eventGetFirstActorWithTag_Parms
		{
			FName tag;
			TArray<AActor*> actorsArray;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_actorsArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorsArray_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFirstActorWithTag_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_actorsArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_actorsArray = { "actorsArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFirstActorWithTag_Parms, actorsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_actorsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_actorsArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_actorsArray_Inner = { "actorsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFirstActorWithTag_Parms, tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_actorsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_actorsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::NewProp_tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetFirstActorWithTag", nullptr, nullptr, sizeof(DBDUtilities_eventGetFirstActorWithTag_Parms), Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics
	{
		struct DBDUtilities_eventGetFloorLocationAt_Parms
		{
			UObject* WorldContextObject;
			FVector location;
			float raycastStartHeight;
			float raycastEndHeight;
			bool useComplex;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_useComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useComplex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_raycastEndHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_raycastStartHeight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFloorLocationAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_useComplex_SetBit(void* Obj)
	{
		((DBDUtilities_eventGetFloorLocationAt_Parms*)Obj)->useComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_useComplex = { "useComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventGetFloorLocationAt_Parms), &Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_useComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_raycastEndHeight = { "raycastEndHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFloorLocationAt_Parms, raycastEndHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_raycastStartHeight = { "raycastStartHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFloorLocationAt_Parms, raycastStartHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFloorLocationAt_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFloorLocationAt_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_useComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_raycastEndHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_raycastStartHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetFloorLocationAt", nullptr, nullptr, sizeof(DBDUtilities_eventGetFloorLocationAt_Parms), Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics
	{
		struct DBDUtilities_eventGetFormattedNumberString_Parms
		{
			float value;
			int32 maxDecimals;
			int32 minDecimals;
			bool leadingZero;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_leadingZero_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_leadingZero;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minDecimals;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxDecimals;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFormattedNumberString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_leadingZero_SetBit(void* Obj)
	{
		((DBDUtilities_eventGetFormattedNumberString_Parms*)Obj)->leadingZero = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_leadingZero = { "leadingZero", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventGetFormattedNumberString_Parms), &Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_leadingZero_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_minDecimals = { "minDecimals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFormattedNumberString_Parms, minDecimals), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_maxDecimals = { "maxDecimals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFormattedNumberString_Parms, maxDecimals), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFormattedNumberString_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_leadingZero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_minDecimals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_maxDecimals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetFormattedNumberString", nullptr, nullptr, sizeof(DBDUtilities_eventGetFormattedNumberString_Parms), Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics
	{
		struct DBDUtilities_eventGetFormattedNumberText_Parms
		{
			float value;
			int32 maxDecimals;
			int32 minDecimals;
			bool leadingZero;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static void NewProp_leadingZero_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_leadingZero;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minDecimals;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxDecimals;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFormattedNumberText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_leadingZero_SetBit(void* Obj)
	{
		((DBDUtilities_eventGetFormattedNumberText_Parms*)Obj)->leadingZero = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_leadingZero = { "leadingZero", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventGetFormattedNumberText_Parms), &Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_leadingZero_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_minDecimals = { "minDecimals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFormattedNumberText_Parms, minDecimals), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_maxDecimals = { "maxDecimals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFormattedNumberText_Parms, maxDecimals), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetFormattedNumberText_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_leadingZero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_minDecimals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_maxDecimals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetFormattedNumberText", nullptr, nullptr, sizeof(DBDUtilities_eventGetFormattedNumberText_Parms), Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics
	{
		struct DBDUtilities_eventGetImpactCollisionObjectType_Parms
		{
			const UPrimitiveComponent* primitive;
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_primitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_primitive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetImpactCollisionObjectType_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::NewProp_primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::NewProp_primitive = { "primitive", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetImpactCollisionObjectType_Parms, primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::NewProp_primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::NewProp_primitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::NewProp_primitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetImpactCollisionObjectType", nullptr, nullptr, sizeof(DBDUtilities_eventGetImpactCollisionObjectType_Parms), Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics
	{
		struct DBDUtilities_eventGetImpactCollisionResponseContainer_Parms
		{
			const UPrimitiveComponent* primitive;
			FCollisionResponseContainer ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_primitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_primitive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetImpactCollisionResponseContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::NewProp_primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::NewProp_primitive = { "primitive", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetImpactCollisionResponseContainer_Parms, primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::NewProp_primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::NewProp_primitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::NewProp_primitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetImpactCollisionResponseContainer", nullptr, nullptr, sizeof(DBDUtilities_eventGetImpactCollisionResponseContainer_Parms), Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics
	{
		struct DBDUtilities_eventGetInGamePlayers_Parms
		{
			const UObject* WorldContextObject;
			TArray<ADBDPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInGamePlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInGamePlayers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetInGamePlayers", nullptr, nullptr, sizeof(DBDUtilities_eventGetInGamePlayers_Parms), Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics
	{
		struct DBDUtilities_eventGetInGameSurvivors_Parms
		{
			const UObject* WorldContextObject;
			TArray<ACamperPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInGameSurvivors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInGameSurvivors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetInGameSurvivors", nullptr, nullptr, sizeof(DBDUtilities_eventGetInGameSurvivors_Parms), Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics
	{
		struct DBDUtilities_eventGetInGameSurvivorsByRef_Parms
		{
			const UObject* WorldContextObject;
			TSet<ACamperPlayer*> ReturnValue;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInGameSurvivorsByRef_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInGameSurvivorsByRef_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetInGameSurvivorsByRef", nullptr, nullptr, sizeof(DBDUtilities_eventGetInGameSurvivorsByRef_Parms), Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics
	{
		struct DBDUtilities_eventGetInventoryCount_Parms
		{
			UObject* worldContextObject;
			int32 characterIndex;
			FName itemID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInventoryCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInventoryCount_Parms, itemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInventoryCount_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInventoryCount_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::NewProp_characterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetInventoryCount", nullptr, nullptr, sizeof(DBDUtilities_eventGetInventoryCount_Parms), Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetInventoryCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetInventoryCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics
	{
		struct DBDUtilities_eventGetInventoryCountForMultipleCharacters_Parms
		{
			UObject* worldContextObject;
			TArray<int32> characterIndexes;
			FName itemID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_characterIndexes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndexes_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInventoryCountForMultipleCharacters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInventoryCountForMultipleCharacters_Parms, itemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::NewProp_characterIndexes = { "characterIndexes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInventoryCountForMultipleCharacters_Parms, characterIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::NewProp_characterIndexes_Inner = { "characterIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetInventoryCountForMultipleCharacters_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::NewProp_characterIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::NewProp_characterIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetInventoryCountForMultipleCharacters", nullptr, nullptr, sizeof(DBDUtilities_eventGetInventoryCountForMultipleCharacters_Parms), Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics
	{
		struct DBDUtilities_eventGetLocalDBDCameraManager_Parms
		{
			UObject* WorldContextObject;
			ADBDPlayerCameraManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocalDBDCameraManager_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocalDBDCameraManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetLocalDBDCameraManager", nullptr, nullptr, sizeof(DBDUtilities_eventGetLocalDBDCameraManager_Parms), Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics
	{
		struct DBDUtilities_eventGetLocalDBDPlayerController_Parms
		{
			const UObject* WorldContextObject;
			ADBDPlayerControllerBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocalDBDPlayerController_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocalDBDPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetLocalDBDPlayerController", nullptr, nullptr, sizeof(DBDUtilities_eventGetLocalDBDPlayerController_Parms), Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics
	{
		struct DBDUtilities_eventGetLocallyControlledCharacter_Parms
		{
			const UObject* WorldContextObject;
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyControlledCharacter_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyControlledCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetLocallyControlledCharacter", nullptr, nullptr, sizeof(DBDUtilities_eventGetLocallyControlledCharacter_Parms), Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics
	{
		struct DBDUtilities_eventGetLocallyControlledCharacterRole_Parms
		{
			const UObject* WorldContextObject;
			EPlayerRole ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyControlledCharacterRole_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyControlledCharacterRole_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetLocallyControlledCharacterRole", nullptr, nullptr, sizeof(DBDUtilities_eventGetLocallyControlledCharacterRole_Parms), Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics
	{
		struct DBDUtilities_eventGetLocallyControlledKiller_Parms
		{
			const UObject* WorldContextObject;
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyControlledKiller_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyControlledKiller_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetLocallyControlledKiller", nullptr, nullptr, sizeof(DBDUtilities_eventGetLocallyControlledKiller_Parms), Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics
	{
		struct DBDUtilities_eventGetLocallyControlledSurvivor_Parms
		{
			const UObject* WorldContextObject;
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyControlledSurvivor_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyControlledSurvivor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetLocallyControlledSurvivor", nullptr, nullptr, sizeof(DBDUtilities_eventGetLocallyControlledSurvivor_Parms), Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics
	{
		struct DBDUtilities_eventGetLocallyObservedCharacter_Parms
		{
			const UObject* WorldContextObject;
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyObservedCharacter_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyObservedCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetLocallyObservedCharacter", nullptr, nullptr, sizeof(DBDUtilities_eventGetLocallyObservedCharacter_Parms), Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics
	{
		struct DBDUtilities_eventGetLocallyObservedCharacterRole_Parms
		{
			const UObject* WorldContextObject;
			EPlayerRole ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyObservedCharacterRole_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLocallyObservedCharacterRole_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetLocallyObservedCharacterRole", nullptr, nullptr, sizeof(DBDUtilities_eventGetLocallyObservedCharacterRole_Parms), Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics
	{
		struct DBDUtilities_eventGetLogStringMaterialInfo_Parms
		{
			FString inStr;
			const UMaterialInterface* root;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLogStringMaterialInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_root_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLogStringMaterialInfo_Parms, root), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_inStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_inStr = { "inStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetLogStringMaterialInfo_Parms, inStr), METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_inStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_inStr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::NewProp_inStr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetLogStringMaterialInfo", nullptr, nullptr, sizeof(DBDUtilities_eventGetLogStringMaterialInfo_Parms), Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics
	{
		struct DBDUtilities_eventGetMaterialHelpersAttachedToPlayerMesh_Parms
		{
			const ADBDPlayer* player;
			TArray<UMaterialHelper*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetMaterialHelpersAttachedToPlayerMesh_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialHelper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetMaterialHelpersAttachedToPlayerMesh_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetMaterialHelpersAttachedToPlayerMesh", nullptr, nullptr, sizeof(DBDUtilities_eventGetMaterialHelpersAttachedToPlayerMesh_Parms), Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics
	{
		struct DBDUtilities_eventGetMontageLength_Parms
		{
			UAnimMontage* montage;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetMontageLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetMontageLength_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetMontageLength", nullptr, nullptr, sizeof(DBDUtilities_eventGetMontageLength_Parms), Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetMontageLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetMontageLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics
	{
		struct DBDUtilities_eventGetNearbyActorsOfType_Parms
		{
			UWorld* world;
			FVector center;
			float radius;
			TArray<AActor*> outNearbyActors;
			UClass* actorClassType;
			TEnumAsByte<ECollisionChannel> collisionChannel;
			AActor* ignoreActor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ignoreActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_collisionChannel;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_actorClassType;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outNearbyActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outNearbyActors_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_center;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventGetNearbyActorsOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventGetNearbyActorsOfType_Parms), &Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_ignoreActor = { "ignoreActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyActorsOfType_Parms, ignoreActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_collisionChannel = { "collisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyActorsOfType_Parms, collisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_actorClassType = { "actorClassType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyActorsOfType_Parms, actorClassType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_outNearbyActors = { "outNearbyActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyActorsOfType_Parms, outNearbyActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_outNearbyActors_Inner = { "outNearbyActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyActorsOfType_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyActorsOfType_Parms, center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyActorsOfType_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_ignoreActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_collisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_actorClassType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_outNearbyActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_outNearbyActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetNearbyActorsOfType", nullptr, nullptr, sizeof(DBDUtilities_eventGetNearbyActorsOfType_Parms), Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics
	{
		struct DBDUtilities_eventGetNearbyCampers_Parms
		{
			UWorld* world;
			FVector center;
			float radius;
			TArray<ACamperPlayer*> outNearbyCampers;
			TArray<AActor*> ignoredCampers;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ignoredCampers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ignoredCampers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ignoredCampers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outNearbyCampers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outNearbyCampers_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_center;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_ignoredCampers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_ignoredCampers = { "ignoredCampers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyCampers_Parms, ignoredCampers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_ignoredCampers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_ignoredCampers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_ignoredCampers_Inner = { "ignoredCampers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_outNearbyCampers = { "outNearbyCampers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyCampers_Parms, outNearbyCampers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_outNearbyCampers_Inner = { "outNearbyCampers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyCampers_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyCampers_Parms, center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetNearbyCampers_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_ignoredCampers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_ignoredCampers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_outNearbyCampers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_outNearbyCampers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetNearbyCampers", nullptr, nullptr, sizeof(DBDUtilities_eventGetNearbyCampers_Parms), Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics
	{
		struct DBDUtilities_eventGetOuterMostActor_Parms
		{
			const UAnimInstance* animInstance;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetOuterMostActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::NewProp_animInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::NewProp_animInstance = { "animInstance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetOuterMostActor_Parms, animInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::NewProp_animInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::NewProp_animInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::NewProp_animInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetOuterMostActor", nullptr, nullptr, sizeof(DBDUtilities_eventGetOuterMostActor_Parms), Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics
	{
		struct DBDUtilities_eventGetOwningCamper_Parms
		{
			const UAnimInstance* animInstance;
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetOwningCamper_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::NewProp_animInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::NewProp_animInstance = { "animInstance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetOwningCamper_Parms, animInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::NewProp_animInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::NewProp_animInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::NewProp_animInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetOwningCamper", nullptr, nullptr, sizeof(DBDUtilities_eventGetOwningCamper_Parms), Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetOwningCamper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetOwningCamper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics
	{
		struct DBDUtilities_eventGetOwningCharacterSkeletalMeshComponent_Parms
		{
			const UAnimInstance* animInstance;
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetOwningCharacterSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_animInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_animInstance = { "animInstance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetOwningCharacterSkeletalMeshComponent_Parms, animInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_animInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_animInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_animInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetOwningCharacterSkeletalMeshComponent", nullptr, nullptr, sizeof(DBDUtilities_eventGetOwningCharacterSkeletalMeshComponent_Parms), Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics
	{
		struct DBDUtilities_eventGetOwningDBDBasePlayer_Parms
		{
			const UAnimInstance* animInstance;
			ADBDBasePlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetOwningDBDBasePlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDBasePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::NewProp_animInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::NewProp_animInstance = { "animInstance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetOwningDBDBasePlayer_Parms, animInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::NewProp_animInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::NewProp_animInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::NewProp_animInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetOwningDBDBasePlayer", nullptr, nullptr, sizeof(DBDUtilities_eventGetOwningDBDBasePlayer_Parms), Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics
	{
		struct DBDUtilities_eventGetOwningSlasher_Parms
		{
			const UAnimInstance* animInstance;
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetOwningSlasher_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::NewProp_animInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::NewProp_animInstance = { "animInstance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetOwningSlasher_Parms, animInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::NewProp_animInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::NewProp_animInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::NewProp_animInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetOwningSlasher", nullptr, nullptr, sizeof(DBDUtilities_eventGetOwningSlasher_Parms), Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics
	{
		struct DBDUtilities_eventGetPercentOfRange_Parms
		{
			float val;
			float min;
			float max;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_val_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetPercentOfRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetPercentOfRange_Parms, max), METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetPercentOfRange_Parms, min), METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_val_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetPercentOfRange_Parms, val), METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_val_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_val_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetPercentOfRange", nullptr, nullptr, sizeof(DBDUtilities_eventGetPercentOfRange_Parms), Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics
	{
		struct DBDUtilities_eventGetPlayRateForMontage_Parms
		{
			UAnimMontage* montage;
			float time;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetPlayRateForMontage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetPlayRateForMontage_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetPlayRateForMontage_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetPlayRateForMontage", nullptr, nullptr, sizeof(DBDUtilities_eventGetPlayRateForMontage_Parms), Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics
	{
		struct DBDUtilities_eventGetSimilarVector_Parms
		{
			FVector vector;
			float maximumDeviation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maximumDeviation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetSimilarVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::NewProp_maximumDeviation = { "maximumDeviation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetSimilarVector_Parms, maximumDeviation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetSimilarVector_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::NewProp_maximumDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::NewProp_vector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetSimilarVector", nullptr, nullptr, sizeof(DBDUtilities_eventGetSimilarVector_Parms), Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetSimilarVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetSimilarVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics
	{
		struct DBDUtilities_eventGetSlasher_Parms
		{
			UObject* WorldContextObject;
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetSlasher_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetSlasher_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetSlasher", nullptr, nullptr, sizeof(DBDUtilities_eventGetSlasher_Parms), Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetSlasher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetSlasher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics
	{
		struct DBDUtilities_eventGetSlasherTunableValue_Parms
		{
			UObject* WorldContextObject;
			FName valueName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_valueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetSlasherTunableValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::NewProp_valueName = { "valueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetSlasherTunableValue_Parms, valueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetSlasherTunableValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::NewProp_valueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetSlasherTunableValue", nullptr, nullptr, sizeof(DBDUtilities_eventGetSlasherTunableValue_Parms), Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics
	{
		struct DBDUtilities_eventGetThreeClosestGenerators_Parms
		{
			TArray<AGenerator*> unrevealedGenerators;
			TArray<AGenerator*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unrevealedGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_unrevealedGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unrevealedGenerators_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetThreeClosestGenerators_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_unrevealedGenerators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_unrevealedGenerators = { "unrevealedGenerators", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetThreeClosestGenerators_Parms, unrevealedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_unrevealedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_unrevealedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_unrevealedGenerators_Inner = { "unrevealedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_unrevealedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::NewProp_unrevealedGenerators_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetThreeClosestGenerators", nullptr, nullptr, sizeof(DBDUtilities_eventGetThreeClosestGenerators_Parms), Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics
	{
		struct DBDUtilities_eventGetTileSpawnPoints_Parms
		{
			TArray<UTileSpawnPoint*> tileSpawnPoints;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileSpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tileSpawnPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tileSpawnPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::NewProp_tileSpawnPoints_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::NewProp_tileSpawnPoints = { "tileSpawnPoints", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetTileSpawnPoints_Parms, tileSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::NewProp_tileSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::NewProp_tileSpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::NewProp_tileSpawnPoints_Inner = { "tileSpawnPoints", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTileSpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::NewProp_tileSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::NewProp_tileSpawnPoints_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetTileSpawnPoints", nullptr, nullptr, sizeof(DBDUtilities_eventGetTileSpawnPoints_Parms), Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics
	{
		struct DBDUtilities_eventGetVelocityXYAngleDegrees_Parms
		{
			const AActor* actor;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetVelocityXYAngleDegrees_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetVelocityXYAngleDegrees_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::NewProp_actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetVelocityXYAngleDegrees", nullptr, nullptr, sizeof(DBDUtilities_eventGetVelocityXYAngleDegrees_Parms), Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics
	{
		struct DBDUtilities_eventGetXYVector_Parms
		{
			FVector vector;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetXYVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::NewProp_vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetXYVector_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::NewProp_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::NewProp_vector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::NewProp_vector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetXYVector", nullptr, nullptr, sizeof(DBDUtilities_eventGetXYVector_Parms), Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetXYVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetXYVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics
	{
		struct DBDUtilities_eventGetYawOnly_Parms
		{
			FRotator rotation;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetYawOnly_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventGetYawOnly_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::NewProp_rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "GetYawOnly", nullptr, nullptr, sizeof(DBDUtilities_eventGetYawOnly_Parms), Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_GetYawOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_GetYawOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics
	{
		struct DBDUtilities_eventHasFloorForward_Parms
		{
			UObject* WorldContextObject;
			FVector location;
			FVector fowardVector;
			float distance;
			float raycastStartHeight;
			float raycastEndHeight;
			TArray<FHitResult> outHits;
			FVector raycastStart;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_raycastStart;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outHits_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_raycastEndHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_raycastStartHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fowardVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventHasFloorForward_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventHasFloorForward_Parms), &Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_raycastStart = { "raycastStart", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasFloorForward_Parms, raycastStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_outHits = { "outHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasFloorForward_Parms, outHits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_outHits_Inner = { "outHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_raycastEndHeight = { "raycastEndHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasFloorForward_Parms, raycastEndHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_raycastStartHeight = { "raycastStartHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasFloorForward_Parms, raycastStartHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasFloorForward_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_fowardVector = { "fowardVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasFloorForward_Parms, fowardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasFloorForward_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasFloorForward_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_raycastStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_outHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_outHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_raycastEndHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_raycastStartHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_fowardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "HasFloorForward", nullptr, nullptr, sizeof(DBDUtilities_eventHasFloorForward_Parms), Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_HasFloorForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_HasFloorForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics
	{
		struct DBDUtilities_eventHasLineOfSightToTarget_Parms
		{
			UObject* WorldContextObject;
			FVector startPosition;
			FVector targetPosition;
			const AActor* ignoredActor;
			bool useComplex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useComplex_MetaData[];
#endif
		static void NewProp_useComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ignoredActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ignoredActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventHasLineOfSightToTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventHasLineOfSightToTarget_Parms), &Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_useComplex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_useComplex_SetBit(void* Obj)
	{
		((DBDUtilities_eventHasLineOfSightToTarget_Parms*)Obj)->useComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_useComplex = { "useComplex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventHasLineOfSightToTarget_Parms), &Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_useComplex_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_useComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_useComplex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_ignoredActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_ignoredActor = { "ignoredActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasLineOfSightToTarget_Parms, ignoredActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_ignoredActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_ignoredActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_targetPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_targetPosition = { "targetPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasLineOfSightToTarget_Parms, targetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_targetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_targetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_startPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_startPosition = { "startPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasLineOfSightToTarget_Parms, startPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_startPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_startPosition_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasLineOfSightToTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_useComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_ignoredActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_targetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_startPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "HasLineOfSightToTarget", nullptr, nullptr, sizeof(DBDUtilities_eventHasLineOfSightToTarget_Parms), Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics
	{
		struct DBDUtilities_eventHasWalkableSurfaceForward_Parms
		{
			UObject* WorldContextObject;
			FVector location;
			FVector fowardVector;
			float distance;
			float raycastStartHeight;
			float raycastEndHeight;
			TArray<FHitResult> outHits;
			FVector raycastStart;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_raycastStart;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outHits_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_raycastEndHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_raycastStartHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fowardVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventHasWalkableSurfaceForward_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventHasWalkableSurfaceForward_Parms), &Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_raycastStart = { "raycastStart", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasWalkableSurfaceForward_Parms, raycastStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_outHits = { "outHits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasWalkableSurfaceForward_Parms, outHits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_outHits_Inner = { "outHits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_raycastEndHeight = { "raycastEndHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasWalkableSurfaceForward_Parms, raycastEndHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_raycastStartHeight = { "raycastStartHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasWalkableSurfaceForward_Parms, raycastStartHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasWalkableSurfaceForward_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_fowardVector = { "fowardVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasWalkableSurfaceForward_Parms, fowardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasWalkableSurfaceForward_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventHasWalkableSurfaceForward_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_raycastStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_outHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_outHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_raycastEndHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_raycastStartHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_fowardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "HasWalkableSurfaceForward", nullptr, nullptr, sizeof(DBDUtilities_eventHasWalkableSurfaceForward_Parms), Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics
	{
		struct DBDUtilities_eventIsInKillerTeam_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventIsInKillerTeam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventIsInKillerTeam_Parms), &Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventIsInKillerTeam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "IsInKillerTeam", nullptr, nullptr, sizeof(DBDUtilities_eventIsInKillerTeam_Parms), Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics
	{
		struct DBDUtilities_eventIsInSurvivorTeam_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventIsInSurvivorTeam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventIsInSurvivorTeam_Parms), &Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventIsInSurvivorTeam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "IsInSurvivorTeam", nullptr, nullptr, sizeof(DBDUtilities_eventIsInSurvivorTeam_Parms), Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics
	{
		struct DBDUtilities_eventIsInTutorialLevel_Parms
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
	void Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventIsInTutorialLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventIsInTutorialLevel_Parms), &Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "IsInTutorialLevel", nullptr, nullptr, sizeof(DBDUtilities_eventIsInTutorialLevel_Parms), Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics
	{
		struct DBDUtilities_eventIsLocallyObservingAKiller_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventIsLocallyObservingAKiller_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventIsLocallyObservingAKiller_Parms), &Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventIsLocallyObservingAKiller_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "IsLocallyObservingAKiller", nullptr, nullptr, sizeof(DBDUtilities_eventIsLocallyObservingAKiller_Parms), Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics
	{
		struct DBDUtilities_eventIsLocallyObservingASurvivor_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventIsLocallyObservingASurvivor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventIsLocallyObservingASurvivor_Parms), &Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventIsLocallyObservingASurvivor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "IsLocallyObservingASurvivor", nullptr, nullptr, sizeof(DBDUtilities_eventIsLocallyObservingASurvivor_Parms), Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics
	{
		struct DBDUtilities_eventIsNonViolent_Parms
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
	void Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventIsNonViolent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventIsNonViolent_Parms), &Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "IsNonViolent", nullptr, nullptr, sizeof(DBDUtilities_eventIsNonViolent_Parms), Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_IsNonViolent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_IsNonViolent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics
	{
		struct DBDUtilities_eventIsReplaceDisconnectedPlayersWithBotsActive_Parms
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
	void Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventIsReplaceDisconnectedPlayersWithBotsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventIsReplaceDisconnectedPlayersWithBotsActive_Parms), &Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "IsReplaceDisconnectedPlayersWithBotsActive", nullptr, nullptr, sizeof(DBDUtilities_eventIsReplaceDisconnectedPlayersWithBotsActive_Parms), Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_IsServer_Statics
	{
		struct DBDUtilities_eventIsServer_Parms
		{
			const UObject* worldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventIsServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventIsServer_Parms), &Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventIsServer_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "IsServer", nullptr, nullptr, sizeof(DBDUtilities_eventIsServer_Parms), Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_IsServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_IsServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics
	{
		struct DBDUtilities_eventLogMeshMaterialInfo_Parms
		{
			FString inStr;
			const UMeshComponent* root;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::NewProp_root_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventLogMeshMaterialInfo_Parms, root), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::NewProp_inStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::NewProp_inStr = { "inStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventLogMeshMaterialInfo_Parms, inStr), METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::NewProp_inStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::NewProp_inStr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::NewProp_inStr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "LogMeshMaterialInfo", nullptr, nullptr, sizeof(DBDUtilities_eventLogMeshMaterialInfo_Parms), Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_LogString_Statics
	{
		struct DBDUtilities_eventLogString_Parms
		{
			FString inStr;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_LogString_Statics::NewProp_inStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDUtilities_LogString_Statics::NewProp_inStr = { "inStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventLogString_Parms, inStr), METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_LogString_Statics::NewProp_inStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_LogString_Statics::NewProp_inStr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_LogString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_LogString_Statics::NewProp_inStr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_LogString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_LogString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "LogString", nullptr, nullptr, sizeof(DBDUtilities_eventLogString_Parms), Z_Construct_UFunction_UDBDUtilities_LogString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_LogString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_LogString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_LogString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_LogString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_LogString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics
	{
		struct DBDUtilities_eventNormalizeXY_Parms
		{
			FVector vector;
			float tolerance;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tolerance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventNormalizeXY_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventNormalizeXY_Parms), &Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::NewProp_tolerance = { "tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventNormalizeXY_Parms, tolerance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventNormalizeXY_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::NewProp_tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::NewProp_vector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "NormalizeXY", nullptr, nullptr, sizeof(DBDUtilities_eventNormalizeXY_Parms), Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_NormalizeXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_NormalizeXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics
	{
		struct DBDUtilities_eventPointerToInt_Parms
		{
			UObject* obj;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventPointerToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventPointerToInt_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::NewProp_obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "PointerToInt", nullptr, nullptr, sizeof(DBDUtilities_eventPointerToInt_Parms), Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_PointerToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_PointerToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics
	{
		struct DBDUtilities_eventPrintStringEmbiggened_Parms
		{
			UObject* WorldContextObject;
			FString InString;
			FLinearColor TextColor;
			float Duration;
			int32 Key;
			float Scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventPrintStringEmbiggened_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventPrintStringEmbiggened_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventPrintStringEmbiggened_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventPrintStringEmbiggened_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventPrintStringEmbiggened_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_InString_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventPrintStringEmbiggened_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_InString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "PrintStringEmbiggened", nullptr, nullptr, sizeof(DBDUtilities_eventPrintStringEmbiggened_Parms), Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics
	{
		struct DBDUtilities_eventResolveCharacterIdFromPlayerState_Parms
		{
			const ADBDPlayerState* playerState;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventResolveCharacterIdFromPlayerState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::NewProp_playerState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::NewProp_playerState = { "playerState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventResolveCharacterIdFromPlayerState_Parms, playerState), Z_Construct_UClass_ADBDPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::NewProp_playerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::NewProp_playerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::NewProp_playerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "ResolveCharacterIdFromPlayerState", nullptr, nullptr, sizeof(DBDUtilities_eventResolveCharacterIdFromPlayerState_Parms), Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics
	{
		struct DBDUtilities_eventSetComponentCastHiddenShadow_Parms
		{
			UPrimitiveComponent* component;
			bool castShadow;
		};
		static void NewProp_castShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_castShadow;
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
	void Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::NewProp_castShadow_SetBit(void* Obj)
	{
		((DBDUtilities_eventSetComponentCastHiddenShadow_Parms*)Obj)->castShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::NewProp_castShadow = { "castShadow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventSetComponentCastHiddenShadow_Parms), &Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::NewProp_castShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSetComponentCastHiddenShadow_Parms, component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::NewProp_castShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "SetComponentCastHiddenShadow", nullptr, nullptr, sizeof(DBDUtilities_eventSetComponentCastHiddenShadow_Parms), Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics
	{
		struct DBDUtilities_eventSphereTraceAgainstActor_Parms
		{
			FVector start;
			FVector end;
			const USphereComponent* sphere;
			const AActor* actor;
			FHitResult outHitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outHitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_end;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventSphereTraceAgainstActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventSphereTraceAgainstActor_Parms), &Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_outHitResult = { "outHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSphereTraceAgainstActor_Parms, outHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSphereTraceAgainstActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_sphere_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_sphere = { "sphere", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSphereTraceAgainstActor_Parms, sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_sphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_end_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSphereTraceAgainstActor_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_end_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_end_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSphereTraceAgainstActor_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_outHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_sphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_end,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::NewProp_start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "SphereTraceAgainstActor", nullptr, nullptr, sizeof(DBDUtilities_eventSphereTraceAgainstActor_Parms), Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics
	{
		struct DBDUtilities_eventSphereTraceSingle_Parms
		{
			FVector start;
			FVector end;
			const USphereComponent* sphere;
			FHitResult outHitResult;
			TArray<AActor*> ignoredActors;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ignoredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ignoredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ignoredActors_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outHitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_end;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventSphereTraceSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventSphereTraceSingle_Parms), &Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ignoredActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ignoredActors = { "ignoredActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSphereTraceSingle_Parms, ignoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ignoredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ignoredActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ignoredActors_Inner = { "ignoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_outHitResult = { "outHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSphereTraceSingle_Parms, outHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_sphere_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_sphere = { "sphere", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSphereTraceSingle_Parms, sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_sphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_end_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSphereTraceSingle_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_end_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_end_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventSphereTraceSingle_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ignoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_ignoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_outHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_sphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_end,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::NewProp_start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "SphereTraceSingle", nullptr, nullptr, sizeof(DBDUtilities_eventSphereTraceSingle_Parms), Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics
	{
		struct DBDUtilities_eventToAngle_negative180to180_Parms
		{
			float angle;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_angle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventToAngle_negative180to180_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventToAngle_negative180to180_Parms, angle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::NewProp_angle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "ToAngle_negative180to180", nullptr, nullptr, sizeof(DBDUtilities_eventToAngle_negative180to180_Parms), Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics
	{
		struct DBDUtilities_eventWithinRange_Parms
		{
			float min;
			float max;
			float value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventWithinRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventWithinRange_Parms), &Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventWithinRange_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventWithinRange_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventWithinRange_Parms, min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::NewProp_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::NewProp_min,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "WithinRange", nullptr, nullptr, sizeof(DBDUtilities_eventWithinRange_Parms), Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_WithinRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_WithinRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics
	{
		struct DBDUtilities_eventWithinRangeExclusive_Parms
		{
			float min;
			float max;
			float value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDUtilities_eventWithinRangeExclusive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDUtilities_eventWithinRangeExclusive_Parms), &Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventWithinRangeExclusive_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventWithinRangeExclusive_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDUtilities_eventWithinRangeExclusive_Parms, min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::NewProp_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::NewProp_min,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDUtilities, nullptr, "WithinRangeExclusive", nullptr, nullptr, sizeof(DBDUtilities_eventWithinRangeExclusive_Parms), Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDUtilities_NoRegister()
	{
		return UDBDUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDUtilities_AddComponentToActor, "AddComponentToActor" }, // 1912259635
		{ &Z_Construct_UFunction_UDBDUtilities_BoxTraceAgainstActor, "BoxTraceAgainstActor" }, // 114030225
		{ &Z_Construct_UFunction_UDBDUtilities_CrashGameCausingInterrupt, "CrashGameCausingInterrupt" }, // 2446719006
		{ &Z_Construct_UFunction_UDBDUtilities_DBDCapsuleTraceSingle, "DBDCapsuleTraceSingle" }, // 3748215738
		{ &Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBank, "DBDLoadAudioBank" }, // 1530125551
		{ &Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankAsync, "DBDLoadAudioBankAsync" }, // 4178003099
		{ &Z_Construct_UFunction_UDBDUtilities_DBDLoadAudioBankByAssetPtr, "DBDLoadAudioBankByAssetPtr" }, // 1727959752
		{ &Z_Construct_UFunction_UDBDUtilities_DistanceFromPointToPane, "DistanceFromPointToPane" }, // 4266305442
		{ &Z_Construct_UFunction_UDBDUtilities_FindFloorSingle, "FindFloorSingle" }, // 1730184883
		{ &Z_Construct_UFunction_UDBDUtilities_FindParentOfClass, "FindParentOfClass" }, // 1585760372
		{ &Z_Construct_UFunction_UDBDUtilities_GetActiveShadowSystem, "GetActiveShadowSystem" }, // 4154433005
		{ &Z_Construct_UFunction_UDBDUtilities_GetActorOwnerName, "GetActorOwnerName" }, // 1049760972
		{ &Z_Construct_UFunction_UDBDUtilities_GetActorSpawners, "GetActorSpawners" }, // 920542206
		{ &Z_Construct_UFunction_UDBDUtilities_GetAnimSequenceLength, "GetAnimSequenceLength" }, // 2172299627
		{ &Z_Construct_UFunction_UDBDUtilities_GetBuilder, "GetBuilder" }, // 3132203064
		{ &Z_Construct_UFunction_UDBDUtilities_GetClosestPointOnOrbit, "GetClosestPointOnOrbit" }, // 3435786876
		{ &Z_Construct_UFunction_UDBDUtilities_GetClosestSnapTransformOnOrbit, "GetClosestSnapTransformOnOrbit" }, // 2120547888
		{ &Z_Construct_UFunction_UDBDUtilities_GetComponentOwnerName, "GetComponentOwnerName" }, // 1244396204
		{ &Z_Construct_UFunction_UDBDUtilities_GetCurrentCharacterName, "GetCurrentCharacterName" }, // 1997443577
		{ &Z_Construct_UFunction_UDBDUtilities_GetDBDAIPlayerController, "GetDBDAIPlayerController" }, // 3418223735
		{ &Z_Construct_UFunction_UDBDUtilities_GetDBDGameInstance, "GetDBDGameInstance" }, // 1250054268
		{ &Z_Construct_UFunction_UDBDUtilities_GetDBDGameMode, "GetDBDGameMode" }, // 2692829393
		{ &Z_Construct_UFunction_UDBDUtilities_GetDBDGameState, "GetDBDGameState" }, // 1138721786
		{ &Z_Construct_UFunction_UDBDUtilities_GetDistanceToNearestHookedSurvivor, "GetDistanceToNearestHookedSurvivor" }, // 211066213
		{ &Z_Construct_UFunction_UDBDUtilities_GetEndGameTunableValue, "GetEndGameTunableValue" }, // 2640806229
		{ &Z_Construct_UFunction_UDBDUtilities_GetFirstActorWithTag, "GetFirstActorWithTag" }, // 3413768241
		{ &Z_Construct_UFunction_UDBDUtilities_GetFloorLocationAt, "GetFloorLocationAt" }, // 3796839757
		{ &Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberString, "GetFormattedNumberString" }, // 1419667295
		{ &Z_Construct_UFunction_UDBDUtilities_GetFormattedNumberText, "GetFormattedNumberText" }, // 4294826670
		{ &Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionObjectType, "GetImpactCollisionObjectType" }, // 1494555513
		{ &Z_Construct_UFunction_UDBDUtilities_GetImpactCollisionResponseContainer, "GetImpactCollisionResponseContainer" }, // 4238831268
		{ &Z_Construct_UFunction_UDBDUtilities_GetInGamePlayers, "GetInGamePlayers" }, // 3999405844
		{ &Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivors, "GetInGameSurvivors" }, // 2823823569
		{ &Z_Construct_UFunction_UDBDUtilities_GetInGameSurvivorsByRef, "GetInGameSurvivorsByRef" }, // 2142242630
		{ &Z_Construct_UFunction_UDBDUtilities_GetInventoryCount, "GetInventoryCount" }, // 1527693616
		{ &Z_Construct_UFunction_UDBDUtilities_GetInventoryCountForMultipleCharacters, "GetInventoryCountForMultipleCharacters" }, // 3314611067
		{ &Z_Construct_UFunction_UDBDUtilities_GetLocalDBDCameraManager, "GetLocalDBDCameraManager" }, // 849862722
		{ &Z_Construct_UFunction_UDBDUtilities_GetLocalDBDPlayerController, "GetLocalDBDPlayerController" }, // 2811153974
		{ &Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacter, "GetLocallyControlledCharacter" }, // 2913934094
		{ &Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledCharacterRole, "GetLocallyControlledCharacterRole" }, // 3332680782
		{ &Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledKiller, "GetLocallyControlledKiller" }, // 3039332205
		{ &Z_Construct_UFunction_UDBDUtilities_GetLocallyControlledSurvivor, "GetLocallyControlledSurvivor" }, // 2317306506
		{ &Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacter, "GetLocallyObservedCharacter" }, // 258536511
		{ &Z_Construct_UFunction_UDBDUtilities_GetLocallyObservedCharacterRole, "GetLocallyObservedCharacterRole" }, // 3208876756
		{ &Z_Construct_UFunction_UDBDUtilities_GetLogStringMaterialInfo, "GetLogStringMaterialInfo" }, // 51019673
		{ &Z_Construct_UFunction_UDBDUtilities_GetMaterialHelpersAttachedToPlayerMesh, "GetMaterialHelpersAttachedToPlayerMesh" }, // 2479735236
		{ &Z_Construct_UFunction_UDBDUtilities_GetMontageLength, "GetMontageLength" }, // 2976109692
		{ &Z_Construct_UFunction_UDBDUtilities_GetNearbyActorsOfType, "GetNearbyActorsOfType" }, // 1160988627
		{ &Z_Construct_UFunction_UDBDUtilities_GetNearbyCampers, "GetNearbyCampers" }, // 4194084689
		{ &Z_Construct_UFunction_UDBDUtilities_GetOuterMostActor, "GetOuterMostActor" }, // 340277311
		{ &Z_Construct_UFunction_UDBDUtilities_GetOwningCamper, "GetOwningCamper" }, // 3218836734
		{ &Z_Construct_UFunction_UDBDUtilities_GetOwningCharacterSkeletalMeshComponent, "GetOwningCharacterSkeletalMeshComponent" }, // 397995372
		{ &Z_Construct_UFunction_UDBDUtilities_GetOwningDBDBasePlayer, "GetOwningDBDBasePlayer" }, // 2466115579
		{ &Z_Construct_UFunction_UDBDUtilities_GetOwningSlasher, "GetOwningSlasher" }, // 2123727764
		{ &Z_Construct_UFunction_UDBDUtilities_GetPercentOfRange, "GetPercentOfRange" }, // 3804690612
		{ &Z_Construct_UFunction_UDBDUtilities_GetPlayRateForMontage, "GetPlayRateForMontage" }, // 3398359688
		{ &Z_Construct_UFunction_UDBDUtilities_GetSimilarVector, "GetSimilarVector" }, // 1990680189
		{ &Z_Construct_UFunction_UDBDUtilities_GetSlasher, "GetSlasher" }, // 1973036277
		{ &Z_Construct_UFunction_UDBDUtilities_GetSlasherTunableValue, "GetSlasherTunableValue" }, // 2597540059
		{ &Z_Construct_UFunction_UDBDUtilities_GetThreeClosestGenerators, "GetThreeClosestGenerators" }, // 3122738362
		{ &Z_Construct_UFunction_UDBDUtilities_GetTileSpawnPoints, "GetTileSpawnPoints" }, // 3410931691
		{ &Z_Construct_UFunction_UDBDUtilities_GetVelocityXYAngleDegrees, "GetVelocityXYAngleDegrees" }, // 1710572655
		{ &Z_Construct_UFunction_UDBDUtilities_GetXYVector, "GetXYVector" }, // 2798905664
		{ &Z_Construct_UFunction_UDBDUtilities_GetYawOnly, "GetYawOnly" }, // 4151986821
		{ &Z_Construct_UFunction_UDBDUtilities_HasFloorForward, "HasFloorForward" }, // 4184977634
		{ &Z_Construct_UFunction_UDBDUtilities_HasLineOfSightToTarget, "HasLineOfSightToTarget" }, // 2311832226
		{ &Z_Construct_UFunction_UDBDUtilities_HasWalkableSurfaceForward, "HasWalkableSurfaceForward" }, // 2775874079
		{ &Z_Construct_UFunction_UDBDUtilities_IsInKillerTeam, "IsInKillerTeam" }, // 1471920115
		{ &Z_Construct_UFunction_UDBDUtilities_IsInSurvivorTeam, "IsInSurvivorTeam" }, // 3727958003
		{ &Z_Construct_UFunction_UDBDUtilities_IsInTutorialLevel, "IsInTutorialLevel" }, // 1622559039
		{ &Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingAKiller, "IsLocallyObservingAKiller" }, // 521605482
		{ &Z_Construct_UFunction_UDBDUtilities_IsLocallyObservingASurvivor, "IsLocallyObservingASurvivor" }, // 1851488366
		{ &Z_Construct_UFunction_UDBDUtilities_IsNonViolent, "IsNonViolent" }, // 338919982
		{ &Z_Construct_UFunction_UDBDUtilities_IsReplaceDisconnectedPlayersWithBotsActive, "IsReplaceDisconnectedPlayersWithBotsActive" }, // 4086900759
		{ &Z_Construct_UFunction_UDBDUtilities_IsServer, "IsServer" }, // 2894678786
		{ &Z_Construct_UFunction_UDBDUtilities_LogMeshMaterialInfo, "LogMeshMaterialInfo" }, // 3634426613
		{ &Z_Construct_UFunction_UDBDUtilities_LogString, "LogString" }, // 2570506186
		{ &Z_Construct_UFunction_UDBDUtilities_NormalizeXY, "NormalizeXY" }, // 2087720258
		{ &Z_Construct_UFunction_UDBDUtilities_PointerToInt, "PointerToInt" }, // 2347706543
		{ &Z_Construct_UFunction_UDBDUtilities_PrintStringEmbiggened, "PrintStringEmbiggened" }, // 4201816934
		{ &Z_Construct_UFunction_UDBDUtilities_ResolveCharacterIdFromPlayerState, "ResolveCharacterIdFromPlayerState" }, // 3007664824
		{ &Z_Construct_UFunction_UDBDUtilities_SetComponentCastHiddenShadow, "SetComponentCastHiddenShadow" }, // 2756277711
		{ &Z_Construct_UFunction_UDBDUtilities_SphereTraceAgainstActor, "SphereTraceAgainstActor" }, // 2643322129
		{ &Z_Construct_UFunction_UDBDUtilities_SphereTraceSingle, "SphereTraceSingle" }, // 3765261783
		{ &Z_Construct_UFunction_UDBDUtilities_ToAngle_negative180to180, "ToAngle_negative180to180" }, // 1918907356
		{ &Z_Construct_UFunction_UDBDUtilities_WithinRange, "WithinRange" }, // 315671106
		{ &Z_Construct_UFunction_UDBDUtilities_WithinRangeExclusive, "WithinRangeExclusive" }, // 3352533626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDUtilities_Statics::ClassParams = {
		&UDBDUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDUtilities, 3612235358);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDUtilities>()
	{
		return UDBDUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDUtilities(Z_Construct_UClass_UDBDUtilities, &UDBDUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
