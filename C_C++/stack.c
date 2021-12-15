#include <stdio.h> 
#include <stdlib.h> 
  
struct Stack { 
    int top; 
    unsigned capacity; 
    int *array; 
}; 

typedef struct Stack *stack;
  
stack createStack(unsigned capacity) 
{
    stack temp;
    temp = (stack)malloc(sizeof(struct Stack)); 
    temp->capacity = capacity; 
    temp->top = -1; 
    temp->array = (int*)malloc(temp->capacity * sizeof(int)); 
    return temp; 
} 
  
int isFull(stack stack) 
{ 
    return stack->top == stack->capacity - 1; 
} 
  
int isEmpty(stack stack) 
{ 
    return stack->top == -1; 
} 
  
void push(stack stack, int item) 
{ 
    if (isFull(stack)) 
        return; 
    ++stack->top;
    stack->array[stack->top] = item; 
    printf("%d pushed to stack\n", item); 
} 
  
void pop(stack stack) 
{ 
    if (isEmpty(stack)) 
        return; 
    stack->top--; 
    stack->capacity--;
} 
  
int peak(stack stack) 
{ 
    if (isEmpty(stack)) 
        return -1; 
    return stack->array[stack->top]; 
} 

void reversePrint(int *a, int n){
    for (int i = n - 1; i >= 0; i--){
        printf("\na[%d] = %d", i, a[i]);
    }
}

void decToBin(stack stack, int data){
    int x;
    for (; data > 0; data = data / 2){
        x = data % 2;
        push(stack, x);
    }
}

void binaryPrint(stack stack){
    printf("So he thap phan chuyen sang so he nhi phan la: ");
    for (int i = stack->top; i >= 0; i--){
        printf("%d", stack->array[i]);
    }
}
  
int main() 
{ 
    stack stack = createStack(100); 
    printf("Nhap so he thap phan can chuyen: ");
    int x;
    scanf("%d", &x);
    decToBin(stack, x);
    binaryPrint(stack);
    return 0; 
} 