// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JELLYHUNT_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define JELLYHUNT_PlayerCharacter_generated_h

#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_SPARSE_DATA
#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_RPC_WRAPPERS
#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JellyHunt"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JellyHunt"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_9_PROLOG
#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_SPARSE_DATA \
	JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_RPC_WRAPPERS \
	JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_INCLASS \
	JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_SPARSE_DATA \
	JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	JellyHunt_Source_JellyHunt_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JELLYHUNT_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JellyHunt_Source_JellyHunt_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
