#include <iostream>
#include <list>
using namespace std;

/*
The program discuss the STL implementation of Doublely Linked List --> list

Header to Include
-----------------
<list>

Functions
---------

    To Add Data
    -----------
    .push_back( data ) --> Adding data at the tail
    .push_front( data ) --> Adding data at the head
    .insert( idx, data) --> Add data at idx position

    To Remove Data
    --------------
    .pop_back( data ) --> Removing data at the tail
    .pop_front( data ) --> Removing data at the head
    .remove( data ) --> Remove all occurences of data
    .erase( idx ) --> Remove data at idx

    To Modify Data
    --------------
    .sort() --> Sorts the list in ascending order ( Strings in lexicographical order)
    .reverse() --> Reverse the list

    Other
    -----
    .begin() --> returns iterator pointing to begin
    .end() --> returns iterator pointing to end

*/

int main(int argc, char const *argv[])
{

    // Initializing List
    list<string> l1;
    list<string> l2{"apple", "guava", "pineapple", "mango"};

    // Adding data
    l2.push_back("blackberry");
    l2.push_front("cherry");

    auto idx = l2.begin();
    idx++;
    idx++;

    // insert data at index 2
    l2.insert(idx, "orange");

    // Iterating over the List
    for (string s : l2)
    {
        cout << s << "-->";
    }

    cout << endl;

    // Removing Data
    cout << l2.back() << endl; // Returns the last data value
    l2.pop_back();

    // erase data at idx
    l2.erase(idx); // will erase orange

    // remove all occurences of data
    cout << "Enter the value you want to remove: ";
    string s;
    cin >> s;

    l2.remove(s);

    // Iterating over the List
    for (string s : l2)
    {
        cout << s << "-->";
    }

    cout << endl;

    //Modify List
    // sort list in ascending order
    l2.sort();

    // reverse the list
    l2.reverse();

    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << (*it) << "-->";
    }
    return 0;
}