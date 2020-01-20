#include <iostream>
using namespace std;

///function for solving factorial
int factorial(int n){
    int ans = 1;
    for (int i=1;i<=n; i++){
        ans = ans*i;
    }
    return ans;
}

/// function for computing NCR
int NCR(int n,int r){
    int ans = factorial(n)/(factorial(n-r)*factorial(r));
    return ans;
}

int main() {
    int n, r;
    cin>>n>>r;
    int ans = NCR(n, r);
    cout<<ans;
    return 0;
}
