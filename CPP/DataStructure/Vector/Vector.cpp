#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    vector<char> v;

    v.push_back(43);

    v.push_back(49);

    v.pop_back();

    cout << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\n";

    vector<int> v;

    v.push_back(43);

    v.push_back(49);

    v.pop_back();

    cout << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}