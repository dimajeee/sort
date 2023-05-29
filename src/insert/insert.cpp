#include <iostream>
#include "insert.h"

using namespace std;

int main()
{
    const int length = 10;
    int *arr = new int[length];

    for(int i = 0; i < length; ++i)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << "\t";
    }

    cout << endl;

    insertSort(arr, length);

    for(int i = 0; i < length; ++i) 
    {
        cout << arr[i] << "\t";
    }

    cout << endl;

    return 0;
}