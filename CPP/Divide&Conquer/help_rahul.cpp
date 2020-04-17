#include <iostream>
using namespace std;

// Problem: https://hack.codingblocks.com/app/practice/6/1044/problem

int find_key(int a[], int s, int end, int key)
{

    while (s <= end)
    {
        int mid = (s + end) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[s] <= a[mid])
        {
            if (a[s] <= key and a[mid] >= key)
            {
                end = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
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
    return -1;
}

int main()
{

    // input n
    int n;
    cin >> n;

    int arr[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << find_key(arr, 0, n - 1, key);

    return 0;
}