// Copyright Epic Games, Inc. All Rights Reserved.

#include "MKInventory.h"

#define LOCTEXT_NAMESPACE "FMKInventoryModule"

DEFINE_LOG_CATEGORY(LogInventory);

void FMKInventoryModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FMKInventoryModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMKInventoryModule, MKInventory)