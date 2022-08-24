// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlapsOnline/CombatInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}
// Cross Module References
	SLAPSONLINE_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
	SLAPSONLINE_API UClass* Z_Construct_UClass_UCombatInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SlapsOnline();
// End Cross Module References
	DEFINE_FUNCTION(ICombatInterface::execCheckPunch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckPunch_Implementation();
		P_NATIVE_END;
	}
	void ICombatInterface::CheckPunch()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CheckPunch instead.");
	}
	void UCombatInterface::StaticRegisterNativesUCombatInterface()
	{
		UClass* Class = UCombatInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckPunch", &ICombatInterface::execCheckPunch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatInterface_CheckPunch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_CheckPunch_Statics::Function_MetaDataParams[] = {
		{ "Category", "attacks" },
		{ "ModuleRelativePath", "CombatInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_CheckPunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "CheckPunch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatInterface_CheckPunch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CheckPunch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatInterface_CheckPunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatInterface_CheckPunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
	{
		return UCombatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCombatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SlapsOnline,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_CheckPunch, "CheckPunch" }, // 2352076680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CombatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
		&UCombatInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatInterface, 424569990);
	template<> SLAPSONLINE_API UClass* StaticClass<UCombatInterface>()
	{
		return UCombatInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatInterface(Z_Construct_UClass_UCombatInterface, &UCombatInterface::StaticClass, TEXT("/Script/SlapsOnline"), TEXT("UCombatInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
	static FName NAME_UCombatInterface_CheckPunch = FName(TEXT("CheckPunch"));
	void ICombatInterface::Execute_CheckPunch(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_CheckPunch);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICombatInterface*)(O->GetNativeInterfaceAddress(UCombatInterface::StaticClass())))
		{
			I->CheckPunch_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
