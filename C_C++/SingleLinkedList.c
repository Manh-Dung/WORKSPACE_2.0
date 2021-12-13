#include <stdio.h>
#include <stdlib.h>

struct LinkedList{
    int data;
    struct LinkedList *next;
};

typedef struct LinkedList *node;

node createNode(int value){
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

node addHead(node head, int value){
    node temp = createNode(value);
    if (head == NULL){
        head = temp;
    }
    else
        temp->next = head;
        head = temp;
    return head;
}

node addTail(node head, int value){             
    node temp = createNode(value);
    if (head == NULL)
        head = temp;
    else{
        node p;                     // Co mot cai hop p
        p = head;                   // Hay nho no la mot con tro
        while (p->next != NULL)
            p = p->next;
        p->next = temp;
    }
    return head;
}

node addAt(node head, int position, int value){
    if (position == 0 || head == NULL)
        addHead(head, value);
    node p = head;
    int i = 1;
    while(position != i && p != NULL){
        p = p->next;
        i++;
    }
    if (p == NULL || i != position)
        addTail(head, value);
    else{
        node temp = createNode(value);
        temp->next = p->next;
        p->next = temp;
    }
    return head;
}

node delHead(node head){
    if (head == NULL)
        return head;
    else{
        head = head->next;
    }
    return head;
}

node delTail(node head){
    if (head == NULL){
        return head;
    }
    else{
        node p = head;
        while(p->next->next != NULL){
            p = p->next;
        }
        p->next = NULL;
    }
    return head;
}

node delAt(node head, int position){
    if (head == NULL)
        return head;
    if (position == 0 || head->next == NULL)
        delHead(head);
    
    node p = head;
    int i = 1;
    while(position != i && p != NULL){
        p = p->next;
        i++;
    }
    if (p == NULL || i != position)
        delTail(head);
    else{
        p->next = p->next->next;
    }
    return head;
}

int search(node head, int value){
    int position = 0;
    for(node p = head; p != NULL; p = p->next){
        if(p->data == value){
            return position;
        }
        ++position;
    }
    return -1;
}

node delByVal(node head, int value){
    int position = search(head, value);
    while(position != -1){
        head = delAt(head, position);
        position = search(head, value);
    }
    return head;
}

node init(){
    node head;
    head = NULL;
    return head;
}

node input(node head){
    printf ("Nhap n: ");
    int n, value;
    scanf ("%d", &n);
    printf ("\nNhap danh sach: \n");
    for (int i = 0; i < n; i++){
        printf ("\nNhap gia tri can them: ");
        scanf("%d", &value);
        head = addTail(head, value);
    }
    return head;
}

void output(node head){
    printf ("\nXuat danh sach: ");
    for (node temp = head; temp != NULL; temp = temp->next){
        printf("%5d ", temp->data);
    }
}

node sort(node head){
    node temp1;
    node temp2;
    for (temp1 = head; temp1 != NULL; temp1 = temp1->next){
        for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next){
            if (temp1->data > temp2->data){
                int temp = temp1->data;
                temp1->data = temp2->data;
                temp2->data = temp;
            }
        }
    }
    return head;
}

int main(){
    node head;
    head = init();
    head = input(head);
    output(head);

    // head = delByVal(head, 4);
    head = sort(head);
    output(head);
}