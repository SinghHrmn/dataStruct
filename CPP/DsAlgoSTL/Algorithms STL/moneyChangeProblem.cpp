#include <iostream>
#include <algorithm>
using namespace std;

// WAP to find the minimum no of coins needed to make exchange

// Eg. 123 : 100 + 20 + 2 + 1

bool compare(int a, int b)
{
    return a <= b;
}

int main()
{

    // price we want to convert
    int money;
    cin >> money;

    // list of indian coins
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int size = sizeof(coins) / sizeof(int);

    // finding the lower bound of the function
    while (money > 0)
    {
        int lb = lower_bound(coins, coins + size, money, compare) - coins - 1;
        cout << coins[lb] << " ";
        money = money - coins[lb];
    }
}