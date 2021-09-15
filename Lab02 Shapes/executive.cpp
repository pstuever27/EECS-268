#include "executive.h"
#include <iostream>
#include <fstream>

executive::executive(std::string fileName)
{
    int size;
    std::string inFile;
    inFile.open(fileName);

    if(inFile.is_open())
    {
        inFile >> size;
        for(int i = 0; i<size; i++)
        {
            std::string filetype = null;
            inFile >> filetype;
            
            if(filetype == 'ADD')
            {
                int index = 0;
                inFile >> index;
                //need to figure out how to get information into each needed position
            }
        }
    }

}
executive::~executive()
{
    delete[] executive;
    //not sure this is correct 
}