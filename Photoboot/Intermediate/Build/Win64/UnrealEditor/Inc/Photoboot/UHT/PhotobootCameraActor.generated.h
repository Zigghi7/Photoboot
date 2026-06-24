// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhotobootCameraActor.h"

#ifdef PHOTOBOOT_PhotobootCameraActor_generated_h
#error "PhotobootCameraActor.generated.h already included, missing '#pragma once' in PhotobootCameraActor.h"
#endif
#define PHOTOBOOT_PhotobootCameraActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FPhotobootCameraOpened ************************************************
#define FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h_18_DELEGATE \
PHOTOBOOT_API void FPhotobootCameraOpened_DelegateWrapper(const FMulticastScriptDelegate& PhotobootCameraOpened);


// ********** End Delegate FPhotobootCameraOpened **************************************************

// ********** Begin Delegate FPhotobootCameraError *************************************************
#define FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h_28_DELEGATE \
PHOTOBOOT_API void FPhotobootCameraError_DelegateWrapper(const FMulticastScriptDelegate& PhotobootCameraError, const FString& ErrorMessage);


// ********** End Delegate FPhotobootCameraError ***************************************************

// ********** Begin Class APhotobootCameraActor ****************************************************
#define FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleMediaOpenFailed); \
	DECLARE_FUNCTION(execHandleMediaOpened); \
	DECLARE_FUNCTION(execGetCurrentDeviceName); \
	DECLARE_FUNCTION(execIsCameraPlaying); \
	DECLARE_FUNCTION(execIsCameraReady); \
	DECLARE_FUNCTION(execRestartCamera); \
	DECLARE_FUNCTION(execStopCamera); \
	DECLARE_FUNCTION(execStartCamera);


PHOTOBOOT_API UClass* Z_Construct_UClass_APhotobootCameraActor_NoRegister();

#define FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhotobootCameraActor(); \
	friend struct Z_Construct_UClass_APhotobootCameraActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHOTOBOOT_API UClass* Z_Construct_UClass_APhotobootCameraActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APhotobootCameraActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Photoboot"), Z_Construct_UClass_APhotobootCameraActor_NoRegister) \
	DECLARE_SERIALIZER(APhotobootCameraActor)


#define FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APhotobootCameraActor(APhotobootCameraActor&&) = delete; \
	APhotobootCameraActor(const APhotobootCameraActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhotobootCameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhotobootCameraActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhotobootCameraActor) \
	NO_API virtual ~APhotobootCameraActor();


#define FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h_39_PROLOG
#define FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h_42_INCLASS_NO_PURE_DECLS \
	FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APhotobootCameraActor;

// ********** End Class APhotobootCameraActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
