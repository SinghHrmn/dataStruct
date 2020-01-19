#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

/*
Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant
Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length 
should come first. 

Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.
--------------------------
Input:
3
bat
apple
batman
--------------------------
Output:

apple
batman
bat
--------------------------
*/



bool compare(string a, string b){
    if (a.length() >= b.length() && a.substr(0, b.length()) == b ){
         return true;
    }
    else if (b.length() >= a.length() && b.substr(0, a.length()) == a) {
        return false;
    }
    else{ 
        return a < b;
    }
}
int main() {
    
    int t;
    cin >> t;
    string arr[t];
    for( int i=0; i<t; i++){
        string temp;
        cin >> temp;
        arr[i] = temp;
        // cout << i << "-->" << arr[i] << endl;
        
    }

    
    sort(arr, arr+t, compare);

    for( int i=0; i<t; i++){

        cout << arr[i] << "\n";
        // cout <<"at index : " << i <<" "<< arr[i] << "\n";
    }

    return 0;
}
