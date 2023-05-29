void insertSort(int *arr, const int arrLength)
{
    for(int i = 1; i < arrLength; ++i)
    {
        int sorted = i - 1;
        while(sorted > -1 && arr[sorted] > arr[sorted + 1])
        {
            int temp = arr[sorted];
            arr[sorted] = arr[sorted + 1];
            arr[sorted + 1] = temp;
            --sorted;
        }
    }
}