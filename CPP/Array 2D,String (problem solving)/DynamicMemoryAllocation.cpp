#include <iostream>
using namespace std;

// Using this problem to study Dynamic Memory allocation

int main()
{
    // DMA of a single variable
    int *num = new int;
    *num = 10;

    cout << "Number is :" << *num << "\n";

    // DMA of array
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    // Printing the value
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // DMA of a 2D array
    // creating a 3x4 array
    int **arr1 = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        arr1[i] = new int[4];
    }

    // Removal of single variable
    delete num;

    // Removal of array
    delete[] arr;

    // Removal of 2D array
    for (int i = 0; i < 3; i++)
    {
        delete[] arr1[i];
    }

    delete[] arr1;
}