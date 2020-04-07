#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    vector v;

    v.push_back(10);

    v.push_back(9);

    v.push_back(8);

    v.push_back(7);

    v.push_back(6);

    v.push_back(4);

    v.pop_back();

    cout << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}