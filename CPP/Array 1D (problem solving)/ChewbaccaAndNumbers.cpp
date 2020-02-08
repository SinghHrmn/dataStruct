#include <iostream>
#include <cstring>
using namespace std;

#define ll long long int

/*
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. 
Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. 
The decimal representation of the final number shouldn't start with a zero.

------------------------------------------------------------------------------------------------------------------------------------------------
Input Format
------------------------------------------------------------------------------------------------------------------------------------------------
The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.
Constraints

x <= 100000000000000000
------------------------------------------------------------------------------------------------------------------------------------------------
Output Format
------------------------------------------------------------------------------------------------------------------------------------------------
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Sample Input:

    4545

Sample Output:

    4444

------------------------------------------------------------------------------------------------------------------------------------------------
Explanation
------------------------------------------------------------------------------------------------------------------------------------------------
There are many numbers form after inverting the digit. For minimum number, check if inverting digit is less than or greater than the original 
digit. If it is less, then invert it otherwise leave it.

*/

int main()
{
    //declaring and taking the input as string
    string arr;
    getline(cin, arr);

    //index -- i
    ll i = 0;

    //if the first element is 9 skip that [ We don't want leading zeroes ]
    if (arr[0] == '9')
    {
        i++;
    }

    //check in whole string if the ith element is greater than 5. Then change it to 9 - that element
    for (; arr[i] != '\0'; i++)
    {

        //creating a digit from String [Difference of Two ASCII values will be a number ]
        int x = arr[i] - '0';
        if (x >= 5)
        {
            x = 9 - x;
            arr[i] = '0' + x; //result again converted into char data type
        }
    }

    //print the number
    cout << arr;

    return 0;
}