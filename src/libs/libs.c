/*
 *  Copyright (c) 2020-2022 Thakee Nathees
 *  Copyright (c) 2021-2022 Pocketlang Contributors
 *  Distributed Under The MIT License
 */

#ifndef PK_AMALGAMATED
#include "libs.h"
#endif

// Standard libraries.

void registerModuleMath(PKVM* vm);
void registerModuleTypes(PKVM* vm);
void registerModuleTime(PKVM* vm);
void registerModuleIO(PKVM* vm);
void registerModulePath(PKVM* vm);
void registerModuleOS(PKVM* vm);
void registerModuleJson(PKVM* vm);
void registerModuleDummy(PKVM* vm);
void registerModuleTerm(PKVM* vm);

void cleanupModuleTerm(PKVM* vm);

// Registers the modules.
void registerLibs(PKVM* vm) {
#if PK_LIB_MATH
  registerModuleMath(vm);
#endif
#if PK_LIB_TYPES
  registerModuleTypes(vm);
#endif
#if PK_LIB_TIME
  registerModuleTime(vm);
#endif
#if PK_LIB_IO
  registerModuleIO(vm);
#endif
#if PK_LIB_PATH
  registerModulePath(vm);
#endif
#if PK_LIB_OS
  registerModuleOS(vm);
#endif
#if PK_LIB_JSON
  registerModuleJson(vm);
#endif
#if PK_LIB_TERM
  registerModuleTerm(vm);
#endif

  registerModuleDummy(vm);
}

// Cleanup the modules.
void cleanupLibs(PKVM* vm) {
#if PK_LIB_TERM
  cleanupModuleTerm(vm);
#endif
}
