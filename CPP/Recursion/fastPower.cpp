#include <iostream>
using namespace std;

// calculating power using recursion
int power(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }

    return n * power(n, m - 1);
}

// calculating power fast
int fastpower(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    int smallAns = fastpower(a, b / 2);
    smallAns *= smallAns;

    if (b & 1)
    {
        return a * smallAns;
    }
    return smallAns;
}

int main()
{
    int n, m;
    cin >> n >> m;

    // compute n^m in m steps
    cout << power(n, m) << "\n";

    // compute n^m in Log M
    cout << fastpower(n, m);
}
