#include <iostream>
using namespace std;

// this program prints all possible set of binary String of size N.

// Global array of integers
int Len;

void Binary(int n, int *arr)
{
    if (n < 1)
    {
        for (int i = 0; i < Len; i++)
        {
            cout << *(arr + i);
        }
        cout << "\n";
    }

    else
    {
        *(arr + (n - 1)) = 0;
        Binary(n - 1, arr);
        *(arr + n - 1) = 1;
        Binary(n - 1, arr);
    }
}

int main()
{

    int n;
    cout << "Enter the length of bits: \n";
    cin >> n;
    Len = n;
    int arr[n];

    Binary(n, arr);
}
