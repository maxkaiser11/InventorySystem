// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/HUD/Inv_HUDWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_HUDWidget() {}

// ********** Begin Cross Module References ********************************************************
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_HUDWidget();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_HUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MKInventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_HUDWidget ***********************************************************
void UInv_HUDWidget::StaticRegisterNativesUInv_HUDWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_HUDWidget;
UClass* UInv_HUDWidget::GetPrivateStaticClass()
{
	using TClass = UInv_HUDWidget;
	if (!Z_Registration_Info_UClass_UInv_HUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_HUDWidget"),
			Z_Registration_Info_UClass_UInv_HUDWidget.InnerSingleton,
			StaticRegisterNativesUInv_HUDWidget,
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
	return Z_Registration_Info_UClass_UInv_HUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_HUDWidget_NoRegister()
{
	return UInv_HUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_HUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/HUD/Inv_HUDWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_HUDWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_HUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_HUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MKInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_HUDWidget_Statics::ClassParams = {
	&UInv_HUDWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_HUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_HUDWidget()
{
	if (!Z_Registration_Info_UClass_UInv_HUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_HUDWidget.OuterSingleton, Z_Construct_UClass_UInv_HUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_HUDWidget.OuterSingleton;
}
UInv_HUDWidget::UInv_HUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_HUDWidget);
UInv_HUDWidget::~UInv_HUDWidget() {}
// ********** End Class UInv_HUDWidget *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_HUD_Inv_HUDWidget_h__Script_MKInventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_HUDWidget, UInv_HUDWidget::StaticClass, TEXT("UInv_HUDWidget"), &Z_Registration_Info_UClass_UInv_HUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_HUDWidget), 3878676721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_HUD_Inv_HUDWidget_h__Script_MKInventory_2313742253(TEXT("/Script/MKInventory"),
	Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_HUD_Inv_HUDWidget_h__Script_MKInventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Widgets_HUD_Inv_HUDWidget_h__Script_MKInventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
