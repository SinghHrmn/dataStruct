#include <iostream>
using namespace std;

int isSortedArray(int *arr, int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }

    else if (arr[0] < arr[1] && isSortedArray(arr + 1, n - 1))
    {
        return true;
    }

    return false;
}

int main()
{

    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    if (isSortedArray(arr2, 10))
    {
        cout << "Array is Sorted";
    }
    else
    {
        cout << "Array is not in sorted order";
    }
}