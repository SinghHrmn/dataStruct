#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

/*

Hash Map helps to insert, search, delete effectively. It is Key Value pair data structure.


CPP includes 2 hash methods 1) <unordered_map> 2) <map>  

Headers to include ( choose according to your need ):
<unordered_map>  | if order doesn't matter | O(1) for insert, search, delete    | use actual hash functions
<map>            | if order matter         | O(log N) for insert, search, delete| use balanced BST / red black

methods discusses:
    .insert(key, value)
    .find(key)
    .count(key)
    [k]
    erase[key]
    .end()

*/

int main()
{

    //declaration unordered map
    unordered_map<string, int> mymap;

    //Inserting Values
    //method 1
    mymap["Mango"] = 100;
    mymap["Apple"] = 120;

    //method 2
    mymap.insert(make_pair("Guava", 60));

    //searching
    if (mymap.count("Apple") == 1)
    {
        cout << "Price of apple is: " << mymap["Apple"] << endl;
    }

    //iterartors to search
    auto f = mymap.find("Mango"); // auto automatically cast to the data provided

    // if Mango not in map, f points to the end of map
    if (f != mymap.end())
    {
        //f behaves like a poniter f->first gives 1st value of pair similarly f-> second give second value
        cout << "Price of Mango is: " << f->second << endl;
    }
    else
    {
        cout << "Mango Doesn't Exist";
    }

    //deletion
    mymap.erase("Apple");
    if (mymap.count("Apple") == 0)
    {
        cout << "Apple doesn't exist";
    }

    // output:
    // Price of apple is: 120
    // Price of Mango is: 100
    // Apple doesn't exist

    return 0;
}