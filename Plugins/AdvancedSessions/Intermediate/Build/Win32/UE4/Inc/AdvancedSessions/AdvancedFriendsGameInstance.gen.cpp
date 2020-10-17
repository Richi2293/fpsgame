// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AdvancedFriendsGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedFriendsGameInstance() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
// End Cross Module References
	static FName NAME_UAdvancedFriendsGameInstance_OnPlayerLoginChanged = FName(TEXT("OnPlayerLoginChanged"));
	void UAdvancedFriendsGameInstance::OnPlayerLoginChanged(int32 PlayerNum)
	{
		AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms Parms;
		Parms.PlayerNum=PlayerNum;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnPlayerLoginChanged),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged = FName(TEXT("OnPlayerLoginStatusChanged"));
	void UAdvancedFriendsGameInstance::OnPlayerLoginStatusChanged(int32 PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId NewPlayerUniqueNetID)
	{
		AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms Parms;
		Parms.PlayerNum=PlayerNum;
		Parms.PreviousStatus=PreviousStatus;
		Parms.NewStatus=NewStatus;
		Parms.NewPlayerUniqueNetID=NewPlayerUniqueNetID;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged = FName(TEXT("OnPlayerTalkingStateChanged"));
	void UAdvancedFriendsGameInstance::OnPlayerTalkingStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking)
	{
		AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms Parms;
		Parms.PlayerId=PlayerId;
		Parms.bIsTalking=bIsTalking ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnSessionInviteAccepted = FName(TEXT("OnSessionInviteAccepted"));
	void UAdvancedFriendsGameInstance::OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SessionToJoin)
	{
		AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms Parms;
		Parms.LocalPlayerNum=LocalPlayerNum;
		Parms.PersonInvited=PersonInvited;
		Parms.SessionToJoin=SessionToJoin;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnSessionInviteAccepted),&Parms);
	}
	static FName NAME_UAdvancedFriendsGameInstance_OnSessionInviteReceived = FName(TEXT("OnSessionInviteReceived"));
	void UAdvancedFriendsGameInstance::OnSessionInviteReceived(int32 LocalPlayerNum, FBPUniqueNetId PersonInviting, const FString& AppId, FBlueprintSessionResult const& SessionToJoin)
	{
		AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms Parms;
		Parms.LocalPlayerNum=LocalPlayerNum;
		Parms.PersonInviting=PersonInviting;
		Parms.AppId=AppId;
		Parms.SessionToJoin=SessionToJoin;
		ProcessEvent(FindFunctionChecked(NAME_UAdvancedFriendsGameInstance_OnSessionInviteReceived),&Parms);
	}
	void UAdvancedFriendsGameInstance::StaticRegisterNativesUAdvancedFriendsGameInstance()
	{
	}
	struct Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::NewProp_PlayerNum = { "PlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms, PlayerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::NewProp_PlayerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedIdentity" },
		{ "Comment", "// Called when the designated LocalUser has changed login state\n" },
		{ "DisplayName", "OnPlayerLoginChanged" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
		{ "ToolTip", "Called when the designated LocalUser has changed login state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, nullptr, "OnPlayerLoginChanged", nullptr, nullptr, sizeof(AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPlayerUniqueNetID;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviousStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousStatus_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewPlayerUniqueNetID = { "NewPlayerUniqueNetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, NewPlayerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, NewStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus = { "PreviousStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, PreviousStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PlayerNum = { "PlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, PlayerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewPlayerUniqueNetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_NewStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PreviousStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::NewProp_PlayerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedIdentity" },
		{ "Comment", "// Called when the designated LocalUser has changed login status\n" },
		{ "DisplayName", "OnPlayerLoginStatusChanged" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
		{ "ToolTip", "Called when the designated LocalUser has changed login status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, nullptr, "OnPlayerLoginStatusChanged", nullptr, nullptr, sizeof(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics
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
	void Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_bIsTalking_SetBit(void* Obj)
	{
		((AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms*)Obj)->bIsTalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_bIsTalking = { "bIsTalking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms), &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_bIsTalking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms, PlayerId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_bIsTalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedVoice" },
		{ "Comment", "// After a voice status has changed this event is triggered if the bEnableTalkingStatusDelegate property is true\n" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
		{ "ToolTip", "After a voice status has changed this event is triggered if the bEnableTalkingStatusDelegate property is true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, nullptr, "OnPlayerTalkingStateChanged", nullptr, nullptr, sizeof(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionToJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionToJoin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersonInvited;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalPlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_SessionToJoin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_SessionToJoin = { "SessionToJoin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms, SessionToJoin), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_SessionToJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_SessionToJoin_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_PersonInvited = { "PersonInvited", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms, PersonInvited), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms, LocalPlayerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_SessionToJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_PersonInvited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::NewProp_LocalPlayerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedFriends" },
		{ "Comment", "// After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it\n// This function is currently not hooked up in any of Epics default subsystems, it is here for custom subsystems\n" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
		{ "ToolTip", "After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it\nThis function is currently not hooked up in any of Epics default subsystems, it is here for custom subsystems" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, nullptr, "OnSessionInviteAccepted", nullptr, nullptr, sizeof(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionToJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionToJoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersonInviting;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalPlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_SessionToJoin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_SessionToJoin = { "SessionToJoin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, SessionToJoin), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_SessionToJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_SessionToJoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, AppId), METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_AppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_AppId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_PersonInviting = { "PersonInviting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, PersonInviting), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, LocalPlayerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_SessionToJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_AppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_PersonInviting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::NewProp_LocalPlayerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedFriends" },
		{ "Comment", "// After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it\n" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
		{ "ToolTip", "After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, nullptr, "OnSessionInviteReceived", nullptr, nullptr, sizeof(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms), Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance_NoRegister()
	{
		return UAdvancedFriendsGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTalkingStatusDelegate_MetaData[];
#endif
		static void NewProp_bEnableTalkingStatusDelegate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTalkingStatusDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData[];
#endif
		static void NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallVoiceInterfaceEventsOnPlayerControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData[];
#endif
		static void NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallIdentityInterfaceEventsOnPlayerControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData[];
#endif
		static void NewProp_bCallFriendInterfaceEventsOnPlayerControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallFriendInterfaceEventsOnPlayerControllers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged, "OnPlayerLoginChanged" }, // 4147065069
		{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged, "OnPlayerLoginStatusChanged" }, // 319708863
		{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged, "OnPlayerTalkingStateChanged" }, // 1827862838
		{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted, "OnSessionInviteAccepted" }, // 945208289
		{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived, "OnSessionInviteReceived" }, // 1579091225
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedFriendsGameInstance.h" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate_MetaData[] = {
		{ "Category", "AdvancedVoiceInterface" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate_SetBit(void* Obj)
	{
		((UAdvancedFriendsGameInstance*)Obj)->bEnableTalkingStatusDelegate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate = { "bEnableTalkingStatusDelegate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvancedFriendsGameInstance), &Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData[] = {
		{ "Category", "AdvancedFriendsInterface" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_SetBit(void* Obj)
	{
		((UAdvancedFriendsGameInstance*)Obj)->bCallVoiceInterfaceEventsOnPlayerControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers = { "bCallVoiceInterfaceEventsOnPlayerControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvancedFriendsGameInstance), &Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData[] = {
		{ "Category", "AdvancedFriendsInterface" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_SetBit(void* Obj)
	{
		((UAdvancedFriendsGameInstance*)Obj)->bCallIdentityInterfaceEventsOnPlayerControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers = { "bCallIdentityInterfaceEventsOnPlayerControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvancedFriendsGameInstance), &Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData[] = {
		{ "Category", "AdvancedFriendsInterface" },
		{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers_SetBit(void* Obj)
	{
		((UAdvancedFriendsGameInstance*)Obj)->bCallFriendInterfaceEventsOnPlayerControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers = { "bCallFriendInterfaceEventsOnPlayerControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAdvancedFriendsGameInstance), &Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bEnableTalkingStatusDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallVoiceInterfaceEventsOnPlayerControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallIdentityInterfaceEventsOnPlayerControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::NewProp_bCallFriendInterfaceEventsOnPlayerControllers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedFriendsGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::ClassParams = {
		&UAdvancedFriendsGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedFriendsGameInstance, 2562478621);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAdvancedFriendsGameInstance>()
	{
		return UAdvancedFriendsGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedFriendsGameInstance(Z_Construct_UClass_UAdvancedFriendsGameInstance, &UAdvancedFriendsGameInstance::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedFriendsGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFriendsGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
