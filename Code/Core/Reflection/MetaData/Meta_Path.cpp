// Meta_Path
//------------------------------------------------------------------------------

// Includes
//------------------------------------------------------------------------------
#include "Core/PrecompiledHeader.h"
#include "Meta_Path.h"

// Reflection
//------------------------------------------------------------------------------
REFLECT_BEGIN( Meta_Path, IMetaData, MetaNone() )
REFLECT_END( Meta_Path )

// CONSTRUCTOR
//------------------------------------------------------------------------------
Meta_Path::Meta_Path( bool relative )
	: m_Relative( relative )
{
}

// DESTRUCTOR
//------------------------------------------------------------------------------
Meta_Path::~Meta_Path()
{
}

//------------------------------------------------------------------------------
