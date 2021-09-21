/** -----------------------------------------------------------------------------
 *
 * @file  		ShapeContainer.cpp
 * @author 		Nicholas Nguyen
 * Assignment:  EECS-268 Lab 2
 * @brief 		Shape Container implementation file. Defines public/private members/methods. Contains function definitions for input.txt commands
 * @date 		20 September 2021
 *
 ---------------------------------------------------------------------------- **/

#include "ShapeContainer.h"

#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

ShapeContainer::ShapeContainer( int size )
{
	m_size = size;

	m_arrayOfShapes = nullptr;

	if( size > 0 )
	{
		m_arrayOfShapes = new Shape*[ m_size ];
	}
}

ShapeContainer::~ShapeContainer()
{
	for( int i = 0; i < m_size; ++i )
	{
		m_arrayOfShapes[ i ] = nullptr;
	}

	if( m_arrayOfShapes != nullptr )
	{
		delete[] m_arrayOfShapes;
	}
}

double ShapeContainer::area( int index ) const
{
	if( m_arrayOfShapes[ index ] == nullptr )
	{
		throw( runtime_error( "Shape does not exist.\n" ) );
	}

	else if( index >= m_size || index < 0 )
	{
		throw( ( "Cannot return area of shape. Given index is out of range.\n" ) );
	}

	else{ return( m_arrayOfShapes[ index ]->area() ); }
}

string ShapeContainer::shapeName( int index ) const
{
	if( m_arrayOfShapes[ index ] == nullptr )
	{
		throw( runtime_error( "Shape does not exist.\n" ) );
	}

	if( index >= m_size || index < 0 )
	{
		throw( runtime_error( "Cannot return name of shape. Given index is out of range\n" ) );
	}

	else
	{
		return( m_arrayOfShapes[ index ]->shapeName() );
	}
}

void ShapeContainer::add( Shape* shapePtr, int index )
{
	if( shapePtr == nullptr )
	{
		throw( runtime_error( "Cannot add null shape.\n" ) );
	}

	else if( index >= m_size || index < 0 )
	{
		throw( runtime_error( "Cannot add shape. Given index is out of range.\n" ) );
	}

	else
	{
		m_arrayOfShapes[ index ] = shapePtr;
	}

}

void ShapeContainer::remove( int index )
{
	if( m_arrayOfShapes[ index ] == nullptr )
	{
		throw( runtime_error( "Cannot remove shape. Shape does not exist.\n" ) );
	}

	else if( index >= m_size || index < 0 )
	{
		throw( runtime_error( "Cannot remove shape. Given index is out of range.\n" ) );
	}

	else
	{
		m_arrayOfShapes[ index ] = nullptr;
	}

}
