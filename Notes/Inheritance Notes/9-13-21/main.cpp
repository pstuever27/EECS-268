/*Boardwork 2
    Assume you are in main.cpp. Define a function that takes an array of Shape pointers and its size.
    You will return a pointer to the shape with the largest area.
*/

Shape* BiggestArray(Shape*[] array, int size)
{
    int BSI;
    double Barea = 0;
    for(int i = 0; i<size; i++)
    {
        if(array[i]->area() > Barea)
        {
            BSI = i;
            Barea = array[i]->area();
        }

    }
    return(array[BSI]);
}

int main()
{
    //random garbage code that will eventually call the above function
    return(0);
}