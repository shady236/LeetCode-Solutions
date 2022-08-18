


typedef struct {
    int data[100];
    int strt;
    int size;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* que = malloc(sizeof(MyQueue));
    
    que->strt = 0;
    que->size = 0;
    
    return que;
}

void myQueuePush(MyQueue* obj, int x) {
    int idx = obj->strt + obj->size;
    idx %= 100;
    
    obj->data[idx] = x;
    
    obj->size++;
}

int myQueuePop(MyQueue* obj) {
    int ret = obj->data[obj->strt];
    
    obj->size--;
    obj->strt++;
    obj->strt %= 100;
    
    return ret;
}

int myQueuePeek(MyQueue* obj) {
    return obj->data[obj->strt];
}

bool myQueueEmpty(MyQueue* obj) {
    return (obj->size == 0);
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