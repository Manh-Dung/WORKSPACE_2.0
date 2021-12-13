#include <iostream>
using namespace std;

typedef struct NODE{
    int data;
    struct NODE *next;
}node;

typedef struct LinkedList{
    node *head;
    node *tail;
}list;

void createList(list &l){
    l.head = NULL;
    l.tail = NULL;
}

node *createNode(int value){
    node *p = new node;
    p->data = value;
    p->next = NULL;
    return p;
}

void addHead(list &l, node *p){
    if (l.head == NULL)
        l.head = l.tail = p;
    p->next = l.head;
    l.head = p;
}

void addTail(list &l, node *p){
    if (l.head == NULL)
        l.head = l.tail = p;
    l.tail->next = p;
    l.tail = p;
}

void input(list &l){
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cout << "\nNhap gia tri: ";
        cin >> x;
        node *p = createNode(x);
        addTail(l, p);
    }
}

void output(list l){
    cout << "\n\n\t";
    for (node *p = l.head; p != NULL; p = p->next){
        cout << p->data << "     ";
    }
}

void free(list &l){
    while(l.head != NULL){
        node *p = l.head;
        l.head = l.head->next;
        delete p;
    }
}

// Hieu r ko can nua

int main(){
    list l;
    createList(l);
    input(l);
    output(l);

    free(l);
}