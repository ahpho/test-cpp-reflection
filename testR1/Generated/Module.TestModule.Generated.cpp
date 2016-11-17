/* ----------------------------------------------------------------------------
** GENERATED SOURCE FILE
** Do not modify the contents of this file.
**
** Ursine Meta Generator v1.0
** --------------------------------------------------------------------------*/


#include "E:\work\work_cpp\test-cpp-reflection\testR1\TestR\TestReflectionModule.h"

///////////////////////////////////////////////////////////////////////////////
// Module Files
///////////////////////////////////////////////////////////////////////////////


#include "E:\work\work_cpp\test-cpp-reflection\testR1\Generated\TestR\TestProperties.Generated.h"
#include "E:\work\work_cpp\test-cpp-reflection\testR1\Generated\TestR\TestTypes.Generated.h"

namespace m = ursine::meta;

meta_generated::ModuleTestModule::ModuleTestModule(m::ReflectionDatabase &db)
    : ReflectionModule( db )
{
    ///////////////////////////////////////////////////////////////////////////
    // External Allocation
    ///////////////////////////////////////////////////////////////////////////
    
    ///////////////////////////////////////////////////////////////////////////
    // Module File Allocation
    ///////////////////////////////////////////////////////////////////////////
    
    AllocateModuleFileTestModuleTestR_TestProperties( db );
    AllocateModuleFileTestModuleTestR_TestTypes( db );
}

meta_generated::ModuleTestModule::~ModuleTestModule(void)
{
    ///////////////////////////////////////////////////////////////////////////
    // Module File Definition
    ///////////////////////////////////////////////////////////////////////////
    
    DefineModuleFileTestModuleTestR_TestProperties( db );
    DefineModuleFileTestModuleTestR_TestTypes( db );
}