#include <iostream>
using namespace std;

// recursive function to convert string 2 integer
int string2int(string S, int n, int p = 1)
{
    if (n == 0)
    {
        int ans = S[n] - '0';
        return p * ans;
    }

    else
    {

        int ans = S[n] - '0';

        return ans * p + string2int(S, n - 1, p * 10);
    }
}

int main()
{
    string input;

    cin >> input;

    cout << 100 + string2int(input, input.length() - 1);
}