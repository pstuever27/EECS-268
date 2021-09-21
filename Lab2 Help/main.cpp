/** -----------------------------------------------------------------------------
 *
 * @file  		main.cpp
 * @author 		Nicholas Nguyen
 * Assignment:  EECS-268 Lab 2
 * @brief 		Creates stack allocated Executive object and runs it.
 * @date 		20 September 2021
 *
 ---------------------------------------------------------------------------- **/

#include <iostream>
#include "Executive.h"

using namespace std;

int main( int argc, char* argv[] )
{
	if( argc < 2 ) { cout << "Incorrect number of parameters. Exiting.\n"; }
	else
	{
		Executive exec( argv[1] );
		exec.run();
	}

	return( 0 );
}