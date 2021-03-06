#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Program discuss the implementation of Quick Sort Algorithm with randomisation
void shuffle(int *arr, int s, int e)
{
    srand(time(NULL));

    int i, j;
    for (i = e; i > 0; i--)
    {
        j = rand() % (i + 1);

        // swap
        swap(arr[i], arr[j]);
    }
}

int partition(int *arr, int start, int end)
{

    int i = start - 1;
    int j = start;

    for (; j < end; j++)
    {
        if (arr[j] <= arr[end])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // swap the pivot element
    swap(arr[i + 1], arr[end]);

    return i + 1;
}

void quicksort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int p = partition(arr, start, end);

    quicksort(arr, start, p - 1);
    quicksort(arr, p + 1, end);
}

int main()
{

    // Take input from the user | n - > No of elements in the array
    int n;
    cin >> n;

    int data[n];

    // Input the array
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    // Call to Shuffle Output
    shuffle(data, 0, n - 1);

    // Print the shuffled data
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }

    cout << "\n";

    // Call to the quicksort function O(n log n)
    quicksort(data, 0, n - 1);

    // Print the sorted data
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
}