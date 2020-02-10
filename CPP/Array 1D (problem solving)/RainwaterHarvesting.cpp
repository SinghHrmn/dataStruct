#include <iostream>
using namespace std;

/*
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Explanation for the Sample input Testcase:
Elevation Map

So the total units of water she can save is 5 units
Input Format

First line contains an integer n. Second line contains n space separated integers representing the elevation map.
Constraints

Output Format

Print a single integer containing the maximum unit of waters she can save.
Sample Input

10
0 2 1 3 0 1 2 1 2 1

Sample Output

5

*/

int main()
{

    int n;
    cin >> n;

    int arr[n];
    int leftmax[n];
    int rightmax[n];

    int lmax = 0, rmax = 0;
    //input the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        leftmax[i] = max(lmax, arr[i]);
        if (lmax < arr[i])
        {
            lmax = arr[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        rightmax[i] = max(rmax, arr[i]);
        if (rmax < arr[i])
        {
            rmax = arr[i];
        }
    }

    int finalAns = 0;
    //computing the ans
    for (int i = 0; i < n; i++)
    {
        finalAns += min(rightmax[i], leftmax[i]) - arr[i];
    }

    cout << finalAns;
    return 0;
}