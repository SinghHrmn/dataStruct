#include <iostream>
using namespace std;

// This program discuss the classical problem N-Queen.

// Problem: You are given N X N board and you have to place a queen in each row or each coloum so that no Queen
// can attack other.

bool queenSafe(int board[100][100], int R, int C, int N)
{
    // check for column
    for (int row = 0; row < R; row++)
    {
        if (board[row][C] == 1)
        {
            return false;
        }
    }

    // check for right diagonal
    int row = R;
    int col = C;
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 1)
        {
            return false;
        }

        row--;
        col--;
    }

    // check for left diagonal
    row = R;
    col = C;

    while (col < N && row >= 0)
    {
        if (board[row][col] == 1)
        {
            return false;
        }

        col++;
        row--;
    }

    // Queen is safe to place
    return true;
}

bool solvenQueen(int board[100][100], int R, int N)
{

    // Base Case --> If we reach the end of Board. we will print the board
    if (R == N)
    {
        // print the array
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (board[i][j] == 1)
                {
                    cout << " Q";
                }
                else
                {
                    cout << " _ ";
                }
            }
            cout << "\n";
        }
        cout << "\n";
        return true;
    }

    // Recursive Case
    // We will place a queen and make a recursive call
    // function returns true if we can place all the queens -- else return false
    for (int C = 0; C < N; C++)
    {
        if (queenSafe(board, R, C, N))
        {
            // Place the Queen
            board[R][C] == 1;
            cout << " placed a queen at" << R << " " << C << endl;

            // Call for the remaining Board
            if (solvenQueen(board, R + 1, N))
            {
                return true;
            }

            // else --> Backtrack
            board[R][C] == 0;
        }
    }
    return false;
}

int main()
{

    // get the size of boardfrom the user
    int N;
    cin >> N;

    // All positions are initialized with Zero --> taking 100 X 100 board
    int board[100][100] = {0};

    solvenQueen(board, 0, N);
}