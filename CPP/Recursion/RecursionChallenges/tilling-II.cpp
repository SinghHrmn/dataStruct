#include <iostream>
using namespace std;

#define ll long long int
#define modulo 1000000007

ll place_tiles(ll n, ll m)
{

    // Base Case
    if (n == 1)
    {
        return 1;
    }
    else if (n <= 0)
    {
        return 0;
    }
    else if (n == m)
    {
        return 2;
    }
    else
    {
        return place_tiles(n - 1, m) + place_tiles(n - m, m);
    }
}

int main()
{
    int testcase;
    cin >> testcase;

    ll n, m;

    while (testcase--)
    {

        cin >> n;
        cin >> m;

        cout << place_tiles(n, m) % modulo << "\n";
    }

    return 0;
}