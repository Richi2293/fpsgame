// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedIdentityLibrary.h"
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
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUserOnlineAccount();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute();
// End Cross Module References
	void UAdvancedIdentityLibrary::StaticRegisterNativesUAdvancedIdentityLibrary()
	{
		UClass* Class = UAdvancedIdentityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllUserAccounts", (Native)&UAdvancedIdentityLibrary::execGetAllUserAccounts },
			{ "GetLoginStatus", (Native)&UAdvancedIdentityLibrary::execGetLoginStatus },
			{ "GetPlayerAuthToken", (Native)&UAdvancedIdentityLibrary::execGetPlayerAuthToken },
			{ "GetPlayerNickname", (Native)&UAdvancedIdentityLibrary::execGetPlayerNickname },
			{ "GetUserAccount", (Native)&UAdvancedIdentityLibrary::execGetUserAccount },
			{ "GetUserAccountAccessToken", (Native)&UAdvancedIdentityLibrary::execGetUserAccountAccessToken },
			{ "GetUserAccountAttribute", (Native)&UAdvancedIdentityLibrary::execGetUserAccountAttribute },
			{ "GetUserAccountAuthAttribute", (Native)&UAdvancedIdentityLibrary::execGetUserAccountAuthAttribute },
			{ "GetUserAccountDisplayName", (Native)&UAdvancedIdentityLibrary::execGetUserAccountDisplayName },
			{ "GetUserAccountRealName", (Native)&UAdvancedIdentityLibrary::execGetUserAccountRealName },
			{ "GetUserID", (Native)&UAdvancedIdentityLibrary::execGetUserID },
			{ "SetUserAccountAttribute", (Native)&UAdvancedIdentityLibrary::execSetUserAccountAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts()
	{
		struct AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms
		{
			TArray<FBPUserOnlineAccount> AccountInfos;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AccountInfos = { UE4CodeGen_Private::EPropertyClass::Array, "AccountInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms, AccountInfos), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AccountInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountInfos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountInfos_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity|UserAccount" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get all known users accounts" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetAllUserAccounts", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedIdentityLibrary_eventGetAllUserAccounts_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus()
	{
		struct AdvancedIdentityLibrary_eventGetLoginStatus_Parms
		{
			FBPUniqueNetId UniqueNetID;
			EBPLoginStatus LoginStatus;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetLoginStatus_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoginStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "LoginStatus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetLoginStatus_Parms, LoginStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoginStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetID_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetID = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetLoginStatus_Parms, UniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_UniqueNetID_MetaData, ARRAY_COUNT(NewProp_UniqueNetID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoginStatus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoginStatus_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get the login status of a local player" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetLoginStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedIdentityLibrary_eventGetLoginStatus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken()
	{
		struct AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms
		{
			APlayerController* PlayerController;
			FString AuthToken;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthToken = { UE4CodeGen_Private::EPropertyClass::Str, "AuthToken", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms, AuthToken), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuthToken,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get the auth token for a local player" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetPlayerAuthToken", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedIdentityLibrary_eventGetPlayerAuthToken_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname()
	{
		struct AdvancedIdentityLibrary_eventGetPlayerNickname_Parms
		{
			FBPUniqueNetId UniqueNetID;
			FString PlayerNickname;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerNickname = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerNickname", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetPlayerNickname_Parms, PlayerNickname), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetID_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetID = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetPlayerNickname_Parms, UniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_UniqueNetID_MetaData, ARRAY_COUNT(NewProp_UniqueNetID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerNickname,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get a players nickname" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetPlayerNickname", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AdvancedIdentityLibrary_eventGetPlayerNickname_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccount_Parms
		{
			FBPUniqueNetId UniqueNetId;
			FBPUserOnlineAccount AccountInfo;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccount_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "AccountInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccount_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccount_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_UniqueNetId_MetaData, ARRAY_COUNT(NewProp_UniqueNetId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity|UserAccount" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get a users account" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetUserAccount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedIdentityLibrary_eventGetUserAccount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AccessToken;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken = { UE4CodeGen_Private::EPropertyClass::Str, "AccessToken", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms, AccessToken), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "AccountInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(NewProp_AccountInfo_MetaData, ARRAY_COUNT(NewProp_AccountInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccessToken,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity|UserAccount" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get a user account access token" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetUserAccountAccessToken", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AdvancedIdentityLibrary_eventGetUserAccountAccessToken_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AttributeName;
			FString AttributeValue;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeValue = { UE4CodeGen_Private::EPropertyClass::Str, "AttributeValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName = { UE4CodeGen_Private::EPropertyClass::Str, "AttributeName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms, AttributeName), METADATA_PARAMS(NewProp_AttributeName_MetaData, ARRAY_COUNT(NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "AccountInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(NewProp_AccountInfo_MetaData, ARRAY_COUNT(NewProp_AccountInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttributeValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttributeName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity|UserAccount" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get user account attribute (depends on subsystem)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetUserAccountAttribute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedIdentityLibrary_eventGetUserAccountAttribute_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AttributeName;
			FString AuthAttribute;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthAttribute = { UE4CodeGen_Private::EPropertyClass::Str, "AuthAttribute", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms, AuthAttribute), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName = { UE4CodeGen_Private::EPropertyClass::Str, "AttributeName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms, AttributeName), METADATA_PARAMS(NewProp_AttributeName_MetaData, ARRAY_COUNT(NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "AccountInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(NewProp_AccountInfo_MetaData, ARRAY_COUNT(NewProp_AccountInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuthAttribute,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttributeName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity|UserAccount" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get a user account Auth attribute (depends on subsystem)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetUserAccountAuthAttribute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedIdentityLibrary_eventGetUserAccountAuthAttribute_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString DisplayName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "AccountInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(NewProp_AccountInfo_MetaData, ARRAY_COUNT(NewProp_AccountInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity|UserAccount" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get user account display name if possible" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetUserAccountDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AdvancedIdentityLibrary_eventGetUserAccountDisplayName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName()
	{
		struct AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString UserName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName = { UE4CodeGen_Private::EPropertyClass::Str, "UserName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms, UserName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "AccountInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(NewProp_AccountInfo_MetaData, ARRAY_COUNT(NewProp_AccountInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity|UserAccount" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get user accounts real name if possible" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetUserAccountRealName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AdvancedIdentityLibrary_eventGetUserAccountRealName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID()
	{
		struct AdvancedIdentityLibrary_eventGetUserID_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FBPUniqueNetId UniqueNetID;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetID = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserID_Parms, UniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "AccountInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventGetUserID_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(NewProp_AccountInfo_MetaData, ARRAY_COUNT(NewProp_AccountInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity|UserAccount" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Get user ID" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "GetUserID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(AdvancedIdentityLibrary_eventGetUserID_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute()
	{
		struct AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms
		{
			FBPUserOnlineAccount AccountInfo;
			FString AttributeName;
			FString NewAttributeValue;
			EBlueprintResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAttributeValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewAttributeValue = { UE4CodeGen_Private::EPropertyClass::Str, "NewAttributeValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms, NewAttributeValue), METADATA_PARAMS(NewProp_NewAttributeValue_MetaData, ARRAY_COUNT(NewProp_NewAttributeValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName = { UE4CodeGen_Private::EPropertyClass::Str, "AttributeName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms, AttributeName), METADATA_PARAMS(NewProp_AttributeName_MetaData, ARRAY_COUNT(NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccountInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "AccountInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms, AccountInfo), Z_Construct_UScriptStruct_FBPUserOnlineAccount, METADATA_PARAMS(NewProp_AccountInfo_MetaData, ARRAY_COUNT(NewProp_AccountInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAttributeValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttributeName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccountInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedIdentity|UserAccount" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
				{ "ToolTip", "Set a user account attribute (depends on subsystem)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedIdentityLibrary, "SetUserAccountAttribute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedIdentityLibrary_eventSetUserAccountAttribute_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedIdentityLibrary_NoRegister()
	{
		return UAdvancedIdentityLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedIdentityLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetAllUserAccounts, "GetAllUserAccounts" }, // 2672061930
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetLoginStatus, "GetLoginStatus" }, // 2331567229
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerAuthToken, "GetPlayerAuthToken" }, // 2067160709
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetPlayerNickname, "GetPlayerNickname" }, // 1561420598
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccount, "GetUserAccount" }, // 534740581
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAccessToken, "GetUserAccountAccessToken" }, // 467150208
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAttribute, "GetUserAccountAttribute" }, // 1266890727
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountAuthAttribute, "GetUserAccountAuthAttribute" }, // 643845541
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountDisplayName, "GetUserAccountDisplayName" }, // 1045706951
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserAccountRealName, "GetUserAccountRealName" }, // 3532435875
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_GetUserID, "GetUserID" }, // 3333417531
				{ &Z_Construct_UFunction_UAdvancedIdentityLibrary_SetUserAccountAttribute, "SetUserAccountAttribute" }, // 4016421559
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AdvancedIdentityLibrary.h" },
				{ "ModuleRelativePath", "Classes/AdvancedIdentityLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAdvancedIdentityLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAdvancedIdentityLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedIdentityLibrary, 4277450815);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedIdentityLibrary(Z_Construct_UClass_UAdvancedIdentityLibrary, &UAdvancedIdentityLibrary::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedIdentityLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedIdentityLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
