// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaleformUI_init() {}
	SCALEFORMUI_API UFunction* Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnTickCommand__DelegateSignature();
	SCALEFORMUI_API UFunction* Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnFsCommand__DelegateSignature();
	SCALEFORMUI_API UFunction* Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnFocusLostCommand__DelegateSignature();
	SCALEFORMUI_API UFunction* Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnStartCommand__DelegateSignature();
	SCALEFORMUI_API UFunction* Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnCloseCommand__DelegateSignature();
	SCALEFORMUI_API UFunction* Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnFocusGainedCommand__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnTickCommand__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnFsCommand__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnFocusLostCommand__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnStartCommand__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnCloseCommand__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ScaleformUI_GFxMoviePlayerOnFocusGainedCommand__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/ScaleformUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0149C7B5,
				0x432B57ED,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
