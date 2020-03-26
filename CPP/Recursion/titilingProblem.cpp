#include <iostream>
using namespace std;

// returns the no of ways tile can be placed
int tileComb(int n, int m)
{

    if (m == n)
    {
        return 2;
    }
    else if (m == 1)
    {
        return 1;
    }

    else
    {
        return tileComb(n, m - 1) + tileComb(n, m - 4);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    cout << tileComb(n, m);
}