//This file is an example of an interface


#ifndef SHAPE_H
#define SHAPE_H

class Shape
{

    public:
    
    //virtual double area() const; 
        //allows for other types of shapes to use this, but doesn't state a definition because different shapes have different area equations.
    
    virtual doulbe area() const = 0; //pure virtual method. Method without definiton.
        //This REQUIRES that the shapes make their own definiton.
};

#endif