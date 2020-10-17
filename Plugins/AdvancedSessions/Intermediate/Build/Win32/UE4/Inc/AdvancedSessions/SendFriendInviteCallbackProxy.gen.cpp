// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/SendFriendInviteCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendFriendInviteCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SendFriendInviteCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions, nullptr, "BlueprintSendFriendInviteDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USendFriendInviteCallbackProxy::execSendFriendInvite)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetIDInvited);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USendFriendInviteCallbackProxy**)Z_Param__Result=USendFriendInviteCallbackProxy::SendFriendInvite(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_UniqueNetIDInvited);
		P_NATIVE_END;
	}
	void USendFriendInviteCallbackProxy::StaticRegisterNativesUSendFriendInviteCallbackProxy()
	{
		UClass* Class = USendFriendInviteCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendFriendInvite", &USendFriendInviteCallbackProxy::execSendFriendInvite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics
	{
		struct SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FBPUniqueNetId UniqueNetIDInvited;
			USendFriendInviteCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetIDInvited_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetIDInvited;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms, ReturnValue), Z_Construct_UClass_USendFriendInviteCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_UniqueNetIDInvited_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_UniqueNetIDInvited = { "UniqueNetIDInvited", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms, UniqueNetIDInvited), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_UniqueNetIDInvited_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_UniqueNetIDInvited_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_UniqueNetIDInvited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedFriends" },
		{ "Comment", "// Adds a friend who is using the defined UniqueNetId, some interfaces do now allow this function to be called (INCLUDING STEAM)\n" },
		{ "ModuleRelativePath", "Classes/SendFriendInviteCallbackProxy.h" },
		{ "ToolTip", "Adds a friend who is using the defined UniqueNetId, some interfaces do now allow this function to be called (INCLUDING STEAM)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendFriendInviteCallbackProxy, nullptr, "SendFriendInvite", nullptr, nullptr, sizeof(SendFriendInviteCallbackProxy_eventSendFriendInvite_Parms), Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy_NoRegister()
	{
		return USendFriendInviteCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USendFriendInviteCallbackProxy_SendFriendInvite, "SendFriendInvite" }, // 3586482064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SendFriendInviteCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/SendFriendInviteCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there was an error retrieving the friends list\n" },
		{ "ModuleRelativePath", "Classes/SendFriendInviteCallbackProxy.h" },
		{ "ToolTip", "Called when there was an error retrieving the friends list" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USendFriendInviteCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the friends list successfully was retrieved\n" },
		{ "ModuleRelativePath", "Classes/SendFriendInviteCallbackProxy.h" },
		{ "ToolTip", "Called when the friends list successfully was retrieved" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USendFriendInviteCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USendFriendInviteCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::ClassParams = {
		&USendFriendInviteCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USendFriendInviteCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USendFriendInviteCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USendFriendInviteCallbackProxy, 2088959416);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<USendFriendInviteCallbackProxy>()
	{
		return USendFriendInviteCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USendFriendInviteCallbackProxy(Z_Construct_UClass_USendFriendInviteCallbackProxy, &USendFriendInviteCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("USendFriendInviteCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USendFriendInviteCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
