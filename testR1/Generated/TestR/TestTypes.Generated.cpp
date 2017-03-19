/* ----------------------------------------------------------------------------
** GENERATED SOURCE FILE
** Do not modify the contents of this file.
**
** Ursine Meta Generator v1.0
** --------------------------------------------------------------------------*/


#include "D:\work\Github\test-cpp-reflection\testR1\Generated\TestR\TestTypes.Generated.h"
#include "D:\work\Github\test-cpp-reflection\testR1\TestR/TestTypes.h"

#include <ReflectionDatabase.h>

namespace m = ursine::meta;

void meta_generated::AllocateModuleFileTestModuleTestR_TestTypes(m::ReflectionDatabase &db)
{
    ///////////////////////////////////////////////////////////////////////////
    // Class Allocation
    ///////////////////////////////////////////////////////////////////////////
    
    {
        { // Base Type
            auto id = db.AllocateType( "SoundEffect" );
            auto &type = db.types[ id ];

            m::TypeInfo<SoundEffect>::Register( id, type, true );
        }
        
        
    }
    
    {
        { // Base Type
            auto id = db.AllocateType( "ComplexType" );
            auto &type = db.types[ id ];

            m::TypeInfo<ComplexType>::Register( id, type, true );
        }
        
        
    }
    
    ///////////////////////////////////////////////////////////////////////////
    // Enum Allocation
    ///////////////////////////////////////////////////////////////////////////
    
    {
        { // Base Type
            auto id = db.AllocateType( "TestEnum" );
            auto &type = db.types[ id ];

            m::TypeInfo<TestEnum>::Register( id, type, true );
        }
        
        
    }
    
}

void meta_generated::DefineModuleFileTestModuleTestR_TestTypes(m::ReflectionDatabase &db)
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
        auto typeID = typeidof( TestEnum );

        if (typeID != m::InvalidTypeID && !m::TypeInfo<TestEnum>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.SetEnum<TestEnum>( "TestEnum", {
                 
                    { "One", TestEnum::One }, 
                 
                    { "Two", TestEnum::Two }, 
                 
                    { "Three", TestEnum::Three }, 
                 
                    { "Four", TestEnum::Four }, 
                 
                    { "Five", TestEnum::Five }, 
                 
                    { "Eighty", TestEnum::Eighty } 
                
            } );

            m::TypeInfo<TestEnum>::Defined = true;
        }
    }
    
    ///////////////////////////////////////////////////////////////////////////
    // Class Definitions
    ///////////////////////////////////////////////////////////////////////////
    
    /**
     * SoundEffect
     */
    {
        auto typeID = typeidof( SoundEffect );

        if (typeID != m::InvalidTypeID && !m::TypeInfo<SoundEffect>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.LoadBaseClasses( db, typeID, { 
                 
            } );
            

            // Constructors
            
            // Dynamic Constructors
            
            // Fields
            
            type.AddField<SoundEffect, float>( "volume",
                &SoundEffect::volume,
                &SoundEffect::volume,
                {
                    std::make_pair( typeof( Range ), m::MetaPropertyInitializer<Range>( 0.0f,100.0f ) ), 
std::make_pair( typeof( Slider ), m::MetaPropertyInitializer<Slider>( SliderType::Horizontal ) )

                }
            );
            
            // Static Fields
            
            // Methods
            
            type.AddMethod( "Load",
                static_cast<void(SoundEffect::*)(const std::string &)>( &SoundEffect::Load ),
                {
                    
                }
            );
            
            // Static Methods
            

            m::TypeInfo<SoundEffect>::Defined = true;
        }
    }
    /**
     * ComplexType
     */
    {
        auto typeID = typeidof( ComplexType );

        if (typeID != m::InvalidTypeID && !m::TypeInfo<ComplexType>::Defined)
        {
            auto &type = db.types[ typeID ];

            type.meta = {
                
            };

            type.LoadBaseClasses( db, typeID, { 
                 
            } );
            

            // Constructors
            
            type.AddConstructor<ComplexType, false, false>(
                {
                    
                }
            );
            
            // Dynamic Constructors
            
            type.AddConstructor<ComplexType, true, false>( 
                {
                    
                }
            );
            
            // Fields
            
            type.AddField<ComplexType, std::string>( "stringValue",
                &ComplexType::stringValue,
                &ComplexType::stringValue,
                {
                    
                }
            );
            
            type.AddField<ComplexType, int>( "intValue",
                &ComplexType::intValue,
                &ComplexType::intValue,
                {
                    
                }
            );
            
            type.AddField<ComplexType, float>( "floatValue",
                &ComplexType::floatValue,
                &ComplexType::floatValue,
                {
                    
                }
            );
            
            type.AddField<ComplexType, double>( "doubleValue",
                &ComplexType::doubleValue,
                &ComplexType::doubleValue,
                {
                    
                }
            );
            
            type.AddField<ComplexType, SoundEffect>( "soundEffect",
                &ComplexType::soundEffect,
                &ComplexType::soundEffect,
                {
                    
                }
            );
            
            type.AddField<ComplexType, ursine::Array<int>>( "arrayValue",
                &ComplexType::arrayValue,
                &ComplexType::arrayValue,
                {
                    
                }
            );
            
            type.AddField<ComplexType, TestEnum>( "enumValue",
                &ComplexType::enumValue,
                &ComplexType::enumValue,
                {
                    
                }
            );
            
            // Static Fields
            
            // Methods
            
            // Static Methods
            

            m::TypeInfo<ComplexType>::Defined = true;
        }
    }
}
