// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhotobootCameraActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhotobootCameraActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
PHOTOBOOT_API UClass* Z_Construct_UClass_APhotobootCameraActor();
PHOTOBOOT_API UClass* Z_Construct_UClass_APhotobootCameraActor_NoRegister();
PHOTOBOOT_API UFunction* Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature();
PHOTOBOOT_API UFunction* Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraOpened__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Photoboot();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPhotobootCameraOpened ************************************************
struct Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraOpened__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Evento emesso quando la webcam viene aperta correttamente.\n */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evento emesso quando la webcam viene aperta correttamente." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraOpened__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Photoboot, nullptr, "PhotobootCameraOpened__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraOpened__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraOpened__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraOpened__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraOpened__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPhotobootCameraOpened_DelegateWrapper(const FMulticastScriptDelegate& PhotobootCameraOpened)
{
	PhotobootCameraOpened.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FPhotobootCameraOpened **************************************************

// ********** Begin Delegate FPhotobootCameraError *************************************************
struct Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics
{
	struct _Script_Photoboot_eventPhotobootCameraError_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Evento emesso quando si verifica un errore relativo alla webcam.\n */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evento emesso quando si verifica un errore relativo alla webcam." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Photoboot_eventPhotobootCameraError_Parms, ErrorMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Photoboot, nullptr, "PhotobootCameraError__DelegateSignature", Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::_Script_Photoboot_eventPhotobootCameraError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::_Script_Photoboot_eventPhotobootCameraError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPhotobootCameraError_DelegateWrapper(const FMulticastScriptDelegate& PhotobootCameraError, const FString& ErrorMessage)
{
	struct _Script_Photoboot_eventPhotobootCameraError_Parms
	{
		FString ErrorMessage;
	};
	_Script_Photoboot_eventPhotobootCameraError_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	PhotobootCameraError.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPhotobootCameraError ***************************************************

// ********** Begin Class APhotobootCameraActor Function GetCurrentDeviceName **********************
struct Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics
{
	struct PhotobootCameraActor_eventGetCurrentDeviceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Restituisce il nome del dispositivo selezionato.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restituisce il nome del dispositivo selezionato." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotobootCameraActor_eventGetCurrentDeviceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APhotobootCameraActor, nullptr, "GetCurrentDeviceName", Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::PhotobootCameraActor_eventGetCurrentDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::PhotobootCameraActor_eventGetCurrentDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APhotobootCameraActor::execGetCurrentDeviceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentDeviceName();
	P_NATIVE_END;
}
// ********** End Class APhotobootCameraActor Function GetCurrentDeviceName ************************

// ********** Begin Class APhotobootCameraActor Function HandleMediaOpened *************************
struct Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics
{
	struct PhotobootCameraActor_eventHandleMediaOpened_Parms
	{
		FString OpenedUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Callback eseguita quando il Media Player\n     * ha aperto correttamente la webcam.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback eseguita quando il Media Player\nha aperto correttamente la webcam." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OpenedUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::NewProp_OpenedUrl = { "OpenedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotobootCameraActor_eventHandleMediaOpened_Parms, OpenedUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::NewProp_OpenedUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APhotobootCameraActor, nullptr, "HandleMediaOpened", Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::PropPointers), sizeof(Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::PhotobootCameraActor_eventHandleMediaOpened_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::Function_MetaDataParams), Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::PhotobootCameraActor_eventHandleMediaOpened_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APhotobootCameraActor::execHandleMediaOpened)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_OpenedUrl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMediaOpened(Z_Param_OpenedUrl);
	P_NATIVE_END;
}
// ********** End Class APhotobootCameraActor Function HandleMediaOpened ***************************

// ********** Begin Class APhotobootCameraActor Function HandleMediaOpenFailed *********************
struct Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics
{
	struct PhotobootCameraActor_eventHandleMediaOpenFailed_Parms
	{
		FString FailedUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Callback eseguita quando il Media Player\n     * non riesce ad aprire la webcam.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback eseguita quando il Media Player\nnon riesce ad aprire la webcam." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailedUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::NewProp_FailedUrl = { "FailedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhotobootCameraActor_eventHandleMediaOpenFailed_Parms, FailedUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::NewProp_FailedUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APhotobootCameraActor, nullptr, "HandleMediaOpenFailed", Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::PhotobootCameraActor_eventHandleMediaOpenFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::PhotobootCameraActor_eventHandleMediaOpenFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APhotobootCameraActor::execHandleMediaOpenFailed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FailedUrl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMediaOpenFailed(Z_Param_FailedUrl);
	P_NATIVE_END;
}
// ********** End Class APhotobootCameraActor Function HandleMediaOpenFailed ***********************

// ********** Begin Class APhotobootCameraActor Function IsCameraPlaying ***************************
struct Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics
{
	struct PhotobootCameraActor_eventIsCameraPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Restituisce true se il Media Player\n     * sta riproducendo il flusso video.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restituisce true se il Media Player\nsta riproducendo il flusso video." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PhotobootCameraActor_eventIsCameraPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhotobootCameraActor_eventIsCameraPlaying_Parms), &Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APhotobootCameraActor, nullptr, "IsCameraPlaying", Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::PhotobootCameraActor_eventIsCameraPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::PhotobootCameraActor_eventIsCameraPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APhotobootCameraActor::execIsCameraPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCameraPlaying();
	P_NATIVE_END;
}
// ********** End Class APhotobootCameraActor Function IsCameraPlaying *****************************

// ********** Begin Class APhotobootCameraActor Function IsCameraReady *****************************
struct Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics
{
	struct PhotobootCameraActor_eventIsCameraReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Restituisce true se il Media Player\n     * \xef\xbf\xbd pronto.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restituisce true se il Media Player\n\xef\xbf\xbd pronto." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PhotobootCameraActor_eventIsCameraReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhotobootCameraActor_eventIsCameraReady_Parms), &Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APhotobootCameraActor, nullptr, "IsCameraReady", Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::PhotobootCameraActor_eventIsCameraReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::PhotobootCameraActor_eventIsCameraReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APhotobootCameraActor::execIsCameraReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCameraReady();
	P_NATIVE_END;
}
// ********** End Class APhotobootCameraActor Function IsCameraReady *******************************

// ********** Begin Class APhotobootCameraActor Function RestartCamera *****************************
struct Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics
{
	struct PhotobootCameraActor_eventRestartCamera_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Chiude e riapre la webcam.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chiude e riapre la webcam." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PhotobootCameraActor_eventRestartCamera_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhotobootCameraActor_eventRestartCamera_Parms), &Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APhotobootCameraActor, nullptr, "RestartCamera", Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::PhotobootCameraActor_eventRestartCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::PhotobootCameraActor_eventRestartCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APhotobootCameraActor_RestartCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhotobootCameraActor_RestartCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APhotobootCameraActor::execRestartCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RestartCamera();
	P_NATIVE_END;
}
// ********** End Class APhotobootCameraActor Function RestartCamera *******************************

// ********** Begin Class APhotobootCameraActor Function StartCamera *******************************
struct Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics
{
	struct PhotobootCameraActor_eventStartCamera_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Cerca i dispositivi video disponibili\n     * e tenta di aprire la webcam selezionata.\n     *\n     * @return true se la richiesta di apertura\n     *         \xef\xbf\xbd stata accettata dal Media Player.\n     *\n     * Il risultato definitivo viene comunicato tramite:\n     * - OnCameraOpened\n     * - OnCameraError\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cerca i dispositivi video disponibili\ne tenta di aprire la webcam selezionata.\n\n@return true se la richiesta di apertura\n        \xef\xbf\xbd stata accettata dal Media Player.\n\nIl risultato definitivo viene comunicato tramite:\n- OnCameraOpened\n- OnCameraError" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PhotobootCameraActor_eventStartCamera_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhotobootCameraActor_eventStartCamera_Parms), &Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APhotobootCameraActor, nullptr, "StartCamera", Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::PhotobootCameraActor_eventStartCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::PhotobootCameraActor_eventStartCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APhotobootCameraActor_StartCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhotobootCameraActor_StartCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APhotobootCameraActor::execStartCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartCamera();
	P_NATIVE_END;
}
// ********** End Class APhotobootCameraActor Function StartCamera *********************************

// ********** Begin Class APhotobootCameraActor Function StopCamera ********************************
struct Z_Construct_UFunction_APhotobootCameraActor_StopCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Chiude il flusso della webcam.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chiude il flusso della webcam." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhotobootCameraActor_StopCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APhotobootCameraActor, nullptr, "StopCamera", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APhotobootCameraActor_StopCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_APhotobootCameraActor_StopCamera_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APhotobootCameraActor_StopCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhotobootCameraActor_StopCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APhotobootCameraActor::execStopCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCamera();
	P_NATIVE_END;
}
// ********** End Class APhotobootCameraActor Function StopCamera **********************************

// ********** Begin Class APhotobootCameraActor ****************************************************
void APhotobootCameraActor::StaticRegisterNativesAPhotobootCameraActor()
{
	UClass* Class = APhotobootCameraActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentDeviceName", &APhotobootCameraActor::execGetCurrentDeviceName },
		{ "HandleMediaOpened", &APhotobootCameraActor::execHandleMediaOpened },
		{ "HandleMediaOpenFailed", &APhotobootCameraActor::execHandleMediaOpenFailed },
		{ "IsCameraPlaying", &APhotobootCameraActor::execIsCameraPlaying },
		{ "IsCameraReady", &APhotobootCameraActor::execIsCameraReady },
		{ "RestartCamera", &APhotobootCameraActor::execRestartCamera },
		{ "StartCamera", &APhotobootCameraActor::execStartCamera },
		{ "StopCamera", &APhotobootCameraActor::execStopCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APhotobootCameraActor;
UClass* APhotobootCameraActor::GetPrivateStaticClass()
{
	using TClass = APhotobootCameraActor;
	if (!Z_Registration_Info_UClass_APhotobootCameraActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PhotobootCameraActor"),
			Z_Registration_Info_UClass_APhotobootCameraActor.InnerSingleton,
			StaticRegisterNativesAPhotobootCameraActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APhotobootCameraActor.InnerSingleton;
}
UClass* Z_Construct_UClass_APhotobootCameraActor_NoRegister()
{
	return APhotobootCameraActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APhotobootCameraActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor responsabile del rilevamento, dell'apertura\n * e della chiusura della webcam.\n *\n * La webcam viene rilevata tramite Media Framework.\n * Se PreferredDeviceName \xef\xbf\xbd vuoto, viene utilizzato\n * il primo dispositivo video disponibile.\n */" },
#endif
		{ "IncludePath", "PhotobootCameraActor.h" },
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor responsabile del rilevamento, dell'apertura\ne della chiusura della webcam.\n\nLa webcam viene rilevata tramite Media Framework.\nSe PreferredDeviceName \xef\xbf\xbd vuoto, viene utilizzato\nil primo dispositivo video disponibile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Media Player utilizzato per aprire e riprodurre\n     * il flusso video della webcam.\n     *\n     * Verr\xef\xbf\xbd assegnato dall'Editor.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Media Player utilizzato per aprire e riprodurre\nil flusso video della webcam.\n\nVerr\xef\xbf\xbd assegnato dall'Editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredDeviceName_MetaData[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Parte del nome della webcam da utilizzare.\n     *\n     * Esempi:\n     * Logitech\n     * C920\n     * OBS\n     *\n     * Il confronto non distingue maiuscole e minuscole.\n     *\n     * Se il campo \xef\xbf\xbd vuoto, viene utilizzata\n     * la prima webcam disponibile.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parte del nome della webcam da utilizzare.\n\nEsempi:\nLogitech\nC920\nOBS\n\nIl confronto non distingue maiuscole e minuscole.\n\nSe il campo \xef\xbf\xbd vuoto, viene utilizzata\nla prima webcam disponibile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFallbackToFirstDevice_MetaData[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Se true e la webcam preferita non viene trovata,\n     * viene utilizzato il primo dispositivo disponibile.\n     *\n     * Se false, l'assenza della webcam preferita\n     * genera un errore.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Se true e la webcam preferita non viene trovata,\nviene utilizzato il primo dispositivo disponibile.\n\nSe false, l'assenza della webcam preferita\ngenera un errore." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpenOnBeginPlay_MetaData[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Se true, la webcam viene aperta automaticamente\n     * quando inizia il gioco.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Se true, la webcam viene aperta automaticamente\nquando inizia il gioco." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDeviceName_MetaData[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Nome del dispositivo attualmente selezionato.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nome del dispositivo attualmente selezionato." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDeviceUrl_MetaData[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * URL Media Framework del dispositivo selezionato.\n     *\n     * Viene esposto per diagnostica.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL Media Framework del dispositivo selezionato.\n\nViene esposto per diagnostica." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraOpened_MetaData[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Evento Blueprint emesso quando la webcam\n     * viene aperta correttamente.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evento Blueprint emesso quando la webcam\nviene aperta correttamente." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraError_MetaData[] = {
		{ "Category", "Photoboot|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Evento Blueprint emesso quando la webcam\n     * non pu\xef\xbf\xbd essere aperta.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PhotobootCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evento Blueprint emesso quando la webcam\nnon pu\xef\xbf\xbd essere aperta." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreferredDeviceName;
	static void NewProp_bFallbackToFirstDevice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFallbackToFirstDevice;
	static void NewProp_bOpenOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenOnBeginPlay;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentDeviceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentDeviceUrl;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraOpened;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APhotobootCameraActor_GetCurrentDeviceName, "GetCurrentDeviceName" }, // 1878086775
		{ &Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpened, "HandleMediaOpened" }, // 927765542
		{ &Z_Construct_UFunction_APhotobootCameraActor_HandleMediaOpenFailed, "HandleMediaOpenFailed" }, // 1380288135
		{ &Z_Construct_UFunction_APhotobootCameraActor_IsCameraPlaying, "IsCameraPlaying" }, // 3697064259
		{ &Z_Construct_UFunction_APhotobootCameraActor_IsCameraReady, "IsCameraReady" }, // 521165450
		{ &Z_Construct_UFunction_APhotobootCameraActor_RestartCamera, "RestartCamera" }, // 935919686
		{ &Z_Construct_UFunction_APhotobootCameraActor_StartCamera, "StartCamera" }, // 215202269
		{ &Z_Construct_UFunction_APhotobootCameraActor_StopCamera, "StopCamera" }, // 2266800105
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhotobootCameraActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhotobootCameraActor, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlayer_MetaData), NewProp_MediaPlayer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_PreferredDeviceName = { "PreferredDeviceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhotobootCameraActor, PreferredDeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredDeviceName_MetaData), NewProp_PreferredDeviceName_MetaData) };
void Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_bFallbackToFirstDevice_SetBit(void* Obj)
{
	((APhotobootCameraActor*)Obj)->bFallbackToFirstDevice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_bFallbackToFirstDevice = { "bFallbackToFirstDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APhotobootCameraActor), &Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_bFallbackToFirstDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFallbackToFirstDevice_MetaData), NewProp_bFallbackToFirstDevice_MetaData) };
void Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_bOpenOnBeginPlay_SetBit(void* Obj)
{
	((APhotobootCameraActor*)Obj)->bOpenOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_bOpenOnBeginPlay = { "bOpenOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APhotobootCameraActor), &Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_bOpenOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpenOnBeginPlay_MetaData), NewProp_bOpenOnBeginPlay_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_CurrentDeviceName = { "CurrentDeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhotobootCameraActor, CurrentDeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDeviceName_MetaData), NewProp_CurrentDeviceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_CurrentDeviceUrl = { "CurrentDeviceUrl", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhotobootCameraActor, CurrentDeviceUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDeviceUrl_MetaData), NewProp_CurrentDeviceUrl_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_OnCameraOpened = { "OnCameraOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhotobootCameraActor, OnCameraOpened), Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraOpened__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCameraOpened_MetaData), NewProp_OnCameraOpened_MetaData) }; // 2599950180
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_OnCameraError = { "OnCameraError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APhotobootCameraActor, OnCameraError), Z_Construct_UDelegateFunction_Photoboot_PhotobootCameraError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCameraError_MetaData), NewProp_OnCameraError_MetaData) }; // 2919941728
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhotobootCameraActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_MediaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_PreferredDeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_bFallbackToFirstDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_bOpenOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_CurrentDeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_CurrentDeviceUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_OnCameraOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhotobootCameraActor_Statics::NewProp_OnCameraError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APhotobootCameraActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APhotobootCameraActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Photoboot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APhotobootCameraActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APhotobootCameraActor_Statics::ClassParams = {
	&APhotobootCameraActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APhotobootCameraActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APhotobootCameraActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APhotobootCameraActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APhotobootCameraActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APhotobootCameraActor()
{
	if (!Z_Registration_Info_UClass_APhotobootCameraActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhotobootCameraActor.OuterSingleton, Z_Construct_UClass_APhotobootCameraActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APhotobootCameraActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APhotobootCameraActor);
APhotobootCameraActor::~APhotobootCameraActor() {}
// ********** End Class APhotobootCameraActor ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h__Script_Photoboot_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APhotobootCameraActor, APhotobootCameraActor::StaticClass, TEXT("APhotobootCameraActor"), &Z_Registration_Info_UClass_APhotobootCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhotobootCameraActor), 335480536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h__Script_Photoboot_81344955(TEXT("/Script/Photoboot"),
	Z_CompiledInDeferFile_FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h__Script_Photoboot_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Photoboot_Source_Photoboot_Public_PhotobootCameraActor_h__Script_Photoboot_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
