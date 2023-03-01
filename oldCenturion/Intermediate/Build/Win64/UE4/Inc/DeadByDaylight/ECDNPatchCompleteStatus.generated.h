// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECDNPatchCompleteStatus_generated_h
#error "ECDNPatchCompleteStatus.generated.h already included, missing '#pragma once' in ECDNPatchCompleteStatus.h"
#endif
#define DEADBYDAYLIGHT_ECDNPatchCompleteStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECDNPatchCompleteStatus_h


#define FOREACH_ENUM_ECDNPATCHCOMPLETESTATUS(op) \
	op(ECDNPatchCompleteStatus::Success) \
	op(ECDNPatchCompleteStatus::NotEnoughDiskSpace) \
	op(ECDNPatchCompleteStatus::PatchInstallDownloadError) \
	op(ECDNPatchCompleteStatus::PatchInstallFileConstructionFail) \
	op(ECDNPatchCompleteStatus::PatchInstallMoveFileToInstallFail) \
	op(ECDNPatchCompleteStatus::PatchInstallBuildVerifyFail) \
	op(ECDNPatchCompleteStatus::PatchInstallApplicationClosing) \
	op(ECDNPatchCompleteStatus::PatchInstallApplicationError) \
	op(ECDNPatchCompleteStatus::PatchInstallUserCanceled) \
	op(ECDNPatchCompleteStatus::PatchInstallPrerequisiteError) \
	op(ECDNPatchCompleteStatus::PatchInstallInitializationError) \
	op(ECDNPatchCompleteStatus::PatchInstallPathLengthExceeded) \
	op(ECDNPatchCompleteStatus::PatchInstallOutOfDiskSpace) \
	op(ECDNPatchCompleteStatus::PatchInstallUnknownError) \
	op(ECDNPatchCompleteStatus::FailureToMountContent) \
	op(ECDNPatchCompleteStatus::InstalledContentNotFound) \
	op(ECDNPatchCompleteStatus::InvalidPendingContent) \
	op(ECDNPatchCompleteStatus::CantFindContentToDownload) \
	op(ECDNPatchCompleteStatus::NoPatchForCurrentPlatformAndVersion) \
	op(ECDNPatchCompleteStatus::FailureToRetrieveContent) \
	op(ECDNPatchCompleteStatus::CancelledByUser) 

enum class ECDNPatchCompleteStatus;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECDNPatchCompleteStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
