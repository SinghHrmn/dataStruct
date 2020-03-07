#include <iostream>
#include <algorithm>
using namespace std;

// Program discuss some useful methods like

// swap - for swapping 2 values
// rotate - to rotate a part of the array
// min - find the minimum of values
// max - find max of values

int main()
{
    // array declaration
    int x[] = {20, 23, 1, 34, 2, 6, 8, 9, 10};
    int n = sizeof(x) / sizeof(int);

    // swaping elements
    int a = 10, b = 20;
    swap(a, b);

    swap(x[3], x[2]);

    cout << "Value of a is " << a << " and b is " << b;

    cout << "\n";

    // rotating a array
    rotate(x, x + 2, x + n);

    // output the array
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    cout << "\n";

    // finding max element
    cout << "Maximum element is " << max(a, b) << "\n";

    // finding the minimum element
    cout << "Minimum element is " << min(a, b) << "\n";
}