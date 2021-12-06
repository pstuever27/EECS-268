//MinHeap.h class

template <typename T>
class MinHeap
{
    private:
    T* m_arr;
    int m_heapSize;
    int m_arraySize;
    void resize(); //double the size of the array
    void upheap(int index);
    void downheap(int index);

    public:
    MinHeap(); //sets m_heapsize to 0 and initalizes the array to some small size
    ~MinHeap();
    void add(T entry);
    void remove();
    T peek() const; //returns the top/root of the heap
    bool isEmpty();
};
#include "MinHeap.cpp"