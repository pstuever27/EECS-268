//Boardwork 1
//Create a recursive method that prints an array

void recArrPrint(char* arr, int size)
{
    if(size == 0)
    {
        return;
    }
    else{
        cout << arr[size-1] << endl;
        recArrPrint(arr, (size-1));
    }
}

//Boardwork 2 
//side quest!

char* ptrA = new char[4]
