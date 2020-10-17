// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AdvancedFriendsInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedFriendsInterface() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsInterface_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
// End Cross Module References
	void IAdvancedFriendsInterface::OnPlayerLoginChanged(int32 PlayerNum)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayerLoginChanged instead.");
	}
	void IAdvancedFriendsInterface::OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayerLoginStatusChanged instead.");
	}
	void IAdvancedFriendsInterface::OnPlayerVoiceStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPlayerVoiceStateChanged instead.");
	}
	void IAdvancedFriendsInterface::OnSessionInviteAccepted(FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SearchResult)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionInviteAccepted instead.");
	}
	void IAdvancedFriendsInterface::OnSessionInviteReceived(FBPUniqueNetId PersonInviting, FBlueprintSessionResult const& SearchResult)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSessionInviteReceived instead.");
	}
	void UAdvancedFriendsInterface::StaticRegisterNativesUAdvancedFriendsInterface()
	{
	}
	struct Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::NewProp_PlayerNum = { "PlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms, PlayerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::NewProp_PlayerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the designated LocalUser has changed login state\n" },
		{ "DisplayName", "OnPlayerLoginChanged" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
		{ "ToolTip", "Called when the designated LocalUser has changed login state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsInterface, nullptr, "OnPlayerLoginChanged", nullptr, nullptr, sizeof(AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms), Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerUniqueNetID;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviousStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PlayerUniqueNetID = { "PlayerUniqueNetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms, PlayerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms, NewStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus = { "PreviousStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms, PreviousStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PlayerUniqueNetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the designated LocalUser has changed login state\n" },
		{ "DisplayName", "OnPlayerLoginStatusChanged" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
		{ "ToolTip", "Called when the designated LocalUser has changed login state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsInterface, nullptr, "OnPlayerLoginStatusChanged", nullptr, nullptr, sizeof(AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms), Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics
	{
		static void NewProp_bIsTalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTalking;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_bIsTalking_SetBit(void* Obj)
	{
		((AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms*)Obj)->bIsTalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_bIsTalking = { "bIsTalking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms), &Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_bIsTalking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms, PlayerId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_bIsTalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect\n" },
		{ "DisplayName", "OnPlayerVoiceStateChanged" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
		{ "ToolTip", "Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsInterface, nullptr, "OnPlayerVoiceStateChanged", nullptr, nullptr, sizeof(AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms), Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersonInvited;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_SearchResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms, SearchResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_SearchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_SearchResult_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_PersonInvited = { "PersonInvited", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms, PersonInvited), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_SearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::NewProp_PersonInvited,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect\n" },
		{ "DisplayName", "OnSessionInviteAccepted" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
		{ "ToolTip", "Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsInterface, nullptr, "OnSessionInviteAccepted", nullptr, nullptr, sizeof(AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms), Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersonInviting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_SearchResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms, SearchResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_SearchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_SearchResult_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_PersonInviting = { "PersonInviting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms, PersonInviting), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_SearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::NewProp_PersonInviting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect\n" },
		{ "DisplayName", "OnSessionInviteReceived" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
		{ "ToolTip", "Called when the designated LocalUser has accepted a session invite, use JoinSession on result to connect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsInterface, nullptr, "OnSessionInviteReceived", nullptr, nullptr, sizeof(AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms), Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedFriendsInterface_NoRegister()
	{
		return UAdvancedFriendsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedFriendsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedFriendsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedFriendsInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginChanged, "OnPlayerLoginChanged" }, // 2901268686
		{ &Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged, "OnPlayerLoginStatusChanged" }, // 4221972568
		{ &Z_Construct_UFunction_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged, "OnPlayerVoiceStateChanged" }, // 3134047884
		{ &Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteAccepted, "OnSessionInviteAccepted" }, // 2727232603
		{ &Z_Construct_UFunction_UAdvancedFriendsInterface_OnSessionInviteReceived, "OnSessionInviteReceived" }, // 1489729668
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AdvancedFriendsInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedFriendsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAdvancedFriendsInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedFriendsInterface_Statics::ClassParams = {
		&UAdvancedFriendsInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedFriendsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedFriendsInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedFriendsInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedFriendsInterface, 404013743);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAdvancedFriendsInterface>()
	{
		return UAdvancedFriendsInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedFriendsInterface(Z_Construct_UClass_UAdvancedFriendsInterface, &UAdvancedFriendsInterface::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedFriendsInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFriendsInterface);
	static FName NAME_UAdvancedFriendsInterface_OnPlayerLoginChanged = FName(TEXT("OnPlayerLoginChanged"));
	void IAdvancedFriendsInterface::Execute_OnPlayerLoginChanged(UObject* O, int32 PlayerNum)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnPlayerLoginChanged);
		if (Func)
		{
			Parms.PlayerNum=PlayerNum;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged = FName(TEXT("OnPlayerLoginStatusChanged"));
	void IAdvancedFriendsInterface::Execute_OnPlayerLoginStatusChanged(UObject* O, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnPlayerLoginStatusChanged);
		if (Func)
		{
			Parms.PreviousStatus=PreviousStatus;
			Parms.NewStatus=NewStatus;
			Parms.PlayerUniqueNetID=PlayerUniqueNetID;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged = FName(TEXT("OnPlayerVoiceStateChanged"));
	void IAdvancedFriendsInterface::Execute_OnPlayerVoiceStateChanged(UObject* O, FBPUniqueNetId PlayerId, bool bIsTalking)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnPlayerVoiceStateChanged);
		if (Func)
		{
			Parms.PlayerId=PlayerId;
			Parms.bIsTalking=bIsTalking;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnSessionInviteAccepted = FName(TEXT("OnSessionInviteAccepted"));
	void IAdvancedFriendsInterface::Execute_OnSessionInviteAccepted(UObject* O, FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SearchResult)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnSessionInviteAccepted);
		if (Func)
		{
			Parms.PersonInvited=PersonInvited;
			Parms.SearchResult=SearchResult;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UAdvancedFriendsInterface_OnSessionInviteReceived = FName(TEXT("OnSessionInviteReceived"));
	void IAdvancedFriendsInterface::Execute_OnSessionInviteReceived(UObject* O, FBPUniqueNetId PersonInviting, FBlueprintSessionResult const& SearchResult)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAdvancedFriendsInterface::StaticClass()));
		AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAdvancedFriendsInterface_OnSessionInviteReceived);
		if (Func)
		{
			Parms.PersonInviting=PersonInviting;
			Parms.SearchResult=SearchResult;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
