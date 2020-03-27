#include <iostream>
using namespace std;

// This program we will implement Bubble sort using Recursion

void BubbleSort(int a[], int j, int n)
{

    // base case:
    // one element always sorted
    if (n == 0)
    {
        return;
    }

    // Recursive call

    // Call type 1: When we have sorted one element
    if (j == n)
    {
        BubbleSort(a, 0, n - 1);
    }

    // Call type 2:  When we want to sort element
    else
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
        BubbleSort(a, j + 1, n);
        return;
    }
}

int main()
{

    // Data which needs to be sorted
    int data[] = {5, 4, 3, 2, 1};
    int n = sizeof(data) / sizeof(int);

    // call to bubble sort function
    BubbleSort(data, 0, n - 1);

    // print the data
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
}