#include <iostream>
using namespace std;

/*
We will count the number of set bits in a number.

we will see 3 functions:
>> common approch
>> builtin function
>> more Optimised solutions

*/

int countBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count += num & 1;
        num = num >> 1;
    }

    return count;
}

int countBitsFast(int num)
{
    int count = 0;
    while (num > 0)
    {
        num = num & (num - 1);
        count++;
    }

    return count;
}

int main()
{
    int num;
    cin >> num;
    cout << countBits(num) << endl;
    cout << __builtin_popcount(num) << endl;
    cout << countBitsFast(num) << endl;
    return 0;
}