#include <iostream>
using namespace std;

// global keypad array
char keypad[][9] = {
    {'\0'},
    {'\0'},
    {'a', 'b', 'c', '\0'},
    {'d', 'e', 'f', '\0'},
    {'g', 'h', 'i', '\0'},
    {'j', 'k', 'l', '\0'},
    {'m', 'n', 'o', '\0'},
    {'p', 'q', 'r', 's', '\0'},
    {'t', 'u', 'v', '\0'},
    {'w', 'x', 'y', 'z', '\0'},
};

// A smart keypad which returns all the possible sequences
void smartKeypad(char *in, char *out, int i, int j)
{

    // Base Case
    if (in[i] == '\0')
    {
        out[j] = '\0';

        cout << out << "\n";
        return;
    }

    // Recursive Call
    int digit = in[i] - '0';

    // check if 0 or 1
    if (digit <= 1)
    {
        smartKeypad(in, out, i + 1, j);
    }

    for (int k = 0; keypad[digit][k] != '\0'; k++)
    {
        out[j] = keypad[digit][k];
        smartKeypad(in, out, i + 1, j + 1);
    }
}

int main()
{
    char in[50];
    cin >> in;

    char out[50];

    smartKeypad(in, out, 0, 0);
}