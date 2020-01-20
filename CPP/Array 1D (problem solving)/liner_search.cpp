#include <iostream>
using namespace std;
/// Linear Search implementation

int main() {
    //input the number of elements
    int n; 
    cin>>n; 

    // initialise array and input array values
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //input the key
    int key;
    cin>>key;

    //Linear Search 
    int i=0
    for(i=0; i<n; i++){
        //Try to match with every element
        if(arr[i] == key){
            cout<<"The Array Contains Key "<<key<<" at index "<<i;
            break;
        }
    }
    /// Two ways - Either Loop Completes or we hit break

    if(i==n){
        cout<<"The "<<key<<" is not present in the array";
    }

    return 0;
}
