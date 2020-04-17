#include <iostream>
#include <bitset>

using namespace std;

#define ll long long int

/*
Problem:
--------

Classical problem N queen : To place N non-attacking queens on N X N Chess board.

Solution:
---------

We will use properties of matrices to compute the is safe method. And store the result in bitset.

We will maintain 3 bitsets one for column other for the left and right diagonal

Each diagonal will hold a bit if the queen is placed else will contain 0.

example:

column bitset:
-------------
for column bitset {0, 0, 0, 1} will signify that the 3rd column has a Queen so we can't place a
queen there.

Right Diagonal bitset:
---------------------
for each diagonal difference of index is constant. for (i,j) we will have difference of i-j same
and unique for particular diagonal. The diffrence can be negative but we don't have negative 
indexes so we will shift the index by (N-1)

Left Diagonal bitset:
---------------------
for each diagonal sum of index is contsant. for (i,j) we will have sum of i+j same and unique for
particular diagonal

*/

bitset<30> col, diag_right, diag_left;

void solveNqueen(int i, int n, ll &ans)
{

    // Base Case
    if (i == n)
    {
        ans++;
        return;
    }

    else
    {
        for (int c = 0; c < n; c++)
        {
            if (!col[c] and !diag_right[i - c + n - 1] and !diag_left[c + i] == 1)
            {
                col[c] = diag_right[i - c + n - 1] = diag_left[c + i] = 1;

                solveNqueen(i + 1, n, ans);

                col[c] = diag_right[i - c + n - 1] = diag_left[c + i] = 0;
            }
        }
    }
}

int main()
{

    // input from the user the size of chess board
    int n;
    cin >> n;

    // Ans variable that will contain the total number of possible arrangements
    ll ans = 0;

    solveNqueen(0, n, ans);

    cout << ans;

    return 0;
}