#include <iostream>
using namespace std;

class Queue{
public:
    int front, rear, size;
    unsigned capacity;
    int *array;
};

Queue* create_queue(unsigned capacity){
    Queue* queue = new Queue();
    queue->front = queue->size = 0;
    queue->capacity = capacity;
    queue->rear = capacity - 1;
    queue->array = new int[queue->capacity];
    return queue;
}

bool isfull(Queue* queue){
    return (queue->size == queue->capacity);
}

bool isempty(Queue* queue){
    return (queue->size == 0);
}

void enqueue(Queue* queue, int data){
    if(isfull(queue)){
        cout << "Queue is full" <<endl;
        exit(1);
    }
    queue->rear = (queue->rear + 1)%queue->capacity;
    queue->array[queue->rear] = data;
    queue->size = queue->size + 1;
    cout << data << " is enqueued to queue" << endl;
}

int dequeue(Queue* queue){
    if(isempty(queue)){
        cout << "Queue is empty"<< endl;
        exit(1);
    }
    int data = queue->array[queue->front];
    queue->front = (queue->front + 1)%queue->capacity;
    queue->size = queue->size - 1;
    return data;
}

int front(Queue* queue){
    if(isempty(queue)){
        return 0;
    }
    return queue->array[queue->front];
}

int rear(Queue* queue){
    if(isempty(queue)){
        return 0;
    }
    return queue->array[queue->rear];
}


int main(){
   Queue* queue = create_queue(4);
 
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
 
    cout << dequeue(queue)<< " dequeued from queue\n";
 
    cout << "Front item is "<< front(queue) << endl;
    cout << "Rear item is "<< rear(queue) << endl;

    cout << dequeue(queue)<< " dequeued from queue\n";
    cout << dequeue(queue)<< " dequeued from queue\n";
    cout << dequeue(queue)<< " dequeued from queue\n";

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);
 
    return 0;
}