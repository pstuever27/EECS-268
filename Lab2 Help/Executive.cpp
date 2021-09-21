/** -----------------------------------------------------------------------------
 *
 * @file  		Executive.cpp
 * @author 		Nicholas Nguyen
 * Assignment:  EECS-268 Lab 2
 * @brief 		Executive implementation file. Initializes member variables and defines the constructor, deconstructor, and run functions.
 * @date 		20 September 2021
 *
 ---------------------------------------------------------------------------- **/

#include "Executive.h"

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>

using namespace std;

Executive::Executive( string a )
{
	file_name = a;

	container = nullptr;
	temp_circle = nullptr;
	temp_triangle = nullptr;
	temp_rectangle = nullptr;
}

Executive::~Executive()
{
	if( temp_circle != nullptr )
	{
		delete temp_circle;
	}

	if( temp_triangle != nullptr )
	{
		delete temp_triangle;
	}

	if( temp_rectangle != nullptr )
	{
		delete temp_rectangle;
	}

	if( container != nullptr )
	{
		delete container;
	}

	if( in_file.is_open() )
	{
		in_file.close();
	}
}

void Executive::run()
{
	in_file.open( file_name );

	double temp_radius, temp_base, temp_height, temp_length, temp_width = 0;
	int temp_index = 0;

	string action, type = "";

	if( in_file.is_open() )
	{
		in_file >> amt_shapes;

		if( amt_shapes > 0 )
		{
			container = new ShapeContainer( amt_shapes );

			while( action != "EXIT" )
			{
				in_file >> action;
				in_file >> temp_index;

				if( action == "ADD" )
				{

					in_file >> type;

					if( type == "CIR" )
					{
						in_file >> temp_radius;

						if( temp_index >= 0 && temp_index < amt_shapes )
						{
							temp_circle = new Circle( temp_radius );
						}

						try
						{
							container->add( temp_circle, temp_index );
						}

						catch( exception& e )
						{
							cout << e.what();
						}
					}

					else if( type == "TRI" )
					{
						in_file >> temp_base >> temp_height;

						if( temp_index >= 0 && temp_index < amt_shapes )
						{
							temp_triangle = new Triangle( temp_base, temp_height );
						}

						try
						{
							container->add( temp_triangle, temp_index );
						}

						catch( exception& e )
						{
							cout << e.what();
						}
					}

					else if( type == "REC" )
					{
						in_file >> temp_length >> temp_width;

						if( temp_index >= 0 && temp_index < amt_shapes )
						{
							temp_rectangle = new Rectangle( temp_length, temp_width );
						}

						try
						{
							container->add( temp_rectangle, temp_index );
						}

						catch( exception& e )
						{
							cout << e.what();
						}
					}
				}

				if( action == "PRINT" )
				{
					/**
					 * Shape at index 0: Circle area = 95.0331			// follow
					 * Shape at index 99: Does not exist				// this
					 * Shape at index 2: Rectangle area = 212.625		// cool
					 * Exiting...										// format
					 **/


					cout << "Shape at index " << temp_index << " : ";

					try
					{
						cout << container->shapeName( temp_index ) << " area = " << container->area( temp_index ) << '\n';
					}

					catch( exception& e )
					{
						cout << e.what();
					}
				}

				if( action == "DELETE" )
				{
					try
					{
						container->remove( temp_index );
					}

					catch( exception& e )
					{
						cout << e.what();
					}
				}
			}

			cout << "Exiting...\n";

		}

		else
		{
			cout << "Cannot create an array of Shapes with size " << amt_shapes << ". Exiting...\n";
		}
	}

	else
	{
		cout << '"' << file_name << '"' << " could not be opened. Check to see if it exists or is spelled correctly.\n";
	}
}
