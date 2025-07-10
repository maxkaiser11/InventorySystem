// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Inv_InventoryItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InventoryItem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem();
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MKInventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_InventoryItem *******************************************************
void UInv_InventoryItem::StaticRegisterNativesUInv_InventoryItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InventoryItem;
UClass* UInv_InventoryItem::GetPrivateStaticClass()
{
	using TClass = UInv_InventoryItem;
	if (!Z_Registration_Info_UClass_UInv_InventoryItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InventoryItem"),
			Z_Registration_Info_UClass_UInv_InventoryItem.InnerSingleton,
			StaticRegisterNativesUInv_InventoryItem,
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
	return Z_Registration_Info_UClass_UInv_InventoryItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister()
{
	return UInv_InventoryItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Inv_InventoryItem.h" },
		{ "ModuleRelativePath", "Public/Items/Inv_InventoryItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_InventoryItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MKInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryItem_Statics::ClassParams = {
	&UInv_InventoryItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryItem()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryItem.OuterSingleton, Z_Construct_UClass_UInv_InventoryItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryItem.OuterSingleton;
}
UInv_InventoryItem::UInv_InventoryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryItem);
UInv_InventoryItem::~UInv_InventoryItem() {}
// ********** End Class UInv_InventoryItem *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h__Script_MKInventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryItem, UInv_InventoryItem::StaticClass, TEXT("UInv_InventoryItem"), &Z_Registration_Info_UClass_UInv_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryItem), 3862232517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h__Script_MKInventory_1431192316(TEXT("/Script/MKInventory"),
	Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h__Script_MKInventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h__Script_MKInventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
