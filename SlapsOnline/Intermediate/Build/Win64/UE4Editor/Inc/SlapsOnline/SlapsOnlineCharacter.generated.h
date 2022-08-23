// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLAPSONLINE_SlapsOnlineCharacter_generated_h
#error "SlapsOnlineCharacter.generated.h already included, missing '#pragma once' in SlapsOnlineCharacter.h"
#endif
#define SLAPSONLINE_SlapsOnlineCharacter_generated_h

#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_SPARSE_DATA
#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_RPC_WRAPPERS
#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlapsOnlineCharacter(); \
	friend struct Z_Construct_UClass_ASlapsOnlineCharacter_Statics; \
public: \
	DECLARE_CLASS(ASlapsOnlineCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SlapsOnline"), NO_API) \
	DECLARE_SERIALIZER(ASlapsOnlineCharacter)


#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASlapsOnlineCharacter(); \
	friend struct Z_Construct_UClass_ASlapsOnlineCharacter_Statics; \
public: \
	DECLARE_CLASS(ASlapsOnlineCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SlapsOnline"), NO_API) \
	DECLARE_SERIALIZER(ASlapsOnlineCharacter)


#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlapsOnlineCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlapsOnlineCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlapsOnlineCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlapsOnlineCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlapsOnlineCharacter(ASlapsOnlineCharacter&&); \
	NO_API ASlapsOnlineCharacter(const ASlapsOnlineCharacter&); \
public:


#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlapsOnlineCharacter(ASlapsOnlineCharacter&&); \
	NO_API ASlapsOnlineCharacter(const ASlapsOnlineCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlapsOnlineCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlapsOnlineCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlapsOnlineCharacter)


#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASlapsOnlineCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASlapsOnlineCharacter, FollowCamera); }


#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_9_PROLOG
#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_SPARSE_DATA \
	SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_RPC_WRAPPERS \
	SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_INCLASS \
	SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_SPARSE_DATA \
	SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLAPSONLINE_API UClass* StaticClass<class ASlapsOnlineCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SlapsOnline_Source_SlapsOnline_SlapsOnlineCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
