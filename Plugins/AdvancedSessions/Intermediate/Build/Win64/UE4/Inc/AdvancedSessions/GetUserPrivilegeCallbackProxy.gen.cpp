// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/GetUserPrivilegeCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetUserPrivilegeCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms
		{
			EBPUserPrivileges QueriedPrivilege;
			bool HadPrivilege;
		};
		static void NewProp_HadPrivilege_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HadPrivilege;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueriedPrivilege;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueriedPrivilege_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege_SetBit(void* Obj)
	{
		((_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms*)Obj)->HadPrivilege = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege = { "HadPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms), &Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege = { "QueriedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms, QueriedPrivilege), Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_HadPrivilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::NewProp_QueriedPrivilege_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* const &FBPUniqueNetId, PlayerID,*/" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
		{ "ToolTip", "const &FBPUniqueNetId, PlayerID," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions, nullptr, "BlueprintGetUserPrivilegeDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGetUserPrivilegeCallbackProxy::execGetUserPrivilege)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM_REF(EBPUserPrivileges,Z_Param_Out_PrivilegeToCheck);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_PlayerUniqueNetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetUserPrivilegeCallbackProxy**)Z_Param__Result=UGetUserPrivilegeCallbackProxy::GetUserPrivilege(Z_Param_WorldContextObject,(EBPUserPrivileges&)(Z_Param_Out_PrivilegeToCheck),Z_Param_Out_PlayerUniqueNetID);
		P_NATIVE_END;
	}
	void UGetUserPrivilegeCallbackProxy::StaticRegisterNativesUGetUserPrivilegeCallbackProxy()
	{
		UClass* Class = UGetUserPrivilegeCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserPrivilege", &UGetUserPrivilegeCallbackProxy::execGetUserPrivilege },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics
	{
		struct GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms
		{
			UObject* WorldContextObject;
			EBPUserPrivileges PrivilegeToCheck;
			FBPUniqueNetId PlayerUniqueNetID;
			UGetUserPrivilegeCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUniqueNetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerUniqueNetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivilegeToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrivilegeToCheck;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrivilegeToCheck_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, ReturnValue), Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID = { "PlayerUniqueNetID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, PlayerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck = { "PrivilegeToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, PrivilegeToCheck), Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges, METADATA_PARAMS(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PlayerUniqueNetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_PrivilegeToCheck_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedIdentity" },
		{ "Comment", "// Gets the privilage of the user\n" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
		{ "ToolTip", "Gets the privilage of the user" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetUserPrivilegeCallbackProxy, nullptr, "GetUserPrivilege", nullptr, nullptr, sizeof(GetUserPrivilegeCallbackProxy_eventGetUserPrivilege_Parms), Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_NoRegister()
	{
		return UGetUserPrivilegeCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetUserPrivilegeCallbackProxy_GetUserPrivilege, "GetUserPrivilege" }, // 1675221521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GetUserPrivilegeCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful destroy" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetUserPrivilegeCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful destroy\n" },
		{ "ModuleRelativePath", "Classes/GetUserPrivilegeCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful destroy" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetUserPrivilegeCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetUserPrivilegeCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::ClassParams = {
		&UGetUserPrivilegeCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetUserPrivilegeCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetUserPrivilegeCallbackProxy, 395189931);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UGetUserPrivilegeCallbackProxy>()
	{
		return UGetUserPrivilegeCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetUserPrivilegeCallbackProxy(Z_Construct_UClass_UGetUserPrivilegeCallbackProxy, &UGetUserPrivilegeCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UGetUserPrivilegeCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetUserPrivilegeCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
