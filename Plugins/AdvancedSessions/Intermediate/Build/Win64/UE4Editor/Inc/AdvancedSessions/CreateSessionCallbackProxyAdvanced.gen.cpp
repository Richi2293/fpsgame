// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/CreateSessionCallbackProxyAdvanced.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateSessionCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	void UCreateSessionCallbackProxyAdvanced::StaticRegisterNativesUCreateSessionCallbackProxyAdvanced()
	{
		UClass* Class = UCreateSessionCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAdvancedSession", (Native)&UCreateSessionCallbackProxyAdvanced::execCreateAdvancedSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession()
	{
		struct CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms
		{
			UObject* WorldContextObject;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			APlayerController* PlayerController;
			int32 PublicConnections;
			int32 PrivateConnections;
			bool bUseLAN;
			bool bAllowInvites;
			bool bIsDedicatedServer;
			bool bUsePresence;
			bool bAllowJoinViaPresence;
			bool bAllowJoinViaPresenceFriendsOnly;
			bool bAntiCheatProtected;
			bool bUsesStats;
			bool bShouldAdvertise;
			UCreateSessionCallbackProxyAdvanced* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, ReturnValue), Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bShouldAdvertise_SetBit = [](void* Obj){ ((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bShouldAdvertise = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldAdvertise", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldAdvertise_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUsesStats_SetBit = [](void* Obj){ ((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUsesStats = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesStats = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsesStats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsesStats_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAntiCheatProtected_SetBit = [](void* Obj){ ((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAntiCheatProtected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected = { UE4CodeGen_Private::EPropertyClass::Bool, "bAntiCheatProtected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAntiCheatProtected_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit = [](void* Obj){ ((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowJoinViaPresenceFriendsOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAllowJoinViaPresence_SetBit = [](void* Obj){ ((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAllowJoinViaPresence = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowJoinViaPresence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowJoinViaPresence_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUsePresence_SetBit = [](void* Obj){ ((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUsePresence = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePresence = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePresence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePresence_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsDedicatedServer_SetBit = [](void* Obj){ ((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bIsDedicatedServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsDedicatedServer_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAllowInvites_SetBit = [](void* Obj){ ((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bAllowInvites = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowInvites", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowInvites_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseLAN_SetBit = [](void* Obj){ ((CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms*)Obj)->bUseLAN = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLAN", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLAN_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrivateConnections = { UE4CodeGen_Private::EPropertyClass::Int, "PrivateConnections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, PrivateConnections), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PublicConnections = { UE4CodeGen_Private::EPropertyClass::Int, "PublicConnections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, PublicConnections), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings = { UE4CodeGen_Private::EPropertyClass::Array, "ExtraSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, ExtraSettings), METADATA_PARAMS(NewProp_ExtraSettings_MetaData, ARRAY_COUNT(NewProp_ExtraSettings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ExtraSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldAdvertise,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsesStats,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAntiCheatProtected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowJoinViaPresenceFriendsOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowJoinViaPresence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePresence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsDedicatedServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowInvites,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLAN,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrivateConnections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PublicConnections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtraSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtraSettings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "ExtraSettings" },
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "Online|AdvancedSessions" },
				{ "CPP_Default_bAllowInvites", "true" },
				{ "CPP_Default_bAllowJoinViaPresence", "true" },
				{ "CPP_Default_bAllowJoinViaPresenceFriendsOnly", "false" },
				{ "CPP_Default_bAntiCheatProtected", "false" },
				{ "CPP_Default_bIsDedicatedServer", "false" },
				{ "CPP_Default_bShouldAdvertise", "true" },
				{ "CPP_Default_bUseLAN", "false" },
				{ "CPP_Default_bUsePresence", "true" },
				{ "CPP_Default_bUsesStats", "false" },
				{ "CPP_Default_PrivateConnections", "0" },
				{ "CPP_Default_PublicConnections", "100" },
				{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
				{ "ToolTip", "Creates a session with the default online subsystem with advanced optional inputs, for dedicated servers leave UsePresence as false and set IsDedicatedServer to true. Dedicated servers don't use presence." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced, "CreateAdvancedSession", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(CreateSessionCallbackProxyAdvanced_eventCreateAdvancedSession_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced_NoRegister()
	{
		return UCreateSessionCallbackProxyAdvanced::StaticClass();
	}
	UClass* Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession, "CreateAdvancedSession" }, // 1800532558
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CreateSessionCallbackProxyAdvanced.h" },
				{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
				{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
				{ "ToolTip", "Called when there was an error creating the session" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailure", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UCreateSessionCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFailure_MetaData, ARRAY_COUNT(NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxyAdvanced.h" },
				{ "ToolTip", "Called when the session was created successfully" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UCreateSessionCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFailure,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCreateSessionCallbackProxyAdvanced>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCreateSessionCallbackProxyAdvanced::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UCreateSessionCallbackProxyAdvanced, 684368194);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreateSessionCallbackProxyAdvanced(Z_Construct_UClass_UCreateSessionCallbackProxyAdvanced, &UCreateSessionCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UCreateSessionCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateSessionCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
