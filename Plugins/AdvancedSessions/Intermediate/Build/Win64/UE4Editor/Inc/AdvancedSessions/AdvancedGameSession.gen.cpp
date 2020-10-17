// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AdvancedGameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedGameSession() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_AAdvancedGameSession_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_AAdvancedGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
	void AAdvancedGameSession::StaticRegisterNativesAAdvancedGameSession()
	{
	}
	UClass* Z_Construct_UClass_AAdvancedGameSession_NoRegister()
	{
		return AAdvancedGameSession::StaticClass();
	}
	struct Z_Construct_UClass_AAdvancedGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BanList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BanList_Key_KeyProp;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BanList_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvancedGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameSession,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedGameSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n A quick wrapper around the game session to add a partial ban implementation. Just bans for the duration of the current session\n*/" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AdvancedGameSession.h" },
		{ "ModuleRelativePath", "Classes/AdvancedGameSession.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A quick wrapper around the game session to add a partial ban implementation. Just bans for the duration of the current session" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AdvancedGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList = { "BanList", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedGameSession, BanList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_Key_KeyProp = { "BanList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_ValueProp = { "BanList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvancedGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvancedGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedGameSession_Statics::ClassParams = {
		&AAdvancedGameSession::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdvancedGameSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameSession_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvancedGameSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvancedGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvancedGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvancedGameSession, 3922944598);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<AAdvancedGameSession>()
	{
		return AAdvancedGameSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvancedGameSession(Z_Construct_UClass_AAdvancedGameSession, &AAdvancedGameSession::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("AAdvancedGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
