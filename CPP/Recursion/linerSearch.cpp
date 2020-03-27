#include <iostream>
using namespace std;

// recursive program for linear search
int linear_search(int a[], int idx, int key)
{
    // Base Case
    if (idx < 0)
    {
        return -1;
    }

    // Recursive Call
    else
    {
        // check if the element is present
        if (a[idx] == key)
            return idx;
        // else check in the remaining array
        else
            return linear_search(a, idx - 1, key);
    }
}

int main()
{
    // data to be searched
    int arr[] = {12, 14, 15, 11, 10, 23, 110, 123};

    // no of elements
    int n = sizeof(arr) / sizeof(int);

    // key to be searched
    int key;
    cin >> key;

    int index = linear_search(arr, n - 1, key);

    // linear_search returns -1 if element does not exits else return index
    if (index >= 0)
    {
        cout << "Element found at index " << index;
    }
    else
    {
        cout << "No such element";
    }
}