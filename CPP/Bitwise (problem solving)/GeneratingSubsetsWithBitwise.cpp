#include <iostream>
#include <cstring>
using namespace std;

/*

This program will generate subsets of a string using bitwise

*/
void filterChar(int n, char arr[])
{
    int j = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            cout << arr[j];
        }
        j++;
        n = n >> 1;
    }
    cout << endl;
}

void printSubSequence(char a[])
{
    int size = strlen(a);
    for (int i = 0; i < (1 << size); i++)
    {
        filterChar(i, a);
    }
}

int main()
{
    printSubSequence("abc");
    return 0;
}