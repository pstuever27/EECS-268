//used for boardwork, make the function

template <typename T>
    ListInterface<T>* intersection(ListInterface<T>& listA, ListInterface<T>& listB)
    {
        //Assume that each contains unique value(in other words, no repeats)
        //Create a nwe LinkedList that will contain the intersection of the two lists.
        ListInterface<T>* intersect = new ListInterface<T>();
        int A_length, B_length;
        int counter = 0;
        T A_entry = listA->getEntry(0);
        T B_entry = listB->getEntry(0);
        int A_length = listA->getLength();
        int B_length = listB->getLength();
        for(int i = 0; i<A_length; i++)
        {
            A_entry = listA->getEntry(i);
            for(int j = 0; j<B_length; j++)
            {
                B_entry = listB->getEntry(j);

                if(A_entry == b_entry)
                {
                    intersect->insert(counter, A_entry);
                    counter++;
                }
            }
        }

    }