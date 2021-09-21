/** -----------------------------------------------------------------------------
 *
 * @file  		Executive.h
 * @author 		Nicholas Nguyen
 * Assignment:  EECS-268 Lab 2
 * @brief 		Executive Header file. Declares pointers for container, temp circle, rectangle, and triangle
 * @date 		20 September 2021
 *
 ---------------------------------------------------------------------------- **/

#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include "ShapeContainer.h"

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

#include <fstream>
#include <string>


class Executive
{
	public:

		// methods

		/**
		 * @pre 	none
		 * @post 	Initializes member values, defines file_name
		 * @param	-a, filename from argv[1]
		 * @return	none
		 **/
		Executive( string a );

		/**
		 * @pre 	End of main & existence of Executive object
		 * @post 	deallocates anything on the heap
		 * @param   none
		 * @return	none
		 **/
		~Executive();

		/**
		 * @pre 	none
		 * @post 	Opens and reads file. Provides functionality for commands in input.txt
		 * @param	none
		 * @return	none
		 **/
		void run();

		// members

		ifstream in_file;

		ShapeContainer* container;
		Circle* temp_circle;
		Triangle* temp_triangle;
		Rectangle* temp_rectangle;

	private:

		// members

		int amt_shapes;
		string file_name;
};

#endif
