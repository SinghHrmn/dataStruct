#include <iostream>
using namespace std;

// Program Discuss the inversion  count problem

/*Problem:

Find the count of elements which satisfy the property:

a[i] > a[j] for i < j:

*/

int merge(int *a, int s, int e)
{

    int mid = (s + e) / 2;

    int k = s;
    int i = s;
    int j = mid + 1;

    int temp[100000];

    int count = 0;
    while (i <= mid and j <= e)
    {
        // Case 1 --> No cross inversions
        if (a[i] <= a[j])
        {

            temp[k++] = a[i++];
        }
        // Case 2 --> Cross inversions so we need to increment count
        else
        {
            temp[k++] = a[j++];
            count += mid - i + 1;
        }
    }

    // fill the remaining arrays if any
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= e)
    {
        temp[k++] = a[j++];
    }

    // Copy all elements back to the array
    for (int k = s; k <= e; k++)
    {
        a[k] = temp[k];
    }

    return count;
}

int inversion_count(int *a, int s, int e)
{

    // Base Case
    if (s >= e)
    {
        return 0;
    }

    int mid = (s + e) / 2;
    int x = inversion_count(a, s, mid);
    int y = inversion_count(a, mid + 1, e);
    int z = merge(a, s, e); //cross inversions
    return x + y + z;
}

int main()
{
    // Data
    int a[] = {1, 5, 2, 6, 3, 0};
    int n = sizeof(a) / sizeof(int);

    cout << inversion_count(a, 0, n - 1);
}