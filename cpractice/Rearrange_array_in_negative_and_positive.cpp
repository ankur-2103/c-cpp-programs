#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reArrangeArray(int *arr[], int n){
    stack<int> positive;
    stack<int> negative;

    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            negative.push(arr[i]);
        }else{
            positive.push(arr[i]);
        }
    }

    if(!negative.empty()){
        arr[0] = negative.top();
        negative.pop();
    }

    for(int i=1; i<n ; i++){
        if(i%2 == 0){
            if(!positive.empty()){
                arr[i] = positive.top();
                positive.pop();
            }else if(!negative.empty()){
                arr[i] = negative.top();
                negative.pop();
            }
        }else{
            if(!negative.empty()){
                arr[i] = negative.top();
                negative.pop();
            }else if(!positive.empty()){
                arr[i] = positive.top();
                positive.pop();
            }
        }
    }

    return 1;
}

int main(){
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = 10;



    for(auto i : arr){
        cout << i << endl;
    }
    return 0;
}