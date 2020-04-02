#include <iostream>
#include <cmath>
using namespace std;

// The program implemets a sudoku solver

bool canPlaceNumber(int sudoku[9][9], int i, int j, int n, int number)
{
    // check if we can place that number

    // check along the row and column
    for (int x = 0; x < n; x++)
    {
        if (sudoku[x][j] == number || sudoku[i][x] == number)
            return false;
    }

    // check in the grid
    int rn = sqrt(n);
    int sr = (i / rn) * rn;
    int sc = (j / rn) * rn;
    for (int row = sr; row < (sr + rn); row++)
    {
        for (int col = sc; col < (sc + rn); col++)
        {
            if (sudoku[row][col] == number)
                return false;
        }
    }

    return true;
}

bool sudokuSolver(int sudoku[9][9], int i, int j, int n)
{

    // Base Case
    if (i == n)
    {

        // Print Sudoku
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cout << sudoku[row][col] << " ";
            }
            cout << "\n";
        }
        cout << "\n";

        return true;
    }

    // Else recursive Case

    // make sure we remain inside the sudoku
    if (j == n)
    {
        sudokuSolver(sudoku, i + 1, 0, n);
    }

    // Check if the sudoku contains a digit at (i,j)
    if (sudoku[i][j] != 0)
    {
        // Skip
        sudokuSolver(sudoku, i, j + 1, n);
    }

    // We will check if we can place a number
    else
    {

        for (int number = 1; number <= n; number++)
        {
            if (canPlaceNumber(sudoku, i, j, n, number))
            {
                sudoku[i][j] = number;
                bool success = sudokuSolver(sudoku, i, j + 1, n);
                if (success)
                {
                    return true;
                }
            }
        }

        // Backtrack -- >
        sudoku[i][j] = 0;
        return false;
    }
}

int main()
{

    // Sudoku
    int sudoku[9][9] = {
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 1, 0, 0, 8, 0},
        {9, 0, 0, 8, 6, 3, 0, 0, 5},
        {0, 5, 0, 0, 9, 0, 6, 0, 0},
        {1, 3, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 4},
        {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    int n = 9;

    // call to the sudoku solver
    sudokuSolver(sudoku, 0, 0, 9);
}