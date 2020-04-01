#include <iostream>
using namespace std;

// The program implements a Backtracking approach to generate all permutations
void permute(char *word, int n)
{

    // Base Case
    if (word[n] == '\0')
    {
        cout << word << ", ";
        return;
    }

    // Recursive call
    for (int j = n; word[j] != '\0'; j++)
    {
        swap(word[j], word[n]);

        // call permute for the rest array --> n+1
        permute(word, n + 1);

        // Backtracking
        swap(word[j], word[n]);
    }
}

int main()
{

    // Input from the user
    char word[10];
    cin >> word;

    permute(word, 0);
}