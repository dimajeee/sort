#include <iostream>
#include "choice.h"

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

    cout << endl;

    choiceSort(arr, length);

    for(int i = 0; i < length; ++i)
    {
        cout << arr[i] << "\t";
    }
    
    delete [] arr;
    return 0;
}