// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedFriendsGameInstance.h"
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
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived();
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
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerNum = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms, PlayerNum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerNum,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AdvancedIdentity" },
				{ "DisplayName", "OnPlayerLoginChanged" },
				{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
				{ "ToolTip", "Called when the designated LocalUser has changed login state" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, "OnPlayerLoginChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPlayerUniqueNetID = { UE4CodeGen_Private::EPropertyClass::Struct, "NewPlayerUniqueNetID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, NewPlayerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "NewStatus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, NewStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviousStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "PreviousStatus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, PreviousStatus), Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerNum = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms, PlayerNum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayerUniqueNetID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewStatus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewStatus_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousStatus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousStatus_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerNum,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AdvancedIdentity" },
				{ "DisplayName", "OnPlayerLoginStatusChanged" },
				{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
				{ "ToolTip", "Called when the designated LocalUser has changed login status" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, "OnPlayerLoginStatusChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsTalking_SetBit = [](void* Obj){ ((AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms*)Obj)->bIsTalking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTalking = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTalking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsTalking_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId = { UE4CodeGen_Private::EPropertyClass::Struct, "PlayerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms, PlayerId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsTalking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AdvancedVoice" },
				{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
				{ "ToolTip", "After a voice status has changed this event is triggered if the bEnableTalkingStatusDelegate property is true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, "OnPlayerTalkingStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionToJoin_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionToJoin = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionToJoin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms, SessionToJoin), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(NewProp_SessionToJoin_MetaData, ARRAY_COUNT(NewProp_SessionToJoin_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersonInvited = { UE4CodeGen_Private::EPropertyClass::Struct, "PersonInvited", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms, PersonInvited), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalPlayerNum = { UE4CodeGen_Private::EPropertyClass::Int, "LocalPlayerNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms, LocalPlayerNum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionToJoin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PersonInvited,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalPlayerNum,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AdvancedFriends" },
				{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
				{ "ToolTip", "After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, "OnSessionInviteAccepted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionToJoin_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionToJoin = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionToJoin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, SessionToJoin), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(NewProp_SessionToJoin_MetaData, ARRAY_COUNT(NewProp_SessionToJoin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppId = { UE4CodeGen_Private::EPropertyClass::Str, "AppId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, AppId), METADATA_PARAMS(NewProp_AppId_MetaData, ARRAY_COUNT(NewProp_AppId_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersonInviting = { UE4CodeGen_Private::EPropertyClass::Struct, "PersonInviting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, PersonInviting), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalPlayerNum = { UE4CodeGen_Private::EPropertyClass::Int, "LocalPlayerNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms, LocalPlayerNum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionToJoin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AppId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PersonInviting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalPlayerNum,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AdvancedFriends" },
				{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
				{ "ToolTip", "After a session invite has been accepted by the local player this event is triggered, call JoinSession on the session result to join it" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedFriendsGameInstance, "OnSessionInviteReceived", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance_NoRegister()
	{
		return UAdvancedFriendsGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginChanged, "OnPlayerLoginChanged" }, // 4240003863
				{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged, "OnPlayerLoginStatusChanged" }, // 1231472297
				{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged, "OnPlayerTalkingStateChanged" }, // 4238800866
				{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteAccepted, "OnSessionInviteAccepted" }, // 3027508456
				{ &Z_Construct_UFunction_UAdvancedFriendsGameInstance_OnSessionInviteReceived, "OnSessionInviteReceived" }, // 699891834
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AdvancedFriendsGameInstance.h" },
				{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTalkingStatusDelegate_MetaData[] = {
				{ "Category", "AdvancedVoiceInterface" },
				{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
			};
#endif
			auto NewProp_bEnableTalkingStatusDelegate_SetBit = [](void* Obj){ ((UAdvancedFriendsGameInstance*)Obj)->bEnableTalkingStatusDelegate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTalkingStatusDelegate = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTalkingStatusDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedFriendsGameInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableTalkingStatusDelegate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableTalkingStatusDelegate_MetaData, ARRAY_COUNT(NewProp_bEnableTalkingStatusDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData[] = {
				{ "Category", "AdvancedFriendsInterface" },
				{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
			};
#endif
			auto NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_SetBit = [](void* Obj){ ((UAdvancedFriendsGameInstance*)Obj)->bCallVoiceInterfaceEventsOnPlayerControllers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallVoiceInterfaceEventsOnPlayerControllers = { UE4CodeGen_Private::EPropertyClass::Bool, "bCallVoiceInterfaceEventsOnPlayerControllers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedFriendsGameInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData, ARRAY_COUNT(NewProp_bCallVoiceInterfaceEventsOnPlayerControllers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData[] = {
				{ "Category", "AdvancedFriendsInterface" },
				{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
			};
#endif
			auto NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_SetBit = [](void* Obj){ ((UAdvancedFriendsGameInstance*)Obj)->bCallIdentityInterfaceEventsOnPlayerControllers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallIdentityInterfaceEventsOnPlayerControllers = { UE4CodeGen_Private::EPropertyClass::Bool, "bCallIdentityInterfaceEventsOnPlayerControllers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedFriendsGameInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData, ARRAY_COUNT(NewProp_bCallIdentityInterfaceEventsOnPlayerControllers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData[] = {
				{ "Category", "AdvancedFriendsInterface" },
				{ "ModuleRelativePath", "Classes/AdvancedFriendsGameInstance.h" },
			};
#endif
			auto NewProp_bCallFriendInterfaceEventsOnPlayerControllers_SetBit = [](void* Obj){ ((UAdvancedFriendsGameInstance*)Obj)->bCallFriendInterfaceEventsOnPlayerControllers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallFriendInterfaceEventsOnPlayerControllers = { UE4CodeGen_Private::EPropertyClass::Bool, "bCallFriendInterfaceEventsOnPlayerControllers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedFriendsGameInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCallFriendInterfaceEventsOnPlayerControllers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData, ARRAY_COUNT(NewProp_bCallFriendInterfaceEventsOnPlayerControllers_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableTalkingStatusDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCallVoiceInterfaceEventsOnPlayerControllers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCallIdentityInterfaceEventsOnPlayerControllers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCallFriendInterfaceEventsOnPlayerControllers,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAdvancedFriendsGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAdvancedFriendsGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedFriendsGameInstance, 3054946862);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedFriendsGameInstance(Z_Construct_UClass_UAdvancedFriendsGameInstance, &UAdvancedFriendsGameInstance::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedFriendsGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedFriendsGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
