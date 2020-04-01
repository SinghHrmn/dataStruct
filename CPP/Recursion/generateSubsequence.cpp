#include <iostream>
using namespace std;

void subsequence(char *a, char *out, int i, int j)
{

    // Base Case
    if (a[i] == '\0')
    {
        out[j] = '\0';

        cout << out << ",";
        return;
    }

    // recursive case
    // 1. include the current character
    out[j] = a[i];
    subsequence(a, out, i + 1, j + 1);

    // 2. Exclude the current element;
    subsequence(a, out, i + 1, j);
}

int main()
{

    char word[100];
    cin >> word;

    char out[100];

    subsequence(word, out, 0, 0);

    return 0;
}