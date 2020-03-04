#include <iostream>
using namespace std;

// The program implements the algo fro generating fibonacci series using recursion
int fibo(int num)
{
    // base case
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        long ans = fibo(num - 1) + fibo(num - 2);
        return ans;
    }
}

int main()
{

    int num;
    cout << "Enter the number of terms for series: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cout << fibo(i) << ", ";
    }
}
