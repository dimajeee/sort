#include <iostream>
#include "bubble.h"

using namespace std;

int main()
{
    int length = 10;

    int *arr = new int[length];

    for(int i = 0; i < length; ++i)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << "\t";
    }

    bubbleSort(arr, length);
    
    cout << endl;

    for(int i = 0; i < length; ++i)
    {
        cout << arr[i] << "\t";
    }




    return 0;
}