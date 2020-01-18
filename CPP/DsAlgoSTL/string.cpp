#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

/* This program can be used to study basic implementation of strings 

Headers to include:
<cstring>

Methods discussed are :
.lenght() | returns the length of string
getline() | taking input from user
sort()    | for sorting strings lexiographically
*/

//call at Line: 62 Custom compare function
bool compare(string a, string b)
{
    // operator > is overloaded on strings
    // it returns true if a is Lexiographically greater than b
    // return a.length() > b.length(); //| sorting based on length
    return a > b;
}

int main()
{

    //declaring string
    //method : 1
    string name = "Harmandeep";

    //method : 2 | input from user
    string work;
    cout << "Enter the place you work: ";
    getline(cin, work);

    //printing the string
    cout << name << " works at " << work << endl;

    //we can also parse the string using index
    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << " ";
    }

    cout << endl;

    //array of strings
    string arrString[] = {"Mango", "Apple", "Guava", "Pineapple"};

    //sorting array of strings
    // sort(start, end, comparator_function) | start -> Included , end -> Excluded
    sort(arrString, arrString + 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arrString[i] << ",";
    }

    // Output: Apple,Guava,Mango,Pineapple, | lexiograpically sorted

    cout << endl;

    // We can also pass our custom comaparator function
    sort(arrString, arrString + 4, compare);
    for (int i = 0; i < 4; i++)
    {
        cout << arrString[i] << ",";
    }

    //output: Pineapple,Mango,Guava,Apple,

    cout << endl;

    string s1 = "Hello ";
    string s2 = "world";
    cout << s1 + s2;
}