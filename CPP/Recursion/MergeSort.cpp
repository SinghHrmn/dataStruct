#include <iostream>
using namespace std;

void merge(int *a, int s, int e)
{
    int mid = (s + e) / 2;

    int i = s, j = mid + 1, k = s;

    int temp[100];

    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = a[i++];
    }

    while (j <= e)
    {
        temp[k++] = a[j++];
    }

    for (k = s; k <= e; k++)
    {
        a[k] = temp[k];
    }
}

// The program discuss the implementation of merge sort
void merge_sort(int a[], int s, int e)
{
    // Base case:
    if (s >= e)
    {
        return;
    }

    // calculate mid
    int mid = (s + e) / 2;

    // mergesort from start to mid;
    merge_sort(a, s, mid);

    // mergesort from mid+1 to end;
    merge_sort(a, mid + 1, e);

    // merge the both
    merge(a, s, e);

    return;
}

int main()
{

    // data to be sorted
    int data[] = {5, 4, 1, 2, 0, 3};

    // size of the array
    int n = sizeof(data) / sizeof(int);

    // call to merge sort
    merge_sort(data, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
}