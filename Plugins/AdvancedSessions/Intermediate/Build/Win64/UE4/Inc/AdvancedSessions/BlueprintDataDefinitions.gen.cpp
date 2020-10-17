// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/BlueprintDataDefinitions.h"
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
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EOnlineComparisonOpRedux>()
	{
		return EOnlineComparisonOpRedux_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineComparisonOpRedux(EOnlineComparisonOpRedux_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EOnlineComparisonOpRedux"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux_Hash() { return 3694245881U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineComparisonOpRedux"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EOnlineComparisonOpRedux_Hash(), false);
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** The types of comparison operations for a given search query */// Used to compare session properties\n" },
				{ "Equals.Name", "EOnlineComparisonOpRedux::Equals" },
				{ "GreaterThan.Name", "EOnlineComparisonOpRedux::GreaterThan" },
				{ "GreaterThanEquals.Name", "EOnlineComparisonOpRedux::GreaterThanEquals" },
				{ "LessThan.Name", "EOnlineComparisonOpRedux::LessThan" },
				{ "LessThanEquals.Name", "EOnlineComparisonOpRedux::LessThanEquals" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "NotEquals.Name", "EOnlineComparisonOpRedux::NotEquals" },
				{ "ToolTip", "The types of comparison operations for a given search query // Used to compare session properties" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EOnlineComparisonOpRedux",
				"EOnlineComparisonOpRedux",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
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
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPOnlineSessionState>()
	{
		return EBPOnlineSessionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOnlineSessionState(EBPOnlineSessionState_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPOnlineSessionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState_Hash() { return 4286699281U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOnlineSessionState"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState_Hash(), false);
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Creating.Comment", "/** An online session is in the process of being created */" },
				{ "Creating.Name", "EBPOnlineSessionState::Creating" },
				{ "Creating.ToolTip", "An online session is in the process of being created" },
				{ "Destroying.Comment", "/** The session is being destroyed */" },
				{ "Destroying.Name", "EBPOnlineSessionState::Destroying" },
				{ "Destroying.ToolTip", "The session is being destroyed" },
				{ "Ended.Comment", "/** The session is closed and any stats committed */" },
				{ "Ended.Name", "EBPOnlineSessionState::Ended" },
				{ "Ended.ToolTip", "The session is closed and any stats committed" },
				{ "Ending.Comment", "/** The session is still valid, but the session is no longer being played (post match lobby) */" },
				{ "Ending.Name", "EBPOnlineSessionState::Ending" },
				{ "Ending.ToolTip", "The session is still valid, but the session is no longer being played (post match lobby)" },
				{ "InProgress.Comment", "/** The current session has started. Sessions with join in progress disabled are no longer joinable */" },
				{ "InProgress.Name", "EBPOnlineSessionState::InProgress" },
				{ "InProgress.ToolTip", "The current session has started. Sessions with join in progress disabled are no longer joinable" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "NoSession.Comment", "/** An online session has not been created yet */" },
				{ "NoSession.Name", "EBPOnlineSessionState::NoSession" },
				{ "NoSession.ToolTip", "An online session has not been created yet" },
				{ "Pending.Comment", "/** Session has been created but the session hasn't started (pre match lobby) */" },
				{ "Pending.Name", "EBPOnlineSessionState::Pending" },
				{ "Pending.ToolTip", "Session has been created but the session hasn't started (pre match lobby)" },
				{ "Starting.Comment", "/** Session has been asked to start (may take time due to communication with backend) */" },
				{ "Starting.Name", "EBPOnlineSessionState::Starting" },
				{ "Starting.ToolTip", "Session has been asked to start (may take time due to communication with backend)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBPOnlineSessionState",
				"EBPOnlineSessionState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
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
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPOnlinePresenceState>()
	{
		return EBPOnlinePresenceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOnlinePresenceState(EBPOnlinePresenceState_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPOnlinePresenceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState_Hash() { return 1582863704U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOnlinePresenceState"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState_Hash(), false);
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Away.Name", "EBPOnlinePresenceState::Away" },
				{ "BlueprintType", "true" },
				{ "Chat.Name", "EBPOnlinePresenceState::Chat" },
				{ "Comment", "// Wanted this to be switchable in the editor\n" },
				{ "DoNotDisturb.Name", "EBPOnlinePresenceState::DoNotDisturb" },
				{ "ExtendedAway.Name", "EBPOnlinePresenceState::ExtendedAway" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "Offline.Name", "EBPOnlinePresenceState::Offline" },
				{ "Online.Name", "EBPOnlinePresenceState::Online" },
				{ "ToolTip", "Wanted this to be switchable in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBPOnlinePresenceState",
				"EBPOnlinePresenceState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
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
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPServerPresenceSearchType>()
	{
		return EBPServerPresenceSearchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPServerPresenceSearchType(EBPServerPresenceSearchType_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPServerPresenceSearchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType_Hash() { return 2415476092U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPServerPresenceSearchType"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType_Hash(), false);
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllServers.Name", "EBPServerPresenceSearchType::AllServers" },
				{ "BlueprintType", "true" },
				{ "ClientServersOnly.Name", "EBPServerPresenceSearchType::ClientServersOnly" },
				{ "Comment", "// This is to define server type searches\n" },
				{ "DedicatedServersOnly.Name", "EBPServerPresenceSearchType::DedicatedServersOnly" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "ToolTip", "This is to define server type searches" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBPServerPresenceSearchType",
				"EBPServerPresenceSearchType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
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
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBlueprintAsyncResultSwitch>()
	{
		return EBlueprintAsyncResultSwitch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintAsyncResultSwitch(EBlueprintAsyncResultSwitch_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBlueprintAsyncResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch_Hash() { return 4219699264U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintAsyncResultSwitch"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch_Hash(), false);
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AsyncLoading.Comment", "// Still loading\n" },
				{ "AsyncLoading.Name", "EBlueprintAsyncResultSwitch::AsyncLoading" },
				{ "AsyncLoading.ToolTip", "Still loading" },
				{ "Comment", "// This makes a lot of the blueprint functions cleaner\n" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "OnFailure.Comment", "// On Failure\n" },
				{ "OnFailure.Name", "EBlueprintAsyncResultSwitch::OnFailure" },
				{ "OnFailure.ToolTip", "On Failure" },
				{ "OnSuccess.Comment", "// On Success\n" },
				{ "OnSuccess.Name", "EBlueprintAsyncResultSwitch::OnSuccess" },
				{ "OnSuccess.ToolTip", "On Success" },
				{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBlueprintAsyncResultSwitch",
				"EBlueprintAsyncResultSwitch",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
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
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBlueprintResultSwitch>()
	{
		return EBlueprintResultSwitch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintResultSwitch(EBlueprintResultSwitch_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBlueprintResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch_Hash() { return 4139468862U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintResultSwitch"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch_Hash(), false);
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// This makes a lot of the blueprint functions cleaner\n" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "OnFailure.Comment", "// On Failure\n" },
				{ "OnFailure.Name", "EBlueprintResultSwitch::OnFailure" },
				{ "OnFailure.ToolTip", "On Failure" },
				{ "OnSuccess.Comment", "// On Success\n" },
				{ "OnSuccess.Name", "EBlueprintResultSwitch::OnSuccess" },
				{ "OnSuccess.ToolTip", "On Success" },
				{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBlueprintResultSwitch",
				"EBlueprintResultSwitch",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
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
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<ESessionSettingSearchResult>()
	{
		return ESessionSettingSearchResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESessionSettingSearchResult(ESessionSettingSearchResult_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("ESessionSettingSearchResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult_Hash() { return 3255797176U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESessionSettingSearchResult"), 0, Get_Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult_Hash(), false);
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Found.Comment", "// Found the setting\n" },
				{ "Found.Name", "ESessionSettingSearchResult::Found" },
				{ "Found.ToolTip", "Found the setting" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "NotFound.Comment", "// Did not find the setting\n" },
				{ "NotFound.Name", "ESessionSettingSearchResult::NotFound" },
				{ "NotFound.ToolTip", "Did not find the setting" },
				{ "WrongType.Comment", "// Was not the correct type\n" },
				{ "WrongType.Name", "ESessionSettingSearchResult::WrongType" },
				{ "WrongType.ToolTip", "Was not the correct type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"ESessionSettingSearchResult",
				"ESessionSettingSearchResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
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
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPLoginStatus>()
	{
		return EBPLoginStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPLoginStatus(EBPLoginStatus_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPLoginStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus_Hash() { return 484810402U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPLoginStatus"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPLoginStatus_Hash(), false);
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LoggedIn.Comment", "/** Player has been validated by the platform specific authentication service */" },
				{ "LoggedIn.Name", "EBPLoginStatus::LoggedIn" },
				{ "LoggedIn.ToolTip", "Player has been validated by the platform specific authentication service" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
				{ "NotLoggedIn.Comment", "/** Player has not logged in or chosen a local profile */" },
				{ "NotLoggedIn.Name", "EBPLoginStatus::NotLoggedIn" },
				{ "NotLoggedIn.ToolTip", "Player has not logged in or chosen a local profile" },
				{ "UsingLocalProfile.Comment", "/** Player is using a local profile but is not logged in */" },
				{ "UsingLocalProfile.Name", "EBPLoginStatus::UsingLocalProfile" },
				{ "UsingLocalProfile.ToolTip", "Player is using a local profile but is not logged in" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBPLoginStatus",
				"EBPLoginStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
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
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPUserPrivileges>()
	{
		return EBPUserPrivileges_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPUserPrivileges(EBPUserPrivileges_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPUserPrivileges"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges_Hash() { return 4177637736U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPUserPrivileges"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges_Hash(), false);
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CanCommunicateOnline.Comment", "/** Whether the user can use voice and text chat */" },
				{ "CanCommunicateOnline.Name", "EBPUserPrivileges::CanCommunicateOnline" },
				{ "CanCommunicateOnline.ToolTip", "Whether the user can use voice and text chat" },
				{ "CanPlay.Comment", "/** Whether the user can play at all, online or offline - may be age restricted */" },
				{ "CanPlay.Name", "EBPUserPrivileges::CanPlay" },
				{ "CanPlay.ToolTip", "Whether the user can play at all, online or offline - may be age restricted" },
				{ "CanPlayOnline.Comment", "/** Whether the user can play in online modes */" },
				{ "CanPlayOnline.Name", "EBPUserPrivileges::CanPlayOnline" },
				{ "CanPlayOnline.ToolTip", "Whether the user can play in online modes" },
				{ "CanUseUserGeneratedContent.Comment", "/** Whether the user can use content generated by other users */" },
				{ "CanUseUserGeneratedContent.Name", "EBPUserPrivileges::CanUseUserGeneratedContent" },
				{ "CanUseUserGeneratedContent.ToolTip", "Whether the user can use content generated by other users" },
				{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBPUserPrivileges",
				"EBPUserPrivileges",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
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
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionsSearchSetting, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("SessionsSearchSetting"), sizeof(FSessionsSearchSetting), Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FSessionsSearchSetting>()
{
	return FSessionsSearchSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionsSearchSetting(FSessionsSearchSetting::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("SessionsSearchSetting"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionsSearchSetting
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionsSearchSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionsSearchSetting")),new UScriptStruct::TCppStructOps<FSessionsSearchSetting>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionsSearchSetting;
	struct Z_Construct_UScriptStruct_FSessionsSearchSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionsSearchSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Sent to the FindSessionsAdvanced to filter the end results\n" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
		{ "ToolTip", "Sent to the FindSessionsAdvanced to filter the end results" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionsSearchSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionsSearchSetting>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionsSearchSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"SessionsSearchSetting",
		sizeof(FSessionsSearchSetting),
		alignof(FSessionsSearchSetting),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionsSearchSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionsSearchSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionsSearchSetting"), sizeof(FSessionsSearchSetting), Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionsSearchSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionsSearchSetting_Hash() { return 744328678U; }
class UScriptStruct* FSessionPropertyKeyPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionPropertyKeyPair, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("SessionPropertyKeyPair"), sizeof(FSessionPropertyKeyPair), Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FSessionPropertyKeyPair>()
{
	return FSessionPropertyKeyPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionPropertyKeyPair(FSessionPropertyKeyPair::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("SessionPropertyKeyPair"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionPropertyKeyPair")),new UScriptStruct::TCppStructOps<FSessionPropertyKeyPair>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair;
	struct Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used to store session properties before converting to FVariantData\n" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
		{ "ToolTip", "Used to store session properties before converting to FVariantData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionPropertyKeyPair>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"SessionPropertyKeyPair",
		sizeof(FSessionPropertyKeyPair),
		alignof(FSessionPropertyKeyPair),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionPropertyKeyPair"), sizeof(FSessionPropertyKeyPair), Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Hash() { return 1766057364U; }
class UScriptStruct* FBPFriendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPFriendInfo, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPFriendInfo"), sizeof(FBPFriendInfo), Get_Z_Construct_UScriptStruct_FBPFriendInfo_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPFriendInfo>()
{
	return FBPFriendInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPFriendInfo(FBPFriendInfo::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPFriendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPFriendInfo")),new UScriptStruct::TCppStructOps<FBPFriendInfo>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendInfo;
	struct Z_Construct_UScriptStruct_FBPFriendInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresenceInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingSameGame_MetaData[];
#endif
		static void NewProp_bIsPlayingSameGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingSameGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnlineState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnlineState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RealName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPFriendInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_PresenceInfo_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_PresenceInfo = { "PresenceInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendInfo, PresenceInfo), Z_Construct_UScriptStruct_FBPFriendPresenceInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_PresenceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_PresenceInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame_SetBit(void* Obj)
	{
		((FBPFriendInfo*)Obj)->bIsPlayingSameGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame = { "bIsPlayingSameGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendInfo), &Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendInfo, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_UniqueNetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState = { "OnlineState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendInfo, OnlineState), Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_RealName_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_RealName = { "RealName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendInfo, RealName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_RealName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_RealName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPFriendInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_PresenceInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_bIsPlayingSameGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_OnlineState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_RealName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendInfo_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPFriendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"BPFriendInfo",
		sizeof(FBPFriendInfo),
		alignof(FBPFriendInfo),
		Z_Construct_UScriptStruct_FBPFriendInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPFriendInfo"), sizeof(FBPFriendInfo), Get_Z_Construct_UScriptStruct_FBPFriendInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPFriendInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPFriendInfo_Hash() { return 4114777901U; }
class UScriptStruct* FBPFriendPresenceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPFriendPresenceInfo, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPFriendPresenceInfo"), sizeof(FBPFriendPresenceInfo), Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPFriendPresenceInfo>()
{
	return FBPFriendPresenceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPFriendPresenceInfo(FBPFriendPresenceInfo::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPFriendPresenceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPFriendPresenceInfo")),new UScriptStruct::TCppStructOps<FBPFriendPresenceInfo>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPFriendPresenceInfo;
	struct Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatusString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PresenceState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PresenceState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasVoiceSupport_MetaData[];
#endif
		static void NewProp_bHasVoiceSupport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasVoiceSupport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsJoinable_MetaData[];
#endif
		static void NewProp_bIsJoinable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJoinable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingThisGame_MetaData[];
#endif
		static void NewProp_bIsPlayingThisGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingThisGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[];
#endif
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOnline_MetaData[];
#endif
		static void NewProp_bIsOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPFriendPresenceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_StatusString_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_StatusString = { "StatusString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendPresenceInfo, StatusString), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_StatusString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_StatusString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState = { "PresenceState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPFriendPresenceInfo, PresenceState), Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport_SetBit(void* Obj)
	{
		((FBPFriendPresenceInfo*)Obj)->bHasVoiceSupport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport = { "bHasVoiceSupport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendPresenceInfo), &Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable_SetBit(void* Obj)
	{
		((FBPFriendPresenceInfo*)Obj)->bIsJoinable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable = { "bIsJoinable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendPresenceInfo), &Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame_SetBit(void* Obj)
	{
		((FBPFriendPresenceInfo*)Obj)->bIsPlayingThisGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame = { "bIsPlayingThisGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendPresenceInfo), &Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((FBPFriendPresenceInfo*)Obj)->bIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendPresenceInfo), &Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline_SetBit(void* Obj)
	{
		((FBPFriendPresenceInfo*)Obj)->bIsOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline = { "bIsOnline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPFriendPresenceInfo), &Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_StatusString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_PresenceState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bHasVoiceSupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsJoinable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlayingThisGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::NewProp_bIsOnline,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"BPFriendPresenceInfo",
		sizeof(FBPFriendPresenceInfo),
		alignof(FBPFriendPresenceInfo),
		Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPFriendPresenceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPFriendPresenceInfo"), sizeof(FBPFriendPresenceInfo), Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPFriendPresenceInfo_Hash() { return 875024445U; }
class UScriptStruct* FBPOnlineRecentPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPOnlineRecentPlayer"), sizeof(FBPOnlineRecentPlayer), Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPOnlineRecentPlayer>()
{
	return FBPOnlineRecentPlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOnlineRecentPlayer(FBPOnlineRecentPlayer::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPOnlineRecentPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPOnlineRecentPlayer")),new UScriptStruct::TCppStructOps<FBPOnlineRecentPlayer>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineRecentPlayer;
	struct Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSeen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastSeen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOnlineRecentPlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewProp_LastSeen_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewProp_LastSeen = { "LastSeen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOnlineRecentPlayer, LastSeen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewProp_LastSeen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewProp_LastSeen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::NewProp_LastSeen,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		Z_Construct_UScriptStruct_FBPOnlineUser,
		&NewStructOps,
		"BPOnlineRecentPlayer",
		sizeof(FBPOnlineRecentPlayer),
		alignof(FBPOnlineRecentPlayer),
		Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOnlineRecentPlayer"), sizeof(FBPOnlineRecentPlayer), Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOnlineRecentPlayer_Hash() { return 3471333781U; }
class UScriptStruct* FBPOnlineUser::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOnlineUser, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPOnlineUser"), sizeof(FBPOnlineUser), Get_Z_Construct_UScriptStruct_FBPOnlineUser_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPOnlineUser>()
{
	return FBPOnlineUser::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOnlineUser(FBPOnlineUser::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPOnlineUser"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPOnlineUser")),new UScriptStruct::TCppStructOps<FBPOnlineUser>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser;
	struct Z_Construct_UScriptStruct_FBPOnlineUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RealName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOnlineUser>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_RealName_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_RealName = { "RealName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOnlineUser, RealName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_RealName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_RealName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOnlineUser, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOnlineUser, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_UniqueNetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPOnlineUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_RealName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_UniqueNetId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOnlineUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"BPOnlineUser",
		sizeof(FBPOnlineUser),
		alignof(FBPOnlineUser),
		Z_Construct_UScriptStruct_FBPOnlineUser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineUser()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOnlineUser"), sizeof(FBPOnlineUser), Get_Z_Construct_UScriptStruct_FBPOnlineUser_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPOnlineUser_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_Hash() { return 1842917475U; }
class UScriptStruct* FBPUniqueNetId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPUniqueNetId, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPUniqueNetId"), sizeof(FBPUniqueNetId), Get_Z_Construct_UScriptStruct_FBPUniqueNetId_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPUniqueNetId>()
{
	return FBPUniqueNetId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPUniqueNetId(FBPUniqueNetId::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPUniqueNetId"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPUniqueNetId")),new UScriptStruct::TCppStructOps<FBPUniqueNetId>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId;
	struct Z_Construct_UScriptStruct_FBPUniqueNetId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Boy oh boy is this a dirty hack, but I can't figure out a good way to do it otherwise at the moment\n// The UniqueNetId is an abstract class so I can't exactly re-initialize it to make a shared pointer on some functions\n// So I made the blueprintable UniqueNetID into a dual variable struct with access functions and I am converting the const var for the pointer\n// I really need to re-think this later\n" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
		{ "ToolTip", "Boy oh boy is this a dirty hack, but I can't figure out a good way to do it otherwise at the moment\nThe UniqueNetId is an abstract class so I can't exactly re-initialize it to make a shared pointer on some functions\nSo I made the blueprintable UniqueNetID into a dual variable struct with access functions and I am converting the const var for the pointer\nI really need to re-think this later" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPUniqueNetId>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"BPUniqueNetId",
		sizeof(FBPUniqueNetId),
		alignof(FBPUniqueNetId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPUniqueNetId"), sizeof(FBPUniqueNetId), Get_Z_Construct_UScriptStruct_FBPUniqueNetId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_Hash() { return 2587011273U; }
class UScriptStruct* FBPUserOnlineAccount::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPUserOnlineAccount, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPUserOnlineAccount"), sizeof(FBPUserOnlineAccount), Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPUserOnlineAccount>()
{
	return FBPUserOnlineAccount::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPUserOnlineAccount(FBPUserOnlineAccount::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPUserOnlineAccount"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUserOnlineAccount
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUserOnlineAccount()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPUserOnlineAccount")),new UScriptStruct::TCppStructOps<FBPUserOnlineAccount>);
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUserOnlineAccount;
	struct Z_Construct_UScriptStruct_FBPUserOnlineAccount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPUserOnlineAccount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BlueprintDataDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPUserOnlineAccount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPUserOnlineAccount>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPUserOnlineAccount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"BPUserOnlineAccount",
		sizeof(FBPUserOnlineAccount),
		alignof(FBPUserOnlineAccount),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPUserOnlineAccount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPUserOnlineAccount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPUserOnlineAccount()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPUserOnlineAccount"), sizeof(FBPUserOnlineAccount), Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPUserOnlineAccount_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPUserOnlineAccount_Hash() { return 2814513559U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
