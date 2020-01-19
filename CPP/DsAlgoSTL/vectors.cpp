#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* 

Vectors are array like containers but are resizable. They are very handy as a replacement of array.
Vectors double their space as soon as the vector fills completely. Doubling the size then moving every element
to the new array is costly operation. But this happens in amortized time. Doubling operation will not occur 
every time but will occur at 2^n (2,4,8,16,32....) at other times it takes O(1) time to insert, search, delete.

Headers to include:
<vector>

methods discussed:
    .begin()
    .end()
    .push_back()
    .pop_back()
    .size()
    .reserve(size to be reserved)
    .capacity()
    .max_size()


*/

int main()
{
    // declaring vector
    vector<int> v;

    //reserve will make size for 1000 elements. This prevents doubling overhead(2,4,8,16....).
    v.reserve(1000);

    //inserting values in vectors

    //
    int n;
    cout << "How many elements you want to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        //always use push_back() to add value into the vector
        v.push_back(temp);
    }

    //sorting vector
    sort(v.begin(), v.end());

    //removing element from the end
    v.pop_back();

    //printing
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }

    cout << endl;

    //finding the capacity
    cout << v.capacity() << endl;

    //finding the max size to which vector can grow | depends on machine memory
    cout << v.max_size() << endl;

    //input:
    // 5
    // 2 4 5 1 3

    // output:
    // 1,2,3,4,
    // 1000
    // 1073741823 - depends on available memory

    return 0;
}