#include <iostream>
using namespace std;

char spelling[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void print(int n)
{
    if (n == 0)
    {
        return;
    }

    print(n / 10);
    cout << spelling[n % 10] << " ";
}

int main()
{

    int number;
    cin >> number;

    print(number);
}