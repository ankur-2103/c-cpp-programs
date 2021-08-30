#include <iostream>
#include <set>
#include <map>
using namespace std;

int unionArrSet(int arr1[], int arr2[], int n, int m){
    set<int> s1;
    for(int i=0; i<n; i++){
        s1.insert(arr1[i]);
    }
    for(int i=0; i<m; i++){
        s1.insert(arr2[i]);
    }
    return s1.size();
}

int unionArrMap(int arr1[], int arr2[], int n, int m){
    map<int , int> mp;
    for(int i=0; i<n; i++){
        mp.insert({arr1[i], i});
    }
    for(int i=0; i<m; i++){
        mp.insert({arr2[i], i});
    }
    return mp.size();  
}

void intersectionArr(int arr1[], int arr2[], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] ;
            }
        }
    }

}

int main(){
    int arr1[] = {1, 85, 2, 25, 100};
    int arr2[] = {45, 25, 85, 65, 75};
    cout << unionArrSet(arr1, arr2, 5, 5);
    cout << unionArrMap(arr1, arr2, 5, 5) << endl;
    intersectionArr(arr1, arr2, 5, 5);
    return 0;
}