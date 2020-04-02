#include <iostream>
using namespace std;

// The program Discuss the Rat in a Maze problem.

// We always start from 0,0 and we have to move only in two direcctions
// 1) Right
// 2) Down

// Output: We have to print all possible paths to the End to the maz

bool solveRatInMaze(char maze[10][10], int output[10][10], int i, int j, int m, int n)
{

    //Base Case --> We reached end
    if (i == m && j == n)
    {
        output[m][n] = 1;
        // Print the Path
        for (int row = 0; row <= m; row++)
        {
            for (int col = 0; col <= n; col++)
            {
                cout << output[row][col] << " ";
            }
            cout << "\n";
        }
        cout << "\n";

        return true;
    }

    if (i > m || j > n)
    {
        return false;
    }

    if (maze[i][j] == 'X')
    {
        return false;
    }

    // Assume solution exists through the current cell
    output[i][j] = 1;

    bool rightSuccess = solveRatInMaze(maze, output, i + 1, j, m, n);

    bool downSuccess = solveRatInMaze(maze, output, i, j + 1, m, n);

    output[i][j] = 0;

    if (rightSuccess || downSuccess)
    {
        return true;
    }

    return false;
}

int main()
{

    // Maze
    char maze[10][10] = {
        "00XX",
        "00X0",
        "X00X",
        "0000"};

    int output[10][10] = {0};
    int m = 4;
    int n = 4;

    // Call for RatInMaze with start (0,0) and end (4,7)
    solveRatInMaze(maze, output, 0, 0, m - 1, n - 1);
}