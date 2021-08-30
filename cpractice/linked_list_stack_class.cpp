#include <iostream>
using namespace std;

class Snode{
    public:
    int data;
    Snode* next;
    Snode(int d){
        data = d;
        next = NULL;
    }
};

class Stack{
    public:
    Snode* top = NULL;
    void push(int data);
    int pop();
    int peek();
    bool isempty();
};

void Stack::push(int data){
    Snode* temp = new Snode(data);
    temp->next = top;
    top = temp;
}

bool Stack::isempty(){
    return (top == NULL);
}

int  Stack::pop(){
    if(isempty()){
        cout << "Stack is empty" << endl;
        return 0;
    }
    Snode* temp = top;
    top = top->next;
    cout << temp->data << " is poped from stack" <<endl;
    delete temp;
}

int Stack::peek(){
    if(isempty()){
        cout << "Stack is empty" << endl;
        return 0;
    }
    return (top->data);
}

int main(){
    Stack s;
    s.push(10);
    cout << "Peek : " << s.peek() <<endl;
    s.push(20);
    cout << "Peek : " << s.peek() <<endl;
    s.push(30);
    cout << "Peek : " << s.peek() <<endl;
    s.push(40);
    cout << "Peek : " << s.peek() <<endl;
    s.push(50);
    cout << "Peek : " << s.peek() <<endl;
    s.pop();
    cout << "Peek : " << s.peek() <<endl;
    return 0;
}