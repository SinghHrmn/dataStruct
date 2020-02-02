#include <iostream>
using namespace std;

// we will create a program to convert decimal to binary

int decimaltobinary(int number)
{

    //function used to convert decimal to binary

    int ans = 0;
    int p = 1;
    while (number > 0)
    {
        ans = ans + p * (number & 1);
        p = p * 10;
    }
    return ans;
}

int main()
{

    int num;
    cin >> num;

    cout << decimaltobinary(num);

    return 0;
}