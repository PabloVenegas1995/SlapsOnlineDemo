// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLAPSONLINE_CombatInterface_generated_h
#error "CombatInterface.generated.h already included, missing '#pragma once' in CombatInterface.h"
#endif
#define SLAPSONLINE_CombatInterface_generated_h

#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_SPARSE_DATA
#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_RPC_WRAPPERS \
	virtual void CheckPunch_Implementation() {}; \
 \
	DECLARE_FUNCTION(execCheckPunch);


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CheckPunch_Implementation() {}; \
 \
	DECLARE_FUNCTION(execCheckPunch);


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_EVENT_PARMS
#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_CALLBACK_WRAPPERS
#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLAPSONLINE_API UCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLAPSONLINE_API, UCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SLAPSONLINE_API UCombatInterface(UCombatInterface&&); \
	SLAPSONLINE_API UCombatInterface(const UCombatInterface&); \
public:


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLAPSONLINE_API UCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SLAPSONLINE_API UCombatInterface(UCombatInterface&&); \
	SLAPSONLINE_API UCombatInterface(const UCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLAPSONLINE_API, UCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatInterface)


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatInterface(); \
	friend struct Z_Construct_UClass_UCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SlapsOnline"), SLAPSONLINE_API) \
	DECLARE_SERIALIZER(UCombatInterface)


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_GENERATED_UINTERFACE_BODY() \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_GENERATED_UINTERFACE_BODY() \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatInterface() {} \
public: \
	typedef UCombatInterface UClassType; \
	typedef ICombatInterface ThisClass; \
	static void Execute_CheckPunch(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ICombatInterface() {} \
public: \
	typedef UCombatInterface UClassType; \
	typedef ICombatInterface ThisClass; \
	static void Execute_CheckPunch(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_5_PROLOG \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_EVENT_PARMS


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_SPARSE_DATA \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_RPC_WRAPPERS \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_CALLBACK_WRAPPERS \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SlapsOnline_Source_SlapsOnline_CombatInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_SPARSE_DATA \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_CALLBACK_WRAPPERS \
	SlapsOnline_Source_SlapsOnline_CombatInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLAPSONLINE_API UClass* StaticClass<class UCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SlapsOnline_Source_SlapsOnline_CombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
