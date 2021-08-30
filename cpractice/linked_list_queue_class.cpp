#include <iostream>
using namespace std;

class Qnode{
public:
    int data;
    Qnode* next;
    Qnode(int d){
        data = d;
        next = NULL;
    }
};

class Queue{
public:
    Qnode *front , *rear;
    Queue(){
        front = rear = NULL;
    }
    void enqueue(int data);
    void dequeue();
    int qfront();
    int qrear();
};

void Queue::enqueue(int data){
    Qnode* temp = new Qnode(data);
    if(rear == NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void Queue::dequeue(){
    if(front == NULL){
        cout << "Queue is empty" << endl;
        return;
    }
    Qnode* temp = front;
    front = front->next;
    if(front == NULL){
        rear = NULL;
        return;
    }
    cout << temp->data << " dequeued from queue"<< endl;
    delete temp;
}

int Queue::qfront(){
    if(front == NULL){
        cout << "Queue is already Empty" << endl;
        return 0;
    }
    return front->data;
}

int Queue::qrear(){
    if(rear == NULL){
        cout << "Queue is already Empty"<< endl;
        return 0;
    }
    return rear->data;
}

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    cout << "Front : " << q.qfront()<< endl;
    cout << "Rear : " << q.qrear()<< endl;
    return 0;
}