// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPLoginStatus : uint8;
struct FBPUniqueNetId;
struct FBlueprintSessionResult;
#ifdef ADVANCEDSESSIONS_AdvancedFriendsInterface_generated_h
#error "AdvancedFriendsInterface.generated.h already included, missing '#pragma once' in AdvancedFriendsInterface.h"
#endif
#define ADVANCEDSESSIONS_AdvancedFriendsInterface_generated_h

#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_SPARSE_DATA
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_RPC_WRAPPERS
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_EVENT_PARMS \
	struct AdvancedFriendsInterface_eventOnPlayerLoginChanged_Parms \
	{ \
		int32 PlayerNum; \
	}; \
	struct AdvancedFriendsInterface_eventOnPlayerLoginStatusChanged_Parms \
	{ \
		EBPLoginStatus PreviousStatus; \
		EBPLoginStatus NewStatus; \
		FBPUniqueNetId PlayerUniqueNetID; \
	}; \
	struct AdvancedFriendsInterface_eventOnPlayerVoiceStateChanged_Parms \
	{ \
		FBPUniqueNetId PlayerId; \
		bool bIsTalking; \
	}; \
	struct AdvancedFriendsInterface_eventOnSessionInviteAccepted_Parms \
	{ \
		FBPUniqueNetId PersonInvited; \
		FBlueprintSessionResult SearchResult; \
	}; \
	struct AdvancedFriendsInterface_eventOnSessionInviteReceived_Parms \
	{ \
		FBPUniqueNetId PersonInviting; \
		FBlueprintSessionResult SearchResult; \
	};


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_CALLBACK_WRAPPERS
#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UAdvancedFriendsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UAdvancedFriendsInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UAdvancedFriendsInterface(UAdvancedFriendsInterface&&); \
	ADVANCEDSESSIONS_API UAdvancedFriendsInterface(const UAdvancedFriendsInterface&); \
public:


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UAdvancedFriendsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UAdvancedFriendsInterface(UAdvancedFriendsInterface&&); \
	ADVANCEDSESSIONS_API UAdvancedFriendsInterface(const UAdvancedFriendsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UAdvancedFriendsInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsInterface)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAdvancedFriendsInterface(); \
	friend struct Z_Construct_UClass_UAdvancedFriendsInterface_Statics; \
public: \
	DECLARE_CLASS(UAdvancedFriendsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsInterface)


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAdvancedFriendsInterface() {} \
public: \
	typedef UAdvancedFriendsInterface UClassType; \
	typedef IAdvancedFriendsInterface ThisClass; \
	static void Execute_OnPlayerLoginChanged(UObject* O, int32 PlayerNum); \
	static void Execute_OnPlayerLoginStatusChanged(UObject* O, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID); \
	static void Execute_OnPlayerVoiceStateChanged(UObject* O, FBPUniqueNetId PlayerId, bool bIsTalking); \
	static void Execute_OnSessionInviteAccepted(UObject* O, FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SearchResult); \
	static void Execute_OnSessionInviteReceived(UObject* O, FBPUniqueNetId PersonInviting, FBlueprintSessionResult const& SearchResult); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_INCLASS_IINTERFACE \
protected: \
	virtual ~IAdvancedFriendsInterface() {} \
public: \
	typedef UAdvancedFriendsInterface UClassType; \
	typedef IAdvancedFriendsInterface ThisClass; \
	static void Execute_OnPlayerLoginChanged(UObject* O, int32 PlayerNum); \
	static void Execute_OnPlayerLoginStatusChanged(UObject* O, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID); \
	static void Execute_OnPlayerVoiceStateChanged(UObject* O, FBPUniqueNetId PlayerId, bool bIsTalking); \
	static void Execute_OnSessionInviteAccepted(UObject* O, FBPUniqueNetId PersonInvited, FBlueprintSessionResult const& SearchResult); \
	static void Execute_OnSessionInviteReceived(UObject* O, FBPUniqueNetId PersonInviting, FBlueprintSessionResult const& SearchResult); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_20_PROLOG \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_EVENT_PARMS


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_SPARSE_DATA \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_RPC_WRAPPERS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_CALLBACK_WRAPPERS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_SPARSE_DATA \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_CALLBACK_WRAPPERS \
	HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedFriendsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
