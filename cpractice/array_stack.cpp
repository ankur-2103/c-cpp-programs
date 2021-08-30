#include <iostream>
#include <cstdlib>
using namespace std;

int top = -1;
int s;

void push(int *arr, int data){
    if(top >= s-1){
        cout << "Stack is full" << endl;
        return;
    }
    top = top+1;
    arr[top] = data;
    cout << data << " is pushed in stack" <<endl;
}

int pop(int *arr){
    if(top == -1){
        cout << "Stack is empty" << endl;
        return 0;
    }
    int data = arr[top];
    top = top-1;
    return data;
}

int peek(int *arr){
    if(top == -1){
        cout << "Stack is empty" << endl;
        return 0;
    }
    return arr[top];
}

int main(){
    cout << "Enter stack size : ";
    cin >> s;
    int *arr = (int*)malloc(s*sizeof(int));
    push(arr, 10);
    push(arr, 20);
    push(arr, 30);
    push(arr, 40);
    push(arr, 50);
    push(arr, 60);
    cout << "Peek : " << peek(arr)<< endl;
    cout << pop(arr) << " is poped from stack" << endl;
    cout << "Peek : " << peek(arr)<< endl;
    push(arr, 60);
    return 0;
}