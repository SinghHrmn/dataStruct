#include <iostream>
using namespace std;

/*
Now we will discuss about some more common bitwise masking operations 

-----------------------------------------------
Common opeartions: 
-----------------------------------------------
>> Clearing last i bits
>> Clearing a range of bits
>> Updating a range of bits with number m


*/

int clearLastIbits(int a, int i)
{
    //This function clear all last i bits starting from index (i-1)
    int mask = (-1 << i);
    int ans = a & mask;
    return ans;
}

int clearFromItoJ(int num, int i, int j)
{
    //This function will clear all bits from index j to i
    int a = -1 << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;

    return num & mask;
}

int updateBitsItoJ(int num, int m, int i, int j)
{

    //this function will update bits from i to j
    int num_ = clearFromItoJ(num, i, j);
    int ans = num_ | (m << i);

    return ans;
}

int main()
{
    int num = 7, i = 2;
    cout << clearLastIbits(num, i) << endl;
    cout << clearFromItoJ(31, 1, 3) << endl;
    cout << updateBitsItoJ(19, 3, 1, 3);
    return 0;
}