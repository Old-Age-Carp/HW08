// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaProject/Public/BigCoinItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBigCoinItem() {}

// Begin Cross Module References
SPARTAPROJECT_API UClass* Z_Construct_UClass_ABigCoinItem();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ABigCoinItem_NoRegister();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ACoinItem();
UPackage* Z_Construct_UPackage__Script_SpartaProject();
// End Cross Module References

// Begin Class ABigCoinItem
void ABigCoinItem::StaticRegisterNativesABigCoinItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABigCoinItem);
UClass* Z_Construct_UClass_ABigCoinItem_NoRegister()
{
	return ABigCoinItem::StaticClass();
}
struct Z_Construct_UClass_ABigCoinItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BigCoinItem.h" },
		{ "ModuleRelativePath", "Public/BigCoinItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABigCoinItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABigCoinItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACoinItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABigCoinItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABigCoinItem_Statics::ClassParams = {
	&ABigCoinItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABigCoinItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ABigCoinItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABigCoinItem()
{
	if (!Z_Registration_Info_UClass_ABigCoinItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABigCoinItem.OuterSingleton, Z_Construct_UClass_ABigCoinItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABigCoinItem.OuterSingleton;
}
template<> SPARTAPROJECT_API UClass* StaticClass<ABigCoinItem>()
{
	return ABigCoinItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABigCoinItem);
ABigCoinItem::~ABigCoinItem() {}
// End Class ABigCoinItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_BigCoinItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABigCoinItem, ABigCoinItem::StaticClass, TEXT("ABigCoinItem"), &Z_Registration_Info_UClass_ABigCoinItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABigCoinItem), 333089905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_BigCoinItem_h_1124153969(TEXT("/Script/SpartaProject"),
	Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_BigCoinItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Desktop_SpartaProject_Source_SpartaProject_Public_BigCoinItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
