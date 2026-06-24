// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoboot_init() {}
	PHOTOBOOT_API UFunction* Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature();
	PHOTOBOOT_API UFunction* Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraOpened__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Photoboot;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Photoboot()
	{
		if (!Z_Registration_Info_UPackage__Script_Photoboot.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraOpened__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Photoboot",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2B2F0D31,
				0x234CF047,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Photoboot.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Photoboot.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Photoboot(Z_Construct_UPackage__Script_Photoboot, TEXT("/Script/Photoboot"), Z_Registration_Info_UPackage__Script_Photoboot, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2B2F0D31, 0x234CF047));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
