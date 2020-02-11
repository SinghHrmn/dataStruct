#include <iostream>
#include <cstring>
using namespace std;

// Rotate the chars of a string by k.
// Example: if k is 2 and string is "Hello" output is loHel. lo comes first.

void rotate(char *arr, int k)
{
    int i = strlen(arr);

    for (int j = i; j >= 0; j--)
    {
        arr[j + k] = arr[j];
    }

    i = strlen(arr);

    int s = 0;
    for (int j = i - k; j < i; j++)
    {
        arr[s] = arr[j];
        s++;
    }

    arr[i - k] = '\0';
}

int main()
{
    char arr[100];
    int k;
    cin >> arr;
    cin >> k;
    rotate(arr, k);

    cout << arr;
}