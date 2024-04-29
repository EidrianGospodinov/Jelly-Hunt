// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef JELLYHUNT_playerLocPawn_generated_h
#error "playerLocPawn.generated.h already included, missing '#pragma once' in playerLocPawn.h"
#endif
#define JELLYHUNT_playerLocPawn_generated_h

#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_SPARSE_DATA
#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_RPC_WRAPPERS
#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_EVENT_PARMS \
	struct playerLocPawn_eventGetPlayerPosition_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		playerLocPawn_eventGetPlayerPosition_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_CALLBACK_WRAPPERS
#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAplayerLocPawn(); \
	friend struct Z_Construct_UClass_AplayerLocPawn_Statics; \
public: \
	DECLARE_CLASS(AplayerLocPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JellyHunt"), NO_API) \
	DECLARE_SERIALIZER(AplayerLocPawn)


#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAplayerLocPawn(); \
	friend struct Z_Construct_UClass_AplayerLocPawn_Statics; \
public: \
	DECLARE_CLASS(AplayerLocPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JellyHunt"), NO_API) \
	DECLARE_SERIALIZER(AplayerLocPawn)


#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AplayerLocPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AplayerLocPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplayerLocPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplayerLocPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AplayerLocPawn(AplayerLocPawn&&); \
	NO_API AplayerLocPawn(const AplayerLocPawn&); \
public:


#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AplayerLocPawn(AplayerLocPawn&&); \
	NO_API AplayerLocPawn(const AplayerLocPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplayerLocPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplayerLocPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AplayerLocPawn)


#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define JellyHunt_Source_JellyHunt_playerLocPawn_h_9_PROLOG \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_EVENT_PARMS


#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_SPARSE_DATA \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_RPC_WRAPPERS \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_CALLBACK_WRAPPERS \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_INCLASS \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JellyHunt_Source_JellyHunt_playerLocPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_SPARSE_DATA \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_CALLBACK_WRAPPERS \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_INCLASS_NO_PURE_DECLS \
	JellyHunt_Source_JellyHunt_playerLocPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JELLYHUNT_API UClass* StaticClass<class AplayerLocPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JellyHunt_Source_JellyHunt_playerLocPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
