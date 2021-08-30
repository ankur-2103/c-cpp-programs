k// normal solution
// #include <iostream>
// using namespace std;

// void reverseArray(char *arr){
//     size_t size = sizeof(arr) / sizeof(arr[0]);
//     for(int i=0; i<size/2; i++){
//         char x = arr[i];
//         arr[i] = arr[size-1-i];
//         arr[size-1-i] = x;
//     }
//     for(int i=0; i<size; i++){
//         cout << arr[i] ;
//     }
// }

// int main(){
//     char arr[] = {'a', 's', 'd', 'f'};
//     reverseArray(arr);
//     return 0;
// }

// recursive solution
// #include <iostream>
// using namespace std;

// void reverseArray(char *arr, int x, int y){
//     if(x >= y) return;
//     char a = arr[x];
//     arr[x] = arr[y];
//     arr[y] = a;

//     reverseArray(arr, x+1, y-1);
// }

// int main(){
//     char arr[] = {'a', 's', 'd', 'f'};
//     reverseArray(arr, 0, 3);

//     for(int i=0 ;i<4; i++){
//         cout << arr[i] ;
//     }
//     return 0;
// }