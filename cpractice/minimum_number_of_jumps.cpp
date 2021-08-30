#include <iostream>
using namespace std;

int numberOfJumps(int arr[], int n){
    if(n==1) return 1;
    int ans = 0;
    for(int i=0; i<n ; i++){
        if(arr[i] == 0){
            ans = -1;
        }
        i += arr[i]-1;
        ans++; 
    }
    return ans;
}

int main(){
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << numberOfJumps(arr, 11);
    return 0;
}