#define MAX_SIZE 100

typedef struct {
    
    int size;
    int data[MAX_SIZE];
    int front;
    int end;
    
} MyQueue;


MyQueue* myQueueCreate() {
    
    MyQueue* queue=malloc(sizeof(MyQueue));
    
    queue->size=0;
    queue->front=0;
    queue->end=0;
    
    return queue;
    
}

void myQueuePush(MyQueue* obj, int x) {
    
    obj->size++;
    obj->data[obj->end]=x;
    obj->end++;
  
}

int myQueuePop(MyQueue* obj) {
    
    obj->size--;
    obj->front=(obj->front+1)%MAX_SIZE;
    
    return obj->data[(obj->front-1)%MAX_SIZE];
}

int myQueuePeek(MyQueue* obj) {
    return obj->data[obj->front];  
}

bool myQueueEmpty(MyQueue* obj) {
    
    if(obj->size==0)
        return true;
    
    return false; 
}

void myQueueFree(MyQueue* obj) {
    
    free(obj);
   
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/