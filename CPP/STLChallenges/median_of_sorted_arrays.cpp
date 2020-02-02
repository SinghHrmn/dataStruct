#include <iostream>
#include <algorithm>
#include <vector>

/*


We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.
Input Format:

First line contains the input n. Second and Third line contains n space separated integers.
----------------------------------------
Constraints:
N < 1000
----------------------------------------
output format

Print the median in a single line.
----------------------------------------
sample input:

5
1 3 5 7 9
2 4 6 8 10
----------------------------------------
sample output:

5
----------------------------------------

*/
using namespace std;
int main()
{

    //initalize two arrays
    int a[1005];
    int b[1005];

    //input from user size of arrays
    int n;
    cin >> n;

    //input array a
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //input array b
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    // Logic for solving the problem
    // 1) we need to merge two array in a sorted way
    //    So we will use merge function defined in algorithm
    //    merge function recieves 5 arguments
    //    merge(a[start],a[end],b[start],b[end], vector where the result will be stored)
    // 2) Print median

    // 1)
    vector<int> v(1000);
    merge(a, a + n, b, b + n, v.begin());

    // 2) median will be at 2n/2 - 1
    cout << v[n - 1];

    return 0;
}