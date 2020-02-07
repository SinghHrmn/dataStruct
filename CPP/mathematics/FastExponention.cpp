#include <iostream>
using namespace std;

/*
We will use a recursive function to implement fast exponentiation in (Log N) time


# Also see fast exponentiaiton with Bitmasks.

*/

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    int subans = power(a, b / 2);
    // squaring subans
    subans *= subans;

    // checking if b is a odd number. as a^3 will decompose to (a.a^2). So we need to multipy a one more time.
    if (b & 1)
    {
        subans *= a;
    }

    return subans;
}

int main()
{

    //Two number a and b
    int a, b;

    cin >> a >> b;

    // we'll find a raise to the power b. a^b
    cout << power(a, b);

    return 0;
}