// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/UpdateSessionCallbackProxyAdvanced.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateSessionCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	void UUpdateSessionCallbackProxyAdvanced::StaticRegisterNativesUUpdateSessionCallbackProxyAdvanced()
	{
		UClass* Class = UUpdateSessionCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSession", (Native)&UUpdateSessionCallbackProxyAdvanced::execUpdateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession()
	{
		struct UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms
		{
			UObject* WorldContextObject;
			TArray<FSessionPropertyKeyPair> ExtraSettings;
			int32 PublicConnections;
			int32 PrivateConnections;
			bool bUseLAN;
			bool bAllowInvites;
			bool bAllowJoinInProgress;
			bool bRefreshOnlineData;
			bool bIsDedicatedServer;
			UUpdateSessionCallbackProxyAdvanced* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms, ReturnValue), Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsDedicatedServer_SetBit = [](void* Obj){ ((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bIsDedicatedServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsDedicatedServer_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRefreshOnlineData_SetBit = [](void* Obj){ ((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bRefreshOnlineData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRefreshOnlineData = { UE4CodeGen_Private::EPropertyClass::Bool, "bRefreshOnlineData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRefreshOnlineData_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAllowJoinInProgress_SetBit = [](void* Obj){ ((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bAllowJoinInProgress = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowJoinInProgress", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowJoinInProgress_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAllowInvites_SetBit = [](void* Obj){ ((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bAllowInvites = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowInvites", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowInvites_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseLAN_SetBit = [](void* Obj){ ((UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms*)Obj)->bUseLAN = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLAN", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLAN_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrivateConnections = { UE4CodeGen_Private::EPropertyClass::Int, "PrivateConnections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms, PrivateConnections), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PublicConnections = { UE4CodeGen_Private::EPropertyClass::Int, "PublicConnections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms, PublicConnections), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSettings_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSettings = { UE4CodeGen_Private::EPropertyClass::Array, "ExtraSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms, ExtraSettings), METADATA_PARAMS(NewProp_ExtraSettings_MetaData, ARRAY_COUNT(NewProp_ExtraSettings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraSettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ExtraSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSessionPropertyKeyPair, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsDedicatedServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRefreshOnlineData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowJoinInProgress,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowInvites,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLAN,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrivateConnections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PublicConnections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtraSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtraSettings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "ExtraSettings" },
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "Online|AdvancedSessions" },
				{ "CPP_Default_bAllowInvites", "false" },
				{ "CPP_Default_bAllowJoinInProgress", "false" },
				{ "CPP_Default_bIsDedicatedServer", "false" },
				{ "CPP_Default_bRefreshOnlineData", "true" },
				{ "CPP_Default_bUseLAN", "false" },
				{ "CPP_Default_PrivateConnections", "0" },
				{ "CPP_Default_PublicConnections", "100" },
				{ "ModuleRelativePath", "Classes/UpdateSessionCallbackProxyAdvanced.h" },
				{ "ToolTip", "Creates a session with the default online subsystem with advanced optional inputs, you MUST fill in all categories or it will pass in values that you didn't want as default values" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced, "UpdateSession", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(UpdateSessionCallbackProxyAdvanced_eventUpdateSession_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced_NoRegister()
	{
		return UUpdateSessionCallbackProxyAdvanced::StaticClass();
	}
	UClass* Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UUpdateSessionCallbackProxyAdvanced_UpdateSession, "UpdateSession" }, // 3285666754
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UpdateSessionCallbackProxyAdvanced.h" },
				{ "ModuleRelativePath", "Classes/UpdateSessionCallbackProxyAdvanced.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
				{ "ModuleRelativePath", "Classes/UpdateSessionCallbackProxyAdvanced.h" },
				{ "ToolTip", "Called when there was an error updating the session" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailure", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UUpdateSessionCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFailure_MetaData, ARRAY_COUNT(NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "ModuleRelativePath", "Classes/UpdateSessionCallbackProxyAdvanced.h" },
				{ "ToolTip", "Called when the session was updated successfully" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UUpdateSessionCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFailure,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUpdateSessionCallbackProxyAdvanced>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUpdateSessionCallbackProxyAdvanced::StaticClass,
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
	IMPLEMENT_CLASS(UUpdateSessionCallbackProxyAdvanced, 3176830679);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpdateSessionCallbackProxyAdvanced(Z_Construct_UClass_UUpdateSessionCallbackProxyAdvanced, &UUpdateSessionCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UUpdateSessionCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateSessionCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
