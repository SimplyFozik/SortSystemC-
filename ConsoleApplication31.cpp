#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "shorts.h"

using namespace std;

int main()
{
    srand(time(0));
    unsigned int size;
    cout << "Enter Array Size : ";
    cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    shaker_sort(arr, size);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}