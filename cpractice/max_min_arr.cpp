#include <iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int *arr, int s){
    struct Pair minmax;
    int i;

    if(s == 1){
        minmax.max = arr[0];
        minmax.min = arr[0];
    }

    if(arr[0] > arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for(int i=0; i<s; i++){
        if(arr[i] > minmax.max) minmax.max = arr[i];
        else if(arr[i] < minmax.min) minmax.min = arr[i];
    }
    return minmax;
}

int main(){
    int arr[] = {1000, 44, 665, 65623 ,23265};
    struct Pair minmax = getMinMax(arr, 5);
    cout << minmax.max << " " << minmax.min;   
    return 0;
}