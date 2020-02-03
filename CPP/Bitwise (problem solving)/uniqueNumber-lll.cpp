#include <iostream>
using namespace std;

int binaryTodecimal(int *arr, int size)
{
    int ans = 0, p = 2;
    ans = arr[0] * 1;
    for (int i = 1; i < size; i++)
    {
        ans = ans + arr[i] * p;
        p *= p;
    }

    return ans;
}

int main()
{

    int n, no;
    cin >> n;
    int arr[64] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> no;
        int j = 0;
        while (no > 0)
        {
            arr[j] += no & 1;
            j++;
            no = no >> 1;
        }
    }

    for (int i = 0; i < 64; i++)
    {
        arr[i] = arr[i] % 3;
    }

    cout << binaryTodecimal(arr, 64);
    return 0;
}