#include <iostream>
using namespace std;

//Problem to find the given two unique numbers in array

int main()
{
    //Number of elements in array
    int n;
    cin >> n;

    int no = 0, pos = 0;

    //creating an array
    int arr[10005];
    for (int i = 0; i < n; i++)
    {

        int temp;
        cin >> temp;
        arr[i] = temp;
        no = no ^ temp;
    }

    // getting the postion of set bit.
    while ((no & 1) != 1)
    {
        pos++;
        no = no >> 1;
    }

    // Getting the unique numbers x,y
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & (1 << pos))
        {
            x = x ^ arr[i];
        }
    }

    y = no ^ x;

    cout << min(x, y) << " " << max(x, y);
    return 0;
}
