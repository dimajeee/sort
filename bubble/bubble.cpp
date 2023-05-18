#include <iostream>
#include "bubble.h"

using namespace std;

int main()
{
    int length = 10;
    int *arr = new int[length];

    for(int i = 0; i < length; ++i)
    {
        arr[i] = rand() % 5;
        cout << arr[i] << "\t";
    }

    cout << endl;

    bubbleSort(arr, length);

    for(int i = 0; i < length; ++i)
    {
        cout << arr[i] << "\t";
    }
    
    return 0;
}