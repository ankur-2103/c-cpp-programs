#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* top;

void push(int data){
    Node* temp;
    temp = new Node();
    if(!temp){
        cout << "Heap Overflow" << endl;
        exit(1);
    }
    temp->data = data;
    temp->link = top;
    top = temp;      
}

bool isempty(){
    return (top == NULL);
}

void pop(){
    Node* temp;
    if(isempty()){
        cout<< "Stack is empty"<< endl;
        exit(1);
    }else{
        temp = top;
        top = top->link;
        temp->link = NULL;
        free(temp);
    }
}

int peek(){
    if(isempty()){
        cout<< "Stack is empty"<< endl;
        exit(1);
    }else{
        return (top->data);
    }
}

int main(){
    // push(10);
    // push(20);
    // push(30);
    // push(40);
    // push(50);
    // pop();
    peek();
    while (!isempty())
    {
        peek();
        pop();
    }
    
    return 0;
}