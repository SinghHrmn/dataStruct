#include <iostream>
using namespace std;

/*
Problem to find the unique number in a array in constant space and O(N)
*/

int main()
{

    //input the number of test
    int t;
    cin >> t;

    int ans = 0;
    //finding the unique using property of XOR a^a = 0
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;

        ans = ans ^ temp;
    }

    cout << ans;

    return 0;
}