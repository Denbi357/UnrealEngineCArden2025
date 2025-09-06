// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden2025/MyActorClase1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorClase1() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UECARDEN2025_API UClass* Z_Construct_UClass_AMyActorClase1();
UECARDEN2025_API UClass* Z_Construct_UClass_AMyActorClase1_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden2025();
// End Cross Module References

// Begin Class AMyActorClase1
void AMyActorClase1::StaticRegisterNativesAMyActorClase1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorClase1);
UClass* Z_Construct_UClass_AMyActorClase1_NoRegister()
{
	return AMyActorClase1::StaticClass();
}
struct Z_Construct_UClass_AMyActorClase1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorClase1.h" },
		{ "ModuleRelativePath", "MyActorClase1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorClase1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActorClase1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorClase1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorClase1_Statics::ClassParams = {
	&AMyActorClase1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorClase1_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorClase1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorClase1()
{
	if (!Z_Registration_Info_UClass_AMyActorClase1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorClase1.OuterSingleton, Z_Construct_UClass_AMyActorClase1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorClase1.OuterSingleton;
}
template<> UECARDEN2025_API UClass* StaticClass<AMyActorClase1>()
{
	return AMyActorClase1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorClase1);
AMyActorClase1::~AMyActorClase1() {}
// End Class AMyActorClase1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArden2025_UECArden2025_Source_UECArden2025_MyActorClase1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorClase1, AMyActorClase1::StaticClass, TEXT("AMyActorClase1"), &Z_Registration_Info_UClass_AMyActorClase1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorClase1), 1509320261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArden2025_UECArden2025_Source_UECArden2025_MyActorClase1_h_3531506390(TEXT("/Script/UECArden2025"),
	Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArden2025_UECArden2025_Source_UECArden2025_MyActorClase1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArden2025_UECArden2025_Source_UECArden2025_MyActorClase1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
