#include<iostream>
using namespace std;


int main(){

    float x = 1.0;
    // x denotes the prob of 2people having same b'day
    float num = 365;
    float denom = 365;

    int people = 0;

    float p; cin >> p;
    if(p == 1.0){
        cout << "365" << endl;
        return 0;
    }

    while( x > (1- p)){
        x = x*(num/denom);
        people++;
        num--;
        cout << "people " << people << " and " << x << endl;
    }

    return 0;
}