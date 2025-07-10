// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Inv_InventoryItem.h"

#ifdef MKINVENTORY_Inv_InventoryItem_generated_h
#error "Inv_InventoryItem.generated.h already included, missing '#pragma once' in Inv_InventoryItem.h"
#endif
#define MKINVENTORY_Inv_InventoryItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_InventoryItem *******************************************************
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();

#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_InventoryItem(); \
	friend struct Z_Construct_UClass_UInv_InventoryItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_InventoryItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MKInventory"), Z_Construct_UClass_UInv_InventoryItem_NoRegister) \
	DECLARE_SERIALIZER(UInv_InventoryItem)


#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_InventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_InventoryItem(UInv_InventoryItem&&) = delete; \
	UInv_InventoryItem(const UInv_InventoryItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_InventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_InventoryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_InventoryItem) \
	NO_API virtual ~UInv_InventoryItem();


#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h_12_PROLOG
#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_InventoryItem;

// ********** End Class UInv_InventoryItem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_Items_Inv_InventoryItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
