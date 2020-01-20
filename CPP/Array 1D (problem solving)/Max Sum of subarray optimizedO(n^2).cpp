#include <iostream>
using namespace std;

///Optimised solution  O(n**2) for Sum of subarray using cumilative sum
int main() {
    int n;
    cin>>n;

    int arr[1000];
    int cumSum[1000] = {0};
    int maximumSum = 0;
    int currentSum = 0;
    int left = 0;
    int right = 0;

    cin>>arr[0];
    cumSum[0] = arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        cumSum[i] = cumSum[i-1] + arr[i];
    }


    //Generate all subarrays
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            currentSum = 0;
            
            currentSum = cumSum[j] - cumSum[i-1];

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