void choiceSort(int *arr, const int arrLength)
{
    for(int i = 0; i < arrLength; ++i)
    {
        int index_minimal_value = i;
        for(int j = i + 1; j < arrLength; ++j)
        {
            if (arr[index_minimal_value] > arr[j])
            {
                index_minimal_value = j;
            }
        }
        if (index_minimal_value != i)
        {
            int temp = arr[i];
            arr[i] = arr[index_minimal_value];
            arr[index_minimal_value] = temp;
        }
    }
}