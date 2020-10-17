// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AdvancedIdentityLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedIdentityLibrary() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedIdentityLibrary_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedIdentityLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUserOnlineAccount();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetUserAccountAttribute)
	{
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetUserAccountAttribute(Z_Param_Out_AccountInfo,Z_Param_AttributeName,Z_Param_Out_AttributeValue,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetUserAccountDisplayName)
	{
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetUserAccountDisplayName(Z_Param_Out_AccountInfo,Z_Param_Out_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetUserAccountRealName)
	{
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_UserName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetUserAccountRealName(Z_Param_Out_AccountInfo,Z_Param_Out_UserName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetUserID)
	{
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetUserID(Z_Param_Out_AccountInfo,Z_Param_Out_UniqueNetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execSetUserAccountAttribute)
	{
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewAttributeValue);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::SetUserAccountAttribute(Z_Param_Out_AccountInfo,Z_Param_AttributeName,Z_Param_NewAttributeValue,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetUserAccountAuthAttribute)
	{
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AuthAttribute);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetUserAccountAuthAttribute(Z_Param_Out_AccountInfo,Z_Param_AttributeName,Z_Param_Out_AuthAttribute,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetUserAccountAccessToken)
	{
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AccessToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetUserAccountAccessToken(Z_Param_Out_AccountInfo,Z_Param_Out_AccessToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetAllUserAccounts)
	{
		P_GET_TARRAY_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfos);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetAllUserAccounts(Z_Param_Out_AccountInfos,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetUserAccount)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_GET_STRUCT_REF(FBPUserOnlineAccount,Z_Param_Out_AccountInfo);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetUserAccount(Z_Param_Out_UniqueNetId,Z_Param_Out_AccountInfo,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetPlayerNickname)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PlayerNickname);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetPlayerNickname(Z_Param_Out_UniqueNetID,Z_Param_Out_PlayerNickname);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetPlayerAuthToken)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AuthToken);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetPlayerAuthToken(Z_Param_PlayerController,Z_Param_Out_AuthToken,(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedIdentityLibrary::execGetLoginStatus)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetID);
		P_GET_ENUM_REF(EBPLoginStatus,Z_Param_Out_LoginStatus);
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedIdentityLibrary::GetLoginStatus(Z_Param_Out_UniqueNetID,(EBPLoginStatus&)(Z_Param_Out_LoginStatus),(EBlueprintResultSwitch&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void UAdvancedIdentityLibrary::StaticRegisterNativesUAdvancedIdentityLibrary()
	{
		UClass* Class = UAdvancedIdentityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllUserAccounts", &UAdvancedIdentityLibrary::execGetAllUserAccounts },
			{ "GetLoginStatus", &UAdvancedIdentityLibrary::execGetLoginStatus },
			{ "GetPlayerAuthToken", &UAdvancedIdentityLibrary::execGetPlayerAuthToken },
			{ "GetPlayerNickname", &UAdvancedIdentityLibrary::execGetPlayerNickname },
			{ "GetUserAccount", &UAdvancedIdentityLibrary::execGetUserAccount },
			{ "GetUserAccountAccessToken", &UAdvancedIdentityLibrary::execGetUserAccountAccessToken },
			{ "GetUserAccountAttribute", &UAdvancedIdentityLibrary::execGetUserAccountAttribute },
			{ "GetUserAccountAuthAttribute", &UAdvancedIdentityLibrary::execGetUserAccountAuthAttribute },
			{ "GetUserAccountDisplayName", &UAdvancedIdentityLibrary::execGetUserAccountDisplayName },
			{ "GetUserAccountRealName", &UAdvancedIdentityLibrary::execGetUserAccountRealName },
			{ "GetUserID", &UAdvancedIdentityLibrary::execGetUserID },
			{ "SetUserAccountAttribute", &UAdvancedIdentityLibrary::execSetUserAccountAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics
	{
		struct AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms
		{
			TArray<FBPUserOnlineAccount> AccountInfos;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AccountInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfos_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::NewProp_AccountInfos = { "AccountInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms, AccountInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::NewProp_AccountInfos_Inner = { "AccountInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::NewProp_AccountInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::NewProp_AccountInfos_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity|UserAccount" },
		{ "Comment", "// Get all known users accounts\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get all known users accounts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetAllUserAccounts", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics
	{
		struct AdvancedIdentityLibrary_eventGetLoginStatus_Parms
		{
			FBPUniqueNetId UniqueNetID;
			EBPLoginStatus LoginStatus;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoginStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoginStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetLoginStatus_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_LoginStatus = { "LoginStatus", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetLoginStatus_Parms, LoginStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_LoginStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_UniqueNetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_UniqueNetID = { "UniqueNetID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetLoginStatus_Parms, UniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_UniqueNetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_UniqueNetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_LoginStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_LoginStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::NewProp_UniqueNetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity" },
		{ "Comment", "// Get the login status of a local player\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get the login status of a local player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetLoginStatus", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetLoginStatus_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics
	{
		struct AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms
		{
			APlayerController* PlayerController;
			FString AuthToken;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::NewProp_AuthToken = { "AuthToken", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms, AuthToken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::NewProp_AuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity" },
		{ "Comment", "// Get the auth token for a local player\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get the auth token for a local player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetPlayerAuthToken", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics
	{
		struct AdvancedIdentityLibrary_eventGetPlayerNickname_Parms
		{
			FBPUniqueNetId UniqueNetID;
			FString PlayerNickname;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerNickname;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::NewProp_PlayerNickname = { "PlayerNickname", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetPlayerNickname_Parms, PlayerNickname), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::NewProp_UniqueNetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::NewProp_UniqueNetID = { "UniqueNetID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetPlayerNickname_Parms, UniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::NewProp_UniqueNetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::NewProp_UniqueNetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::NewProp_PlayerNickname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::NewProp_UniqueNetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity" },
		{ "Comment", "// Get a players nickname\n" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get a players nickname" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetPlayerNickname", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetPlayerNickname_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics
	{
		struct AdvancedIdentityLibrary_eventGetUserAccount_Parms
		{
			FBPUniqueNetId UniqueNetId;
			FBPUserOnlineAccount AccountInfo;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccount_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_AccountInfo = { "AccountInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccount_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccount_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_UniqueNetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_AccountInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::NewProp_UniqueNetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity|UserAccount" },
		{ "Comment", "// Get a users account\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get a users account" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetUserAccount", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetUserAccount_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AccessToken;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms, AccessToken), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::NewProp_AccountInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::NewProp_AccountInfo = { "AccountInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::NewProp_AccountInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::NewProp_AccountInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::NewProp_AccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::NewProp_AccountInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity|UserAccount" },
		{ "Comment", "// Get a user account access token\n" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get a user account access token" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetUserAccountAccessToken", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AttributeName;
			FString AttributeValue;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AccountInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AccountInfo = { "AccountInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AccountInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AccountInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AttributeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::NewProp_AccountInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity|UserAccount" },
		{ "Comment", "// Get user account attribute (depends on subsystem)\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get user account attribute (depends on subsystem)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetUserAccountAttribute", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AttributeName;
			FString AuthAttribute;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AuthAttribute = { "AuthAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms, AuthAttribute), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AccountInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AccountInfo = { "AccountInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AccountInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AccountInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AuthAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::NewProp_AccountInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity|UserAccount" },
		{ "Comment", "// Get a user account Auth attribute (depends on subsystem)\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get a user account Auth attribute (depends on subsystem)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetUserAccountAuthAttribute", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString DisplayName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::NewProp_AccountInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::NewProp_AccountInfo = { "AccountInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::NewProp_AccountInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::NewProp_AccountInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::NewProp_AccountInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity|UserAccount" },
		{ "Comment", "// Get user account display name if possible\n" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get user account display name if possible" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetUserAccountDisplayName", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString UserName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms, UserName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::NewProp_AccountInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::NewProp_AccountInfo = { "AccountInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::NewProp_AccountInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::NewProp_AccountInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::NewProp_AccountInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity|UserAccount" },
		{ "Comment", "// Get user accounts real name if possible\n" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get user accounts real name if possible" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetUserAccountRealName", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics
	{
		struct AdvancedIdentityLibrary_eventGetUserID_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FBPUniqueNetId UniqueNetID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::NewProp_UniqueNetID = { "UniqueNetID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserID_Parms, UniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::NewProp_AccountInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::NewProp_AccountInfo = { "AccountInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserID_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::NewProp_AccountInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::NewProp_AccountInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::NewProp_UniqueNetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::NewProp_AccountInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity|UserAccount" },
		{ "Comment", "// Get user ID\n" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Get user ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "GetUserID", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventGetUserID_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics
	{
		struct AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AttributeName;
			FString NewAttributeValue;
			EBlueprintResultSwitch Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAttributeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewAttributeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_NewAttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_NewAttributeValue = { "NewAttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms, NewAttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_NewAttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_NewAttributeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_AccountInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_AccountInfo = { "AccountInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_AccountInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_AccountInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_NewAttributeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::NewProp_AccountInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|AdvancedIdentity|UserAccount" },
		{ "Comment", "// Set a user account attribute (depends on subsystem)\n" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
		{ "ToolTip", "Set a user account attribute (depends on subsystem)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, nullptr, "SetUserAccountAttribute", nullptr, nullptr, sizeof(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms), Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedIdentityLibrary_NoRegister()
	{
		return UAdvancedIdentityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedIdentityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedIdentityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedIdentityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts, "GetAllUserAccounts" }, // 3561747996
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus, "GetLoginStatus" }, // 558039529
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken, "GetPlayerAuthToken" }, // 1750346760
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname, "GetPlayerNickname" }, // 2526541436
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount, "GetUserAccount" }, // 1489901271
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken, "GetUserAccountAccessToken" }, // 2659502528
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute, "GetUserAccountAttribute" }, // 728078937
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute, "GetUserAccountAuthAttribute" }, // 97304725
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName, "GetUserAccountDisplayName" }, // 4227529605
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName, "GetUserAccountRealName" }, // 934310283
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID, "GetUserID" }, // 4181369630
		{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute, "SetUserAccountAttribute" }, // 3938539720
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedIdentityLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedIdentityLibrary.h" },
		{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedIdentityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedIdentityLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedIdentityLibrary_Statics::ClassParams = {
		&UAdvancedIdentityLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedIdentityLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedIdentityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedIdentityLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedIdentityLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedIdentityLibrary, 3115779332);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAdvancedIdentityLibrary>()
	{
		return UAdvancedIdentityLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedIdentityLibrary(Z_Construct_UClass_UAdvancedIdentityLibrary, &UAdvancedIdentityLibrary::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedIdentityLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedIdentityLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
