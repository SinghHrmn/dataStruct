#include <iostream>
using namespace std;

// Wave printing of array
int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    for (int j = 0; j < 4; j++)
    {
        if (j & 1)
        {
            for (int i = 4 - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 0; i < 4; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
    // OUTPUT : 1 5 9 13 14 10 6 2 3 7 11 15 16 12 8 4
}