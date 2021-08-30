class MyCircularQueue {
public:
    int front=0, rear=0, capacity;
    MyCircularQueue(int k) {
        que = vector<int>(k, -1);
        this->capacity = k;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        que[rear++ % capacity] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return 0;
        }
        que[front++ % capacity];
    }
    
    int Front() {
        if(isEmpty()){
            return 0;
        }
        return que[front%capacity];
    }
    
    int Rear() {
        if(isEmpty()){
            return 0;
        }
        return que[(rear-1)%capacity];
    }
    
    bool isEmpty() {
        return (rear-front == 0);
    }
    
    bool isFull() {
        return (rear-front == capacity);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */