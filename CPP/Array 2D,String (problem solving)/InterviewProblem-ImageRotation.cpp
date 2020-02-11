#include <iostream>
#include <algorithm>
using namespace std;

// we are given an NxN array we need to rotate it by 90 degree

//  1 5 7        8 2 1
//  2 3 6   ==>  4 3 5
//  8 4 9        9 6 7

int main()
{
    int arr[3][3] = {
        {1, 5, 7},
        {2, 3, 6},
        {8, 4, 9}};

        int j = 0;
    for (int i = 0; i < 3; i++)
    {
        // Rotating the matrix along the digonal
        for (int k = j; k < 3; k++)
        {
            // Swap the two numbers
            if (i != k)
            {
                int c = arr[i][k];
                arr[i][k] = arr[k][i];
                arr[k][i] = c;
            }
        }
        j++;

        // reversing the array
        reverse(arr[i], arr[i] + 3);
    }

    // swaping the whole array

    // printing the Matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}