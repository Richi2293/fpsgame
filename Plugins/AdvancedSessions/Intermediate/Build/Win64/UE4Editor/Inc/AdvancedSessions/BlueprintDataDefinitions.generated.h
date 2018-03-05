// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSESSIONS_BlueprintDataDefinitions_generated_h
#error "BlueprintDataDefinitions.generated.h already included, missing '#pragma once' in BlueprintDataDefinitions.h"
#endif
#define ADVANCEDSESSIONS_BlueprintDataDefinitions_generated_h

#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_309_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_298_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_262_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_237_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPFriendPresenceInfo(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_226_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FBPOnlineUser Super;


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_212_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineUser(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_149_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_47_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPUserOnlineAccount(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h


#define FOREACH_ENUM_EONLINECOMPARISONOPREDUX(op) \
	op(EOnlineComparisonOpRedux::Equals) \
	op(EOnlineComparisonOpRedux::NotEquals) \
	op(EOnlineComparisonOpRedux::GreaterThan) \
	op(EOnlineComparisonOpRedux::GreaterThanEquals) \
	op(EOnlineComparisonOpRedux::LessThan) 
#define FOREACH_ENUM_EBPONLINESESSIONSTATE(op) \
	op(EBPOnlineSessionState::NoSession) \
	op(EBPOnlineSessionState::Creating) \
	op(EBPOnlineSessionState::Pending) \
	op(EBPOnlineSessionState::Starting) \
	op(EBPOnlineSessionState::InProgress) \
	op(EBPOnlineSessionState::Ending) \
	op(EBPOnlineSessionState::Ended) 
#define FOREACH_ENUM_EBPONLINEPRESENCESTATE(op) \
	op(EBPOnlinePresenceState::Online) \
	op(EBPOnlinePresenceState::Offline) \
	op(EBPOnlinePresenceState::Away) \
	op(EBPOnlinePresenceState::ExtendedAway) \
	op(EBPOnlinePresenceState::DoNotDisturb) 
#define FOREACH_ENUM_EBPSERVERPRESENCESEARCHTYPE(op) \
	op(EBPServerPresenceSearchType::AllServers) \
	op(EBPServerPresenceSearchType::ClientServersOnly) 
#define FOREACH_ENUM_EBLUEPRINTASYNCRESULTSWITCH(op) \
	op(EBlueprintAsyncResultSwitch::OnSuccess) \
	op(EBlueprintAsyncResultSwitch::AsyncLoading) 
#define FOREACH_ENUM_EBLUEPRINTRESULTSWITCH(op) \
	op(EBlueprintResultSwitch::OnSuccess) 
#define FOREACH_ENUM_ESESSIONSETTINGSEARCHRESULT(op) \
	op(ESessionSettingSearchResult::Found) \
	op(ESessionSettingSearchResult::NotFound) 
#define FOREACH_ENUM_EBPLOGINSTATUS(op) \
	op(EBPLoginStatus::NotLoggedIn) \
	op(EBPLoginStatus::UsingLocalProfile) 
#define FOREACH_ENUM_EBPUSERPRIVILEGES(op) \
	op(EBPUserPrivileges::CanPlay) \
	op(EBPUserPrivileges::CanPlayOnline) \
	op(EBPUserPrivileges::CanCommunicateOnline) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
