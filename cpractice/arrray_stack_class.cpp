#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
public:
    int arr[100];
    Stack(){top = -1;};
    int push(int x);
    int pop();
    int peek();
    bool isempty();
};

int Stack::push(int x){
    if(top >= 100){
        cout << "Stack overflow" << endl;
        return 0;
    }else{
        arr[++top] = x;
        if(arr[top] == x){
            cout << x << " has been pushed" << endl;
        }else{
            cout << "Something went wrong" << endl;
        }
        return 0;
    }
}

int Stack::pop(){
    if(top == -1){
        cout << "Stack is already empty" << endl;
        return  0;
    }else{
        int x = arr[top--];
        return x;
    }
}

int Stack::peek(){
    if(top == -1){
        cout << "Stack is already empty" << endl;
        return  0;
    }else{
        return (arr[top]);
    }
}

bool Stack::isempty(){
    return (top < 0);
}

int main(){
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << s.pop() << " has been removed from stack"<< endl;
    cout<<s.peek()<<" is at top"<<endl;
    while(!s.isempty()){
        cout << s.peek() <<endl;
        s.pop();
    }
    return 0;
}