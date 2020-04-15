#include <iostream>
using namespace std;

// Number of solutions
int ans = 0;

bool queensafe(int board[15][15], int R, int C, int N)
{

    // check for column
    for (int row = 0; row < R; row++)
    {
        if (board[row][C] == 1)
        {
            return false;
        }
    }

    // left diagonal
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

    row = R;
    col = C;

    while (row >= 0 && col < N)
    {
        if (board[row][col] == 1)
            return false;

        row--;
        col++;
    }

    return true;
}

bool solveNQueen(int board[15][15], int i, int N)
{

    // Base Case
    if (i == N)
    {
        // increment the ans
        ans += 1;

        return false;
    }

    // Recursive Case
    for (int col = 0; col < N; col++)
    {
        if (queensafe(board, i, col, N))
        {
            board[i][col] = 1;

            if (solveNQueen(board, i + 1, N))
            {
                return true;
            }

            board[i][col] = 0;
        }
    }

    return false;
}

int main()
{

    int N;
    cin >> N;

    int board[15][15] = {0};

    solveNQueen(board, 0, N);

    cout << ans;
}