int partHoaraSort(int *arr, int left, int right)
{
    int pivot = arr[(left + right) / 2];
    while (left<=right)
    {
        while (arr[left] < pivot){++left;}
        while (arr[right] > pivot){--right;}

        if (left <= right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            ++left;
            --right;
        }
    }
    return left;
}


void HoaraSort(int *arr, int start, int end)
{
    if (start >= end){return;}
    int rightStart = partHoaraSort(arr, start, end);
    HoaraSort(arr, start, rightStart - 1);
    HoaraSort(arr, rightStart, end);
}

void HoaraSort(int *arr, const int arrLength)
{
    HoaraSort(arr, 0, arrLength - 1);
}