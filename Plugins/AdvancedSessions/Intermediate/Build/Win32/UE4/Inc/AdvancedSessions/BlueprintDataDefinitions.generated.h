// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSESSIONS_BlueprintDataDefinitions_generated_h
#error "BlueprintDataDefinitions.generated.h already included, missing '#pragma once' in BlueprintDataDefinitions.h"
#endif
#define ADVANCEDSESSIONS_BlueprintDataDefinitions_generated_h

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_310_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSessionsSearchSetting_Statics; \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<struct FSessionsSearchSetting>();

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_299_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics; \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<struct FSessionPropertyKeyPair>();

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_263_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPFriendInfo_Statics; \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<struct FBPFriendInfo>();

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics; \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<struct FBPFriendPresenceInfo>();

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_227_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics; \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FBPOnlineUser Super;


template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<struct FBPOnlineRecentPlayer>();

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_213_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPOnlineUser_Statics; \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<struct FBPOnlineUser>();

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPUniqueNetId_Statics; \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<struct FBPUniqueNetId>();

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPUserOnlineAccount_Statics; \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<struct FBPUserOnlineAccount>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h


#define FOREACH_ENUM_EONLINECOMPARISONOPREDUX(op) \
	op(EOnlineComparisonOpRedux::Equals) \
	op(EOnlineComparisonOpRedux::NotEquals) \
	op(EOnlineComparisonOpRedux::GreaterThan) \
	op(EOnlineComparisonOpRedux::GreaterThanEquals) \
	op(EOnlineComparisonOpRedux::LessThan) \
	op(EOnlineComparisonOpRedux::LessThanEquals) 

enum class EOnlineComparisonOpRedux : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EOnlineComparisonOpRedux>();

#define FOREACH_ENUM_EBPONLINESESSIONSTATE(op) \
	op(EBPOnlineSessionState::NoSession) \
	op(EBPOnlineSessionState::Creating) \
	op(EBPOnlineSessionState::Pending) \
	op(EBPOnlineSessionState::Starting) \
	op(EBPOnlineSessionState::InProgress) \
	op(EBPOnlineSessionState::Ending) \
	op(EBPOnlineSessionState::Ended) \
	op(EBPOnlineSessionState::Destroying) 

enum class EBPOnlineSessionState : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPOnlineSessionState>();

#define FOREACH_ENUM_EBPONLINEPRESENCESTATE(op) \
	op(EBPOnlinePresenceState::Online) \
	op(EBPOnlinePresenceState::Offline) \
	op(EBPOnlinePresenceState::Away) \
	op(EBPOnlinePresenceState::ExtendedAway) \
	op(EBPOnlinePresenceState::DoNotDisturb) \
	op(EBPOnlinePresenceState::Chat) 

enum class EBPOnlinePresenceState : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPOnlinePresenceState>();

#define FOREACH_ENUM_EBPSERVERPRESENCESEARCHTYPE(op) \
	op(EBPServerPresenceSearchType::AllServers) \
	op(EBPServerPresenceSearchType::ClientServersOnly) \
	op(EBPServerPresenceSearchType::DedicatedServersOnly) 

enum class EBPServerPresenceSearchType : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPServerPresenceSearchType>();

#define FOREACH_ENUM_EBLUEPRINTASYNCRESULTSWITCH(op) \
	op(EBlueprintAsyncResultSwitch::OnSuccess) \
	op(EBlueprintAsyncResultSwitch::AsyncLoading) \
	op(EBlueprintAsyncResultSwitch::OnFailure) 

enum class EBlueprintAsyncResultSwitch : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBlueprintAsyncResultSwitch>();

#define FOREACH_ENUM_EBLUEPRINTRESULTSWITCH(op) \
	op(EBlueprintResultSwitch::OnSuccess) \
	op(EBlueprintResultSwitch::OnFailure) 

enum class EBlueprintResultSwitch : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBlueprintResultSwitch>();

#define FOREACH_ENUM_ESESSIONSETTINGSEARCHRESULT(op) \
	op(ESessionSettingSearchResult::Found) \
	op(ESessionSettingSearchResult::NotFound) \
	op(ESessionSettingSearchResult::WrongType) 

enum class ESessionSettingSearchResult : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<ESessionSettingSearchResult>();

#define FOREACH_ENUM_EBPLOGINSTATUS(op) \
	op(EBPLoginStatus::NotLoggedIn) \
	op(EBPLoginStatus::UsingLocalProfile) \
	op(EBPLoginStatus::LoggedIn) 

enum class EBPLoginStatus : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPLoginStatus>();

#define FOREACH_ENUM_EBPUSERPRIVILEGES(op) \
	op(EBPUserPrivileges::CanPlay) \
	op(EBPUserPrivileges::CanPlayOnline) \
	op(EBPUserPrivileges::CanCommunicateOnline) \
	op(EBPUserPrivileges::CanUseUserGeneratedContent) 

enum class EBPUserPrivileges : uint8;
template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPUserPrivileges>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
