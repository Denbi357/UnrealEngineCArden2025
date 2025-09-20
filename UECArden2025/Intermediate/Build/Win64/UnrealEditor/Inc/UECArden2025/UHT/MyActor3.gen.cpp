// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden2025/MyActor3.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor3() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UECARDEN2025_API UClass* Z_Construct_UClass_AMyActor3();
UECARDEN2025_API UClass* Z_Construct_UClass_AMyActor3_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden2025();
// End Cross Module References

// Begin Class AMyActor3 Function DemostrateFundamentals
struct Z_Construct_UFunction_AMyActor3_DemostrateFundamentals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyActorTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de una variable de instancia publica\n" },
#endif
		{ "ModuleRelativePath", "MyActor3.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de una variable de instancia publica" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor3_DemostrateFundamentals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor3, nullptr, "DemostrateFundamentals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor3_DemostrateFundamentals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor3_DemostrateFundamentals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyActor3_DemostrateFundamentals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor3_DemostrateFundamentals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor3::execDemostrateFundamentals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DemostrateFundamentals();
	P_NATIVE_END;
}
// End Class AMyActor3 Function DemostrateFundamentals

// Begin Class AMyActor3
void AMyActor3::StaticRegisterNativesAMyActor3()
{
	UClass* Class = AMyActor3::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DemostrateFundamentals", &AMyActor3::execDemostrateFundamentals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor3);
UClass* Z_Construct_UClass_AMyActor3_NoRegister()
{
	return AMyActor3::StaticClass();
}
struct Z_Construct_UClass_AMyActor3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor3.h" },
		{ "ModuleRelativePath", "MyActor3.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyFloatVariable_MetaData[] = {
		{ "Category", "MyActorTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de una variable de instancia publica\n" },
#endif
		{ "ModuleRelativePath", "MyActor3.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de una variable de instancia publica" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_edad_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActor3.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_esInstructor_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActor3.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nombre_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActor3.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloatVariable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_edad;
	static void NewProp_esInstructor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_esInstructor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_nombre;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor3_DemostrateFundamentals, "DemostrateFundamentals" }, // 4071982679
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor3>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor3_Statics::NewProp_MyFloatVariable = { "MyFloatVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor3, MyFloatVariable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyFloatVariable_MetaData), NewProp_MyFloatVariable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor3_Statics::NewProp_edad = { "edad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor3, edad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_edad_MetaData), NewProp_edad_MetaData) };
void Z_Construct_UClass_AMyActor3_Statics::NewProp_esInstructor_SetBit(void* Obj)
{
	((AMyActor3*)Obj)->esInstructor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActor3_Statics::NewProp_esInstructor = { "esInstructor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyActor3), &Z_Construct_UClass_AMyActor3_Statics::NewProp_esInstructor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_esInstructor_MetaData), NewProp_esInstructor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyActor3_Statics::NewProp_nombre = { "nombre", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor3, nombre), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nombre_MetaData), NewProp_nombre_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor3_Statics::NewProp_MyFloatVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor3_Statics::NewProp_edad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor3_Statics::NewProp_esInstructor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor3_Statics::NewProp_nombre,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor3_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor3_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor3_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor3_Statics::ClassParams = {
	&AMyActor3::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActor3_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor3_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor3_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor3_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor3()
{
	if (!Z_Registration_Info_UClass_AMyActor3.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor3.OuterSingleton, Z_Construct_UClass_AMyActor3_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor3.OuterSingleton;
}
template<> UECARDEN2025_API UClass* StaticClass<AMyActor3>()
{
	return AMyActor3::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor3);
AMyActor3::~AMyActor3() {}
// End Class AMyActor3

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArden2025_UECArden2025_Source_UECArden2025_MyActor3_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor3, AMyActor3::StaticClass, TEXT("AMyActor3"), &Z_Registration_Info_UClass_AMyActor3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor3), 3032050267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArden2025_UECArden2025_Source_UECArden2025_MyActor3_h_3397972007(TEXT("/Script/UECArden2025"),
	Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArden2025_UECArden2025_Source_UECArden2025_MyActor3_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArden2025_UECArden2025_Source_UECArden2025_MyActor3_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
