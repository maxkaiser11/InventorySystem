// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Utils/Inv_WidgetsUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_WidgetsUtils() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_WidgetsUtils();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_WidgetsUtils_NoRegister();
UPackage* Z_Construct_UPackage__Script_MKInventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_WidgetsUtils ********************************************************
void UInv_WidgetsUtils::StaticRegisterNativesUInv_WidgetsUtils()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_WidgetsUtils;
UClass* UInv_WidgetsUtils::GetPrivateStaticClass()
{
	using TClass = UInv_WidgetsUtils;
	if (!Z_Registration_Info_UClass_UInv_WidgetsUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_WidgetsUtils"),
			Z_Registration_Info_UClass_UInv_WidgetsUtils.InnerSingleton,
			StaticRegisterNativesUInv_WidgetsUtils,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInv_WidgetsUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_WidgetsUtils_NoRegister()
{
	return UInv_WidgetsUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_WidgetsUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Utils/Inv_WidgetsUtils.h" },
		{ "ModuleRelativePath", "Public/Widgets/Utils/Inv_WidgetsUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_WidgetsUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_WidgetsUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MKInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_WidgetsUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_WidgetsUtils_Statics::ClassParams = {
	&UInv_WidgetsUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_WidgetsUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_WidgetsUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_WidgetsUtils()
{
	if (!Z_Registration_Info_UClass_UInv_WidgetsUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_WidgetsUtils.OuterSingleton, Z_Construct_UClass_UInv_WidgetsUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_WidgetsUtils.OuterSingleton;
}
UInv_WidgetsUtils::UInv_WidgetsUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_WidgetsUtils);
UInv_WidgetsUtils::~UInv_WidgetsUtils() {}
// ********** End Class UInv_WidgetsUtils **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Utils_Inv_WidgetsUtils_h__Script_MKInventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_WidgetsUtils, UInv_WidgetsUtils::StaticClass, TEXT("UInv_WidgetsUtils"), &Z_Registration_Info_UClass_UInv_WidgetsUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_WidgetsUtils), 1512912967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Utils_Inv_WidgetsUtils_h__Script_MKInventory_3703775951(TEXT("/Script/MKInventory"),
	Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Utils_Inv_WidgetsUtils_h__Script_MKInventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_Utils_Inv_WidgetsUtils_h__Script_MKInventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
