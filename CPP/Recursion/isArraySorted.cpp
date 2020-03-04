#include <iostream>
using namespace std;

int isSortedArray(int arr[], int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }

    return (arr[n - 1] < arr[n - 2] ? 0 : isSortedArray(arr, n - 1));
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    if (isSortedArray(arr, 10))
    {
        cout << "Array is Sorted";
    }
    else
    {
        cout << "Array is not in sorted order";
    }
}