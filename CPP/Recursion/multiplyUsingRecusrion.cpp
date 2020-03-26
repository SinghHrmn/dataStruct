#include <iostream>
using namespace std;

// Recursive Function
int multiply(int a, int b)
{

    // base case
    if (b == 0)
    {
        return 0;
    }
    else
    {
        if (b < 0)
        {
            return -(a + multiply(a, -(b)-1));
        }
        else
        {
            return a + multiply(a, b - 1);
        }
    }
}

int main()
{
    int a = 5;
    int b = 3;

    cin >> a >> b;

    cout << multiply(a, b);
}
