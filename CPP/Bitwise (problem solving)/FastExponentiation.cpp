#include <iostream>
using namespace std;

int Power_Optimised(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = ans * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return ans;
}

int main()
{

    int num, pow;
    cin >> num >> pow;

    cout << Power_Optimised(num, pow);
    return 0;
}