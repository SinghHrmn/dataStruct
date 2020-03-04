#include <iostream>
using namespace std;

int factorial(int num)
{
    // Base Case
    if (num == 0)
    {
        return 1;
    }

    // again calling factorial with smaller value of num
    return num * factorial(num - 1);
}

int main()
{

    int num;
    cout << "Factorial Finding. Enter Number: ";
    cin >> num;

    cout << factorial(num);
}