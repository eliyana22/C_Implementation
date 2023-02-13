#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

//Store the address of front sand rear nodes
struct Node* front = NULL;
struct Node* rear = NULL;

//ENQUEUE AN INTEGER
void Enqueue(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp->data = x;
    temp -> next = NULL;

    if(front == NULL && rear == NULL){
        front = rear = temp;
        return;
    }

    rear -> next = temp;
    rear = temp;

}

// DEQUEUE AN INTEGER
void Dequeue(){
    struct Node* temp = front;

    if(front == NULL){
        printf("QUEUE IS EMPTY\n");
        return;
    }

    if(front == rear){
        front = rear = NULL;
    }
    else{
        front = front -> next;
    }
    free(temp);
}


void Print(){
    struct Node* temp = front;
    printf("\n\n", temp->data);
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}


int main(){
    Enqueue(2); Print();
    Enqueue(4); Print();
    Enqueue(6); Print();
    Enqueue(8); Print();
    Enqueue(10); Print();
    Dequeue(); Print();
    Enqueue(12); Print();
}
