/* ----------------------------------------------------------------------------
** GENERATED SOURCE FILE
** Do not modify the contents of this file.
**
** Ursine Meta Generator v1.0
** --------------------------------------------------------------------------*/


#include "C:\Users\kuangsihao1\Desktop\testR1\testR1\Generated\TestR\TestProperties.Generated.h"
#include "C:\Users\kuangsihao1\Desktop\testR1\testR1\TestR/TestProperties.h"

#include <ReflectionDatabase.h>

namespace m = ursine::meta;

void meta_generated::AllocateModuleFileTestModuleTestR_TestProperties(m::ReflectionDatabase &db)
{
    ///////////////////////////////////////////////////////////////////////////
    // Class Allocation
    ///////////////////////////////////////////////////////////////////////////
    
    {
        { // Base Type
            auto id = db.AllocateType( "Slider" );
            auto &type = db.types[ id ];

            m::TypeInfo<Slider>::Register( id, type, true );
        }
        
        
    }
    
    {
        { // Base Type
            auto id = db.AllocateType( "Range" );
            auto &type = db.types[ id ];

            m::TypeInfo<Range>::Register( id, type, true );
        }
        
        
    }
    
    ///////////////////////////////////////////////////////////////////////////
    // Enum Allocation
    ///////////////////////////////////////////////////////////////////////////
    
    {
        { // Base Type
            auto id = db.AllocateType( "SliderType" );
            auto &type = db.types[ id ];

            m::TypeInfo<SliderType>::Register( id, type, true );
        }
        
        
    }
    
}

void meta_generated::DefineModuleFileTestModuleTestR_TestProperties(m::ReflectionDatabase &db)
{
    ///////////////////////////////////////////////////////////////////////////
    // Global Definitions
    ///////////////////////////////////////////////////////////////////////////
    
    ///////////////////////////////////////////////////////////////////////////
    // Global Functions
    ///////////////////////////////////////////////////////////////////////////
    
    ///////////////////////////////////////////////////////////////////////////
    // Enum Definitions
    ///////////////////////////////////////////////////////////////////////////
    
    {
        auto typeID = typeidof( SliderType );

        if (typeID != m::InvalidTypeID && !m::TypeInfo<SliderType>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.SetEnum<SliderType>( "SliderType", {
                 
                    { "Horizontal", SliderType::Horizontal }, 
                 
                    { "Vertical", SliderType::Vertical } 
                
            } );

            m::TypeInfo<SliderType>::Defined = true;
        }
    }
    
    ///////////////////////////////////////////////////////////////////////////
    // Class Definitions
    ///////////////////////////////////////////////////////////////////////////
    
    /**
     * Slider
     */
    {
        auto typeID = typeidof( Slider );

        if (typeID != m::InvalidTypeID && !m::TypeInfo<Slider>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.LoadBaseClasses( db, typeID, { 
                 
            } );
            

            // Constructors
            
            type.AddConstructor<Slider, false, false, SliderType>(
                {
                    
                }
            );
            
            // Dynamic Constructors
            
            type.AddConstructor<Slider, true, false, SliderType>( 
                {
                    
                }
            );
            
            // Fields
            
            type.AddField<Slider, SliderType>( "type",
                &Slider::type,
                &Slider::type,
                {
                    
                }
            );
            
            // Static Fields
            
            // Methods
            
            // Static Methods
            

            m::TypeInfo<Slider>::Defined = true;
        }
    }
    /**
     * Range
     */
    {
        auto typeID = typeidof( Range );

        if (typeID != m::InvalidTypeID && !m::TypeInfo<Range>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.LoadBaseClasses( db, typeID, { 
                 
            } );
            

            // Constructors
            
            type.AddConstructor<Range, false, false, float, float>(
                {
                    
                }
            );
            
            // Dynamic Constructors
            
            type.AddConstructor<Range, true, false, float, float>( 
                {
                    
                }
            );
            
            // Fields
            
            type.AddField<Range, float>( "min",
                &Range::min,
                &Range::min,
                {
                    
                }
            );
            
            type.AddField<Range, float>( "max",
                &Range::max,
                &Range::max,
                {
                    
                }
            );
            
            // Static Fields
            
            // Methods
            
            // Static Methods
            

            m::TypeInfo<Range>::Defined = true;
        }
    }
}
