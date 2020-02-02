#include <iostream>
using namespace std;

/*
Now we will discuss about common bitwise masking operations 

-----------------------------------------------
Common opeartions: 
-----------------------------------------------
>> Check if number is Even or Odd
>> Get a bit at ith position in number N
>> Set bit at ith positiom in number N
>> clearing bit at ith position 
>> updating bit at ith position with value v


*/

void checkEvenorOdd(int a)
{
    //this function checks if the number is even or odd
    if (a & 1)
    {
        cout << "Number is odd"
             << "\n";
    }
    else
    {
        cout << "Number is even"
             << "\n";
    }
}

void checkbit(int a, int i)
{
    // the function checks if the ith bit in Number a is 0 or 1
    int mask = 1 >> i;
    if (a & mask > 0)
    {
        cout << "ith bit is 1"
             << "\n";
    }
    else
    {
        cout << "ith bit is 0"
             << "\n";
    }
}

void setbit(int a, int i)
{
    //this function set the ith bit in a number
    int mask = 1 << i;
    int ans;
    ans = a | mask;
    cout << ans << "\n";
}

void clearithBit(int a, int i)
{
    //this function clears ith bit
    int mask = ~(1 << i);
    int ans = a & mask;

    cout << ans << "\n";
}

void updateithBit(int a, int i, int v)
{
    //this function updates ith bit to value v
    // we will need to do 2 oprations
    // 1) clearing the bit
    // 2) updating the bit

    int clearmask = ~(1 << i);
    int cleared_num = a & clearmask;
    int updatemask = v << i;
    int ans = cleared_num | updatemask;
    cout << ans;
}

int main()
{
    int a = 11;
    int zero = 0;
    checkEvenorOdd(a);
    checkbit(a, 1);
    setbit(zero, 0);
    clearithBit(2, 1);
    updateithBit(3, 0, 0);
    return 0;
}