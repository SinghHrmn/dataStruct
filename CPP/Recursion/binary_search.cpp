#include <iostream>
using namespace std;

int BinarySearch(int a[], int start, int end, int key)
{
    // Base Case :
    // If at any time Start exceeds the location of end we must stop
    if (start > end)
    {
        return -1;
    }

    // Recursive Call to the function
    else
    {
        // Calculate mid of the array
        int mid = (start + end) / 2;

        // Check if the mid is equal to key
        if (a[mid] == key)
        {
            // return the index where we found the key
            return mid;
        }
        else if (a[mid] > key)
        {
            // check the first half of array till mid-1
            return BinarySearch(a, start, mid - 1, key);
        }
        else
        {
            // check second half of the array from mid + 1 till end
            return BinarySearch(a, mid + 1, end, key);
        }
    }
}

int main()
{

    // Sorted Data  -- needs to be searched
    int a[] = {12, 14, 18, 19, 22, 23, 28, 32, 43};
    int n = sizeof(a) / sizeof(int);

    // input the key from the user
    int key;
    cin >> key;

    // returns index -1 if key not present else returns the index
    int index = BinarySearch(a, 0, n - 1, key);

    // check the index value -- if positive print the index else print not found
    if (index >= 0)
    {
        cout << "Found at index" << index;
    }
    else
    {
        cout << "Element doesn't exist";
    }
}