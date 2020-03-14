#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

/* This program can be used to study basic implementation of strings 

Headers to include:
<cstring>

Methods discussed are :
.length()    | returns the length of string
.compare(s1) | compare the string s1 and returns 0 if strings are equal
.clear()     | for clearing the string 
.empty()     | returns a boolean value True or False
.find(s1)    | returns the index of string s1 
.erase(i, n) | removes n chars from index i of string

getline()    | taking input from user
sort()       | for sorting strings lexiographically
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
    string tmp("temperary data");
    char a[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    string hello(a);
    string name = "Harmandeep";
    string strcopy(name);      // copy value of one string to another
    string strcopy1 = strcopy; // copy value of one string to anothers

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

    // Parsing using iterators
    for (auto it = name.begin(); it != name.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // Parsing using For each loop
    for (auto c : name)
    {
        cout << c << " ";
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

    // Append
    string s1 = "Hello ";
    string s2 = "world";
    cout << s1 + s2 << "\n";
    s1.append(s2);

    cout << s1 << "\n";

    // Removing elements
    s1.clear();

    // Finding if the string is empty
    string empstr;
    if (empstr.empty())
    {
        cout << "String is empty \n";
    }

    // Finding a word in string
    string phrase = "I love to eat apple and mango";
    int idx = phrase.find("apple");
    cout << idx << "\n";

    // Erasing a word from string;
    string word = "apple";
    int n = word.length();
    phrase.erase(idx, n + 1); // +1 for removing space
    cout << phrase << "\n";
}