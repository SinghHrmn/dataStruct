#include <iostream>
using namespace std;

// using this program to discuss spiral print
void printMatrix(int arr[][10], int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

void initMatrix(int arr[][10], int R, int C)
{
    int value = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            arr[i][j] = ++value;
        }
    }
}

void spiralPrint(int arr[][10], int R, int C)
{
    int startRow = 0, endRow = R - 1, startCol = 0, endCol = C - 1;
    while (startRow <= endRow)
    {
        // Print start row
        for (int j = startCol; j <= endCol; j++)
        {
            cout << arr[startRow][j] << " ";
        }
        startRow++;

        // Print end coulumn
        for (int j = startRow; j <= endRow; j++)
        {
            cout << arr[j][endCol] << " ";
        }
        endCol--;

        if (startRow < endRow)
        {
            // Print end row
            for (int j = endCol; j >= startCol; j--)
            {
                cout << arr[endRow][j] << " ";
            }
            endRow--;
        }

        if (startCol < endCol)
        {
            // Print start column
            for (int j = endRow; j >= startRow; j--)
            {
                cout << arr[j][startCol] << " ";
            }
            startCol++;
        }
    }
}

int main()
{
    int R, C;
    cin >> R >> C;
    int arr[10][10];
    initMatrix(arr, R, C);
    printMatrix(arr, R, C);
    spiralPrint(arr, R, C);
}