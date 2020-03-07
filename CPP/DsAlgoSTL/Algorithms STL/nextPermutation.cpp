#include <iostream>
#include <algorithm>
using namespace std;

// Program to generate next possible permutation and also discuss a way to rotate an array

int main()
{
    int x[] = {1, 4, 5, 3, 6};
    int n = sizeof(x) / sizeof(int);

    // generating permuataion
    next_permutation(x, x + n);

    // output the array
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

}