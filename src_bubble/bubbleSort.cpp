void bubbleSort(int* arr, const int arrlength)
{
    int length = arrlength;
    while(length != 0)
    {
        int max_index = 0;

        for(int i = 1; i < length; ++i)
        {
            if (arr[i] < arr[i - 1])
            {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;

                
            }
            max_index = i; 
        }
        length = max_index;
    }
}