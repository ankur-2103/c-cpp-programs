#include <iostream>
using namespace std;

int kandesAlgo(int arr[], int n){
    int max_f = -2147483648;
    int max_curr = 0;
    for(int i=0; i<n; i++){
        max_curr += arr[i];
        if(max_f < max_curr){
            max_f = max_curr;
        }
        if(max_curr < 0){
            max_curr = 0;
        }
    }
    return max_f;
}

int main(){
    int arr[] = {-1,-2,-3,-4};
    cout << kandesAlgo(arr, 4);
    return 0;
}