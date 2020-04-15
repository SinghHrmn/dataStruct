#include <iostream>
using namespace std;

// Link to the problem statement
// https://hack.codingblocks.com/app/practice/6/1044/problem

int find_key(int a[], int s, int end, int key)
{

    // Search all the elements in the array
    while (s <= end)
    {
        // calculate mid element
        int mid = (s + end) / 2;

        // if mid element is key return the mid
        if (a[mid] == key)
        {
            return mid;
        }

        // TWO cases --> 1) Element in Part1.  2) Element in Part2.

        // Case 1:
        else if (a[s] <= a[mid])
        {
            // two sub cases:
            if (a[s] <= key and a[mid] >= key)
            {
                end = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        // Case 2:
        else
        {
            // two sub cases
            if (a[mid] <= key and key <= a[end])
            {
                s = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    // element not present
    return -1;
}

int main()
{

    // input n
    int n;
    cin >> n;

    // input the array
    int arr[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // input the key
    int key;
    cin >> key;

    // call to the function --> find_key(array, start, end, key)
    cout << find_key(arr, 0, n - 1, key);

    return 0;
}