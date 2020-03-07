#include <iostream>
#include <algorithm>
using namespace std;

// Program to discuss the pair class

int main()
{

    // initialization
    pair<int, int> p;

    // adding values
    p.first = 10;
    p.second = 20;

    cout << p.first << " " << p.second << "\n";

    // Another Method
    pair<int, string> p2 = make_pair(100, "Hello");

    cout << p2.first << " " << p2.second << "\n";

    // Input from user
    int a, b;
    cin >> a >> b;

    pair<int, int> p3 = make_pair(a, b);

    // Pair of pairs

    pair<pair<int, int>, string> p4;

    p4.second = "Audi";
    p4.first.first = 12;
    p4.first.second = 23;

    cout << p4.first.first << "\n";
}