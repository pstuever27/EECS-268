#include <iostream>
#include <Shape.h>

//imagine there's some classes named trangle, circle, and rectangle that have area definitons for themselves
int main()
{
    Triangle tri;
    Circle cir;
    Rectangle rec;

    Shape myshape; //Error, can't make a shape object

    Shape* myShapeptr = nullptr; //FINE :), you CAN do pointers and references
    myShapeptr = new Triangle(5.5, 7.5);
    std::cout << myShapeptr->area() << '\n'; //will run Triangle's definiton

            tri.area();
            cir.area();
            rec.area();
            
            shape.area(); //Error, not defined since you can't make a shape object

}
