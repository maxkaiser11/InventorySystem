// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryManagement/Components/Inv_InventoryComponent.h"

#ifdef MKINVENTORY_Inv_InventoryComponent_generated_h
#error "Inv_InventoryComponent.generated.h already included, missing '#pragma once' in Inv_InventoryComponent.h"
#endif
#define MKINVENTORY_Inv_InventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInv_InventoryItem;

// ********** Begin Delegate FInventoryItemChange **************************************************
#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_13_DELEGATE \
MKINVENTORY_API void FInventoryItemChange_DelegateWrapper(const FMulticastScriptDelegate& InventoryItemChange, UInv_InventoryItem* Item);


// ********** End Delegate FInventoryItemChange ****************************************************

// ********** Begin Class UInv_InventoryComponent **************************************************
MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister();

#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_InventoryComponent(); \
	friend struct Z_Construct_UClass_UInv_InventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_InventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MKInventory"), Z_Construct_UClass_UInv_InventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UInv_InventoryComponent)


#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_InventoryComponent(UInv_InventoryComponent&&) = delete; \
	UInv_InventoryComponent(const UInv_InventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_InventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_InventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInv_InventoryComponent) \
	NO_API virtual ~UInv_InventoryComponent();


#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_15_PROLOG
#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_InventoryComponent;

// ********** End Class UInv_InventoryComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
