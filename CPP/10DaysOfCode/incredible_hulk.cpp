#include <iostream>
using namespace std;

// Problem: https://hack.codingblocks.com/app/practice/6/1038/problem
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;

        cout << __builtin_popcount(t) << "\n";
    }
    return 0;
}