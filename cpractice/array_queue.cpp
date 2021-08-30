#include <iostream>
using namespace std;

int c, front, rear, size, *arr;

void enqueue(int data){
    if(size == c){
        cout << "Queue is full" << endl;
        return;
    }
    if(front == -1){
        front = front +1;
        size = size+1;
    }
    rear = (rear+1)%c;
    arr[rear] = data;
    size = size+1;
    cout << data << " is enqueued in queue" << endl;
}

int dequeue(){
    if(size == -1){
        cout << "Queue is empty" << endl;
        return 0;
    }
    int data = arr[front];
    front = front +1;
    size = size -1;
    return data; 
}

int qfront(){
    if(size == -1){
        cout << "Queue is empty" << endl;
        // exit(1);
    }else{
        return arr[front];
    }
}

int qrear(){
    if(size == -1){
        cout << "Queue is empty" << endl;
    }else{
        return arr[rear];
    }
}

int main(){
    cout << "Enter size of Queue : ";
    cin >> c;
    front = size = -1;
    rear = c-1;
    arr = new int[c];
    enqueue(10); 
    enqueue(20);
    enqueue(30); 
    enqueue(40); 
    enqueue(50);
    cout << "Front : " << qfront() << endl;
    cout << "Rear : "<< qrear() << endl; 
    cout << dequeue() << " dequeued from queue" << endl;
    cout << "Front : " << qfront() << endl;
    enqueue(60);
    cout << "Rear : "<< qrear() << endl;

    return 0;
}