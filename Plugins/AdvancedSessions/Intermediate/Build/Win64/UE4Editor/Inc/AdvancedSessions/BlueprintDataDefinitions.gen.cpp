// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BlueprintDataDefinitions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintDataDefinitions() {}
// Cross Module References
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPFriendPresenceInfo();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineUser();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUserOnlineAccount();
// End Cross Module References
	static UEnum* EOnlineComparisonOpRedux_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EOnlineComparisonOpRedux"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineComparisonOpRedux(EOnlineComparisonOpRedux_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EOnlineComparisonOpRedux"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux_CRC() { return 1964747762U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineComparisonOpRedux"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineComparisonOpRedux::Equals", (int64)EOnlineComparisonOpRedux::Equals },
				{ "EOnlineComparisonOpRedux::NotEquals", (int64)EOnlineComparisonOpRedux::NotEquals },
				{ "EOnlineComparisonOpRedux::GreaterThan", (int64)EOnlineComparisonOpRedux::GreaterThan },
				{ "EOnlineComparisonOpRedux::GreaterThanEquals", (int64)EOnlineComparisonOpRedux::GreaterThanEquals },
				{ "EOnlineComparisonOpRedux::LessThan", (int64)EOnlineComparisonOpRedux::LessThan },
				{ "EOnlineComparisonOpRedux::LessThanEquals", (int64)EOnlineComparisonOpRedux::LessThanEquals },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "ToolTip", "The types of comparison operations for a given search query // Used to compare session properties" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EOnlineComparisonOpRedux",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EOnlineComparisonOpRedux",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPOnlineSessionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPOnlineSessionState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOnlineSessionState(EBPOnlineSessionState_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPOnlineSessionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState_CRC() { return 3412205399U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOnlineSessionState"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPOnlineSessionState::NoSession", (int64)EBPOnlineSessionState::NoSession },
				{ "EBPOnlineSessionState::Creating", (int64)EBPOnlineSessionState::Creating },
				{ "EBPOnlineSessionState::Pending", (int64)EBPOnlineSessionState::Pending },
				{ "EBPOnlineSessionState::Starting", (int64)EBPOnlineSessionState::Starting },
				{ "EBPOnlineSessionState::InProgress", (int64)EBPOnlineSessionState::InProgress },
				{ "EBPOnlineSessionState::Ending", (int64)EBPOnlineSessionState::Ending },
				{ "EBPOnlineSessionState::Ended", (int64)EBPOnlineSessionState::Ended },
				{ "EBPOnlineSessionState::Destroying", (int64)EBPOnlineSessionState::Destroying },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Creating.ToolTip", "An online session is in the process of being created" },
				{ "Destroying.ToolTip", "The session is being destroyed" },
				{ "Ended.ToolTip", "The session is closed and any stats committed" },
				{ "Ending.ToolTip", "The session is still valid, but the session is no longer being played (post match lobby)" },
				{ "InProgress.ToolTip", "The current session has started. Sessions with join in progress disabled are no longer joinable" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "NoSession.ToolTip", "An online session has not been created yet" },
				{ "Pending.ToolTip", "Session has been created but the session hasn't started (pre match lobby)" },
				{ "Starting.ToolTip", "Session has been asked to start (may take time due to communication with backend)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBPOnlineSessionState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBPOnlineSessionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPOnlinePresenceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPOnlinePresenceState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOnlinePresenceState(EBPOnlinePresenceState_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPOnlinePresenceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState_CRC() { return 2106715778U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOnlinePresenceState"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPOnlinePresenceState::Online", (int64)EBPOnlinePresenceState::Online },
				{ "EBPOnlinePresenceState::Offline", (int64)EBPOnlinePresenceState::Offline },
				{ "EBPOnlinePresenceState::Away", (int64)EBPOnlinePresenceState::Away },
				{ "EBPOnlinePresenceState::ExtendedAway", (int64)EBPOnlinePresenceState::ExtendedAway },
				{ "EBPOnlinePresenceState::DoNotDisturb", (int64)EBPOnlinePresenceState::DoNotDisturb },
				{ "EBPOnlinePresenceState::Chat", (int64)EBPOnlinePresenceState::Chat },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "ToolTip", "Wanted this to be switchable in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBPOnlinePresenceState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBPOnlinePresenceState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPServerPresenceSearchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPServerPresenceSearchType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPServerPresenceSearchType(EBPServerPresenceSearchType_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPServerPresenceSearchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType_CRC() { return 4198562493U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPServerPresenceSearchType"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPServerPresenceSearchType::AllServers", (int64)EBPServerPresenceSearchType::AllServers },
				{ "EBPServerPresenceSearchType::ClientServersOnly", (int64)EBPServerPresenceSearchType::ClientServersOnly },
				{ "EBPServerPresenceSearchType::DedicatedServersOnly", (int64)EBPServerPresenceSearchType::DedicatedServersOnly },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "ToolTip", "This is to define server type searches" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBPServerPresenceSearchType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBPServerPresenceSearchType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBlueprintAsyncResultSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBlueprintAsyncResultSwitch"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintAsyncResultSwitch(EBlueprintAsyncResultSwitch_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBlueprintAsyncResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch_CRC() { return 2397391020U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintAsyncResultSwitch"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintAsyncResultSwitch::OnSuccess", (int64)EBlueprintAsyncResultSwitch::OnSuccess },
				{ "EBlueprintAsyncResultSwitch::AsyncLoading", (int64)EBlueprintAsyncResultSwitch::AsyncLoading },
				{ "EBlueprintAsyncResultSwitch::OnFailure", (int64)EBlueprintAsyncResultSwitch::OnFailure },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AsyncLoading.ToolTip", "Still loading" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "OnFailure.ToolTip", "On Failure" },
				{ "OnSuccess.ToolTip", "On Success" },
				{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBlueprintAsyncResultSwitch",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBlueprintAsyncResultSwitch",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBlueprintResultSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBlueprintResultSwitch"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintResultSwitch(EBlueprintResultSwitch_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBlueprintResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch_CRC() { return 306592549U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintResultSwitch"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintResultSwitch::OnSuccess", (int64)EBlueprintResultSwitch::OnSuccess },
				{ "EBlueprintResultSwitch::OnFailure", (int64)EBlueprintResultSwitch::OnFailure },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "OnFailure.ToolTip", "On Failure" },
				{ "OnSuccess.ToolTip", "On Success" },
				{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBlueprintResultSwitch",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBlueprintResultSwitch",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESessionSettingSearchResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("ESessionSettingSearchResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESessionSettingSearchResult(ESessionSettingSearchResult_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("ESessionSettingSearchResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult_CRC() { return 134299736U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESessionSettingSearchResult"), 0, Get_Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESessionSettingSearchResult::Found", (int64)ESessionSettingSearchResult::Found },
				{ "ESessionSettingSearchResult::NotFound", (int64)ESessionSettingSearchResult::NotFound },
				{ "ESessionSettingSearchResult::WrongType", (int64)ESessionSettingSearchResult::WrongType },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Found.ToolTip", "Found the setting" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "NotFound.ToolTip", "Did not find the setting" },
				{ "WrongType.ToolTip", "Was not the correct type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESessionSettingSearchResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESessionSettingSearchResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPLoginStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPLoginStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPLoginStatus(EBPLoginStatus_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPLoginStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus_CRC() { return 440970173U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPLoginStatus"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPLoginStatus::NotLoggedIn", (int64)EBPLoginStatus::NotLoggedIn },
				{ "EBPLoginStatus::UsingLocalProfile", (int64)EBPLoginStatus::UsingLocalProfile },
				{ "EBPLoginStatus::LoggedIn", (int64)EBPLoginStatus::LoggedIn },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LoggedIn.ToolTip", "Player has been validated by the platform specific authentication service" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "NotLoggedIn.ToolTip", "Player has not logged in or chosen a local profile" },
				{ "UsingLocalProfile.ToolTip", "Player is using a local profile but is not logged in" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBPLoginStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBPLoginStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPUserPrivileges_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPUserPrivileges"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPUserPrivileges(EBPUserPrivileges_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPUserPrivileges"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges_CRC() { return 1893847021U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPUserPrivileges"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPUserPrivileges::CanPlay", (int64)EBPUserPrivileges::CanPlay },
				{ "EBPUserPrivileges::CanPlayOnline", (int64)EBPUserPrivileges::CanPlayOnline },
				{ "EBPUserPrivileges::CanCommunicateOnline", (int64)EBPUserPrivileges::CanCommunicateOnline },
				{ "EBPUserPrivileges::CanUseUserGeneratedContent", (int64)EBPUserPrivileges::CanUseUserGeneratedContent },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CanCommunicateOnline.ToolTip", "Whether the user can use voice and text chat" },
				{ "CanPlay.ToolTip", "Whether the user can play at all, online or offline - may be age restricted" },
				{ "CanPlayOnline.ToolTip", "Whether the user can play in online modes" },
				{ "CanUseUserGeneratedContent.ToolTip", "Whether the user can use content generated by other users" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBPUserPrivileges",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBPUserPrivileges",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSessionsSearchSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionsSearchSetting, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("SessionsSearchSetting"), sizeof(FSessionsSearchSetting), Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionsSearchSetting(FSessionsSearchSetting::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("SessionsSearchSetting"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionsSearchSetting
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionsSearchSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionsSearchSetting")),new UScriptStruct::TCppStructOps<FSessionsSearchSetting>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionsSearchSetting;
	UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionsSearchSetting"), sizeof(FSessionsSearchSetting), Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "ToolTip", "Sent to the FindSessionsAdvanced to filter the end results" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionsSearchSetting>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SessionsSearchSetting",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSessionsSearchSetting),
				alignof(FSessionsSearchSetting),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_CRC() { return 2989442403U; }
class UScriptStruct* FSessionPropertyKeyPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionPropertyKeyPair, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("SessionPropertyKeyPair"), sizeof(FSessionPropertyKeyPair), Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionPropertyKeyPair(FSessionPropertyKeyPair::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("SessionPropertyKeyPair"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionPropertyKeyPair")),new UScriptStruct::TCppStructOps<FSessionPropertyKeyPair>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair;
	UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionPropertyKeyPair"), sizeof(FSessionPropertyKeyPair), Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "ToolTip", "Used to store session properties before converting to FVariantData" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionPropertyKeyPair>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SessionPropertyKeyPair",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSessionPropertyKeyPair),
				alignof(FSessionPropertyKeyPair),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_CRC() { return 1852267606U; }
class UScriptStruct* FBPFriendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPFriendInfo, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPFriendInfo"), sizeof(FBPFriendInfo), Get_Z_Construct_UScriptStruct_FBPFriendInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPFriendInfo(FBPFriendInfo::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPFriendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPFriendInfo")),new UScriptStruct::TCppStructOps<FBPFriendInfo>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPFriendInfo"), sizeof(FBPFriendInfo), Get_Z_Construct_UScriptStruct_FBPFriendInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPFriendInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceInfo_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresenceInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "PresenceInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPFriendInfo, PresenceInfo), Z_Construct_UScriptStruct_FBPFriendPresenceInfo, METADATA_PARAMS(NewProp_PresenceInfo_MetaData, ARRAY_COUNT(NewProp_PresenceInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingSameGame_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewProp_bIsPlayingSameGame_SetBit = [](void* Obj){ ((FBPFriendInfo*)Obj)->bIsPlayingSameGame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingSameGame = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPlayingSameGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBPFriendInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPlayingSameGame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsPlayingSameGame_MetaData, ARRAY_COUNT(NewProp_bIsPlayingSameGame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPFriendInfo, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_UniqueNetId_MetaData, ARRAY_COUNT(NewProp_UniqueNetId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineState_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnlineState = { UE4CodeGen_Private::EPropertyClass::Enum, "OnlineState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPFriendInfo, OnlineState), Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState, METADATA_PARAMS(NewProp_OnlineState_MetaData, ARRAY_COUNT(NewProp_OnlineState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnlineState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RealName = { UE4CodeGen_Private::EPropertyClass::Str, "RealName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPFriendInfo, RealName), METADATA_PARAMS(NewProp_RealName_MetaData, ARRAY_COUNT(NewProp_RealName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPFriendInfo, DisplayName), METADATA_PARAMS(NewProp_DisplayName_MetaData, ARRAY_COUNT(NewProp_DisplayName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PresenceInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPlayingSameGame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnlineState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnlineState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RealName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPFriendInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPFriendInfo),
				alignof(FBPFriendInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_CRC() { return 2452624622U; }
class UScriptStruct* FBPFriendPresenceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPFriendPresenceInfo, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPFriendPresenceInfo"), sizeof(FBPFriendPresenceInfo), Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPFriendPresenceInfo(FBPFriendPresenceInfo::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPFriendPresenceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPFriendPresenceInfo")),new UScriptStruct::TCppStructOps<FBPFriendPresenceInfo>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBPFriendPresenceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPFriendPresenceInfo"), sizeof(FBPFriendPresenceInfo), Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPFriendPresenceInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusString_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatusString = { UE4CodeGen_Private::EPropertyClass::Str, "StatusString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPFriendPresenceInfo, StatusString), METADATA_PARAMS(NewProp_StatusString_MetaData, ARRAY_COUNT(NewProp_StatusString_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceState_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PresenceState = { UE4CodeGen_Private::EPropertyClass::Enum, "PresenceState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPFriendPresenceInfo, PresenceState), Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState, METADATA_PARAMS(NewProp_PresenceState_MetaData, ARRAY_COUNT(NewProp_PresenceState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PresenceState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasVoiceSupport_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewProp_bHasVoiceSupport_SetBit = [](void* Obj){ ((FBPFriendPresenceInfo*)Obj)->bHasVoiceSupport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasVoiceSupport = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasVoiceSupport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBPFriendPresenceInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasVoiceSupport_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasVoiceSupport_MetaData, ARRAY_COUNT(NewProp_bHasVoiceSupport_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsJoinable_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewProp_bIsJoinable_SetBit = [](void* Obj){ ((FBPFriendPresenceInfo*)Obj)->bIsJoinable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJoinable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsJoinable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBPFriendPresenceInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsJoinable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsJoinable_MetaData, ARRAY_COUNT(NewProp_bIsJoinable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingThisGame_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewProp_bIsPlayingThisGame_SetBit = [](void* Obj){ ((FBPFriendPresenceInfo*)Obj)->bIsPlayingThisGame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingThisGame = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPlayingThisGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBPFriendPresenceInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPlayingThisGame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsPlayingThisGame_MetaData, ARRAY_COUNT(NewProp_bIsPlayingThisGame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewProp_bIsPlaying_SetBit = [](void* Obj){ ((FBPFriendPresenceInfo*)Obj)->bIsPlaying = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBPFriendPresenceInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPlaying_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsPlaying_MetaData, ARRAY_COUNT(NewProp_bIsPlaying_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOnline_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewProp_bIsOnline_SetBit = [](void* Obj){ ((FBPFriendPresenceInfo*)Obj)->bIsOnline = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnline = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsOnline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBPFriendPresenceInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsOnline_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsOnline_MetaData, ARRAY_COUNT(NewProp_bIsOnline_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StatusString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PresenceState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PresenceState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasVoiceSupport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsJoinable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPlayingThisGame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPlaying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsOnline,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPFriendPresenceInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPFriendPresenceInfo),
				alignof(FBPFriendPresenceInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_CRC() { return 134947615U; }
class UScriptStruct* FBPOnlineRecentPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPOnlineRecentPlayer"), sizeof(FBPOnlineRecentPlayer), Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOnlineRecentPlayer(FBPOnlineRecentPlayer::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPOnlineRecentPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPOnlineRecentPlayer")),new UScriptStruct::TCppStructOps<FBPOnlineRecentPlayer>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer;
	UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOnlineRecentPlayer"), sizeof(FBPOnlineRecentPlayer), Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOnlineRecentPlayer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSeen_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastSeen = { UE4CodeGen_Private::EPropertyClass::Str, "LastSeen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPOnlineRecentPlayer, LastSeen), METADATA_PARAMS(NewProp_LastSeen_MetaData, ARRAY_COUNT(NewProp_LastSeen_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastSeen,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
				Z_Construct_UScriptStruct_FBPOnlineUser,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPOnlineRecentPlayer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPOnlineRecentPlayer),
				alignof(FBPOnlineRecentPlayer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_CRC() { return 132321461U; }
class UScriptStruct* FBPOnlineUser::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOnlineUser, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPOnlineUser"), sizeof(FBPOnlineUser), Get_Z_Construct_UScriptStruct_FBPOnlineUser_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOnlineUser(FBPOnlineUser::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPOnlineUser"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPOnlineUser")),new UScriptStruct::TCppStructOps<FBPOnlineUser>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser;
	UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineUser()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOnlineUser"), sizeof(FBPOnlineUser), Get_Z_Construct_UScriptStruct_FBPOnlineUser_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOnlineUser>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RealName = { UE4CodeGen_Private::EPropertyClass::Str, "RealName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPOnlineUser, RealName), METADATA_PARAMS(NewProp_RealName_MetaData, ARRAY_COUNT(NewProp_RealName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPOnlineUser, DisplayName), METADATA_PARAMS(NewProp_DisplayName_MetaData, ARRAY_COUNT(NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
				{ "Category", "Online|Friend" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBPOnlineUser, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_UniqueNetId_MetaData, ARRAY_COUNT(NewProp_UniqueNetId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RealName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPOnlineUser",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPOnlineUser),
				alignof(FBPOnlineUser),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_CRC() { return 2820118444U; }
class UScriptStruct* FBPUniqueNetId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPUniqueNetId, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPUniqueNetId"), sizeof(FBPUniqueNetId), Get_Z_Construct_UScriptStruct_FBPUniqueNetId_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPUniqueNetId(FBPUniqueNetId::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPUniqueNetId"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPUniqueNetId")),new UScriptStruct::TCppStructOps<FBPUniqueNetId>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId;
	UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPUniqueNetId"), sizeof(FBPUniqueNetId), Get_Z_Construct_UScriptStruct_FBPUniqueNetId_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "ToolTip", "Boy oh boy is this a dirty hack, but I can't figure out a good way to do it otherwise at the moment\nThe UniqueNetId is an abstract class so I can't exactly re-initialize it to make a shared pointer on some functions\nSo I made the blueprintable UniqueNetID into a dual variable struct with access functions and I am converting the const var for the pointer\nI really need to re-think this later" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPUniqueNetId>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPUniqueNetId",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPUniqueNetId),
				alignof(FBPUniqueNetId),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_CRC() { return 1094521936U; }
class UScriptStruct* FBPUserOnlineAccount::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPUserOnlineAccount, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPUserOnlineAccount"), sizeof(FBPUserOnlineAccount), Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPUserOnlineAccount(FBPUserOnlineAccount::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPUserOnlineAccount"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUserOnlineAccount
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUserOnlineAccount()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPUserOnlineAccount")),new UScriptStruct::TCppStructOps<FBPUserOnlineAccount>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUserOnlineAccount;
	UScriptStruct* Z_Construct_UScriptStruct_FBPUserOnlineAccount()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPUserOnlineAccount"), sizeof(FBPUserOnlineAccount), Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPUserOnlineAccount>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPUserOnlineAccount",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPUserOnlineAccount),
				alignof(FBPUserOnlineAccount),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_CRC() { return 2275436175U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
