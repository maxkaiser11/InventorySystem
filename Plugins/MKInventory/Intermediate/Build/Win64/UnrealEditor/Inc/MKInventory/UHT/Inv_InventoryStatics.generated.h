// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryManagement/Utils/Inv_InventoryStatics.h"

#ifdef MKINVENTORY_Inv_InventoryStatics_generated_h
#error "Inv_InventoryStatics.generated.h already included, missing '#pragma once' in Inv_InventoryStatics.h"
#endif
#define MKINVENTORY_Inv_InventoryStatics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UInv_InventoryComponent;

// ********** Begin Class UInv_InventoryStatics ****************************************************
#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInventoryComponent);


MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryStatics_NoRegister();

#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_InventoryStatics(); \
	friend struct Z_Construct_UClass_UInv_InventoryStatics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MKINVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryStatics_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_InventoryStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MKInventory"), Z_Construct_UClass_UInv_InventoryStatics_NoRegister) \
	DECLARE_SERIALIZER(UInv_InventoryStatics)


#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_InventoryStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_InventoryStatics(UInv_InventoryStatics&&) = delete; \
	UInv_InventoryStatics(const UInv_InventoryStatics&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_InventoryStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_InventoryStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_InventoryStatics) \
	NO_API virtual ~UInv_InventoryStatics();


#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h_13_PROLOG
#define FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h_16_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_InventoryStatics;

// ********** End Class UInv_InventoryStatics ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UE5Projects_InventorySystem_Plugins_MKInventory_Source_MKInventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
