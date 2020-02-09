#include <iostream>
using namespace std;

/*
Kadane's Algorithm can be used to get maximum subarray sum in O(n) time.
*/

int main()
{
    //Array of integers
    int arr[1000];

    //number of elements
    int num;
    cin >> num;

    //Current Sum
    int cs = 0;

    //Maximum Sum
    int ms = 0;

    //Initialize the array
    for (int i = 0; i < num; i++)
    {

        cin >> arr[i];
    }

    //Traversing the array to find the Max Sub Array Sum
    for (int i = 0; i < num; i++)
    {
        //We will clear the current sum if the cs is negative
        if (cs < 0)
        {
            cs = 0;
        }

        cs += arr[i];
        ms = max(ms, cs);
    }

    cout << "Maximum Subarray Sum: " << ms;
}