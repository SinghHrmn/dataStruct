#include <iostream>
#include <algorithm>
using namespace std;

/*

Binary search code is implemented in STL library under algorithm

*/

int main()
{
    // create an array
    int arr[10] = {1, 3, 4, 5, 6, 8, 19, 20};

    //binary search requires 3 parameters
    //forward iterator --> start, forward iterator --> end, const value --> Key
    //fourth optional parameter for custom comparator function
    //binary_search(start, end, key, comparator) | returns bool
    if (binary_search(arr, arr + 4, 5))
    {
        cout << "5 is present";
    }

    return 0;
}