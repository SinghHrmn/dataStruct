#include <iostream>
using namespace std;

/*
In this program we will discuss the implementation of staircase search. 

We are given a 2D array and it is sorted in both row-wise and column-wise. we need to find an element E in the 2D array

Worst Case complexity is 2N, which is O(n) only.
*/
int main()
{
    // we need a NxN array
    int n = 4;

    //2D-array we need to search
    int arr[4][4] = {
        {1, 4, 8, 10},
        {2, 5, 9, 15},
        {6, 16, 18, 20},
        {11, 17, 19, 23}};

    // we will create two pointers i and j.
    int i = 0, j = n - 1;

    // Element E which we need to find
    int E;
    cin >> E;

    //Flag found
    bool found = false;

    // staircase search
    while (i < n and j >= 0)
    {
        if (E > arr[i][j])
        {
            i++;
        }
        else if (E < arr[i][j])
        {
            j--;
        }
        else if (E == arr[i][j])
        {
            found = true;
            cout << "Element found at " << i << "," << j;
            break;
        }
    }

    if (found == false)
    {
        cout << "Not present";
    }
}
