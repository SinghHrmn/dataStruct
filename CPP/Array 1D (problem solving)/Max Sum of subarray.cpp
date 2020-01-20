#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int arr[1000];
    int maximumSum = 0;
    int currentSum = 0;
    int left = 0;
    int right = 0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    //Generate all subarrays
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            currentSum = 0;
            for(int k=i; k<=j; k++){
                currentSum += arr[k];
            }

            //Update maximumSum if currentSum is greater than maxSum
            if(maximumSum<currentSum){
                maximumSum = currentSum;
                left = i;
                right = j;
            }
        }
    }
    cout<<"Maximum Sum is "<<maximumSum<<"\n";
    for(left; left<=right; left++){
        cout<<arr[left]<<",";
    }
    return 0;
}