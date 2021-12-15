#include <stdio.h> 
#include <stdlib.h> 
# define MAX 100

struct Queue { 
    int front, rear; 
    unsigned capacity; 
    int *array; 
}; 

typedef struct Queue *queue;
  
queue createQueue(unsigned capacity) 
{
    queue temp;
    temp = (queue)malloc(sizeof(struct Queue)); 
    temp->capacity = capacity; 
    temp->rear = -1; 
    temp->array = (int*)malloc(temp->capacity * sizeof(int)); 
    return temp; 
} 

queue init(queue queue){
    queue->front = 0;
    queue->rear = -1;
}
  
int isFull(queue queue) 
{ 
    return queue->rear == queue->capacity - 1; 
} 
  
int isEmpty(queue queue) 
{ 
    return queue->rear == -1; 
} 
  
void enQueue(queue queue, int item) 
{ 
    if (isFull(queue)) 
        return; 
    ++queue->rear;
    queue->array[queue->rear] = item; 
    printf("%d pushed to queue\n", item); 
} 
  
void deQueue(queue queue) 
{ 
    if (isEmpty(queue)) 
        return; 
    for (int i = queue->front; i < queue->rear; i++){
        queue->array[i] = queue->array[i + 1];
    }
    queue->rear--; 
} 
  
int peak(queue queue) 
{ 
    if (isEmpty(queue)) 
        return -1; 
    return queue->array[queue->rear]; 
} 

void reversePrint(queue queue){
    for (int i = queue->rear; i >= 0; i--){
        printf("\narr[%d] = %d", i, queue->array[i]);
    }
}
  
int main() 
{ 
    queue queue = createQueue(MAX); 
    enQueue(queue, 0);
    enQueue(queue, 1);
    enQueue(queue, 2);
    reversePrint(queue);

    printf("\n");
    deQueue(queue);
    reversePrint(queue);
    return 0; 
} 