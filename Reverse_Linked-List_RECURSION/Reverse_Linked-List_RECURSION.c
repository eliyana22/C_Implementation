#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void Recursive(struct Node* p){
    if(p->next == NULL) {
           head = p;
            return;
    }   // Exit condition

    Recursive(p->next);                    // Recursive call
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;

}

//DISPLAY FUNCTION
void Print(){
    struct Node* temp = head;

    printf("LIST: ");
    while(temp != NULL){
        printf(" %d",temp->data);
        temp = temp ->next;
    }
    printf("\n");
}

void Insert( int data, int n){
    int i;

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp -> data = data;
    temp -> next = NULL;

    if(n == 1) {
            temp ->next = head;
            head = temp;
            return;
    }
    else{
        struct Node* temp1 = head;
        for(i=0; i< n-2;i++) {
            temp1 = temp1 -> next;
        }
        temp->next = temp1 ->next;
        temp1 -> next =  temp;
    }
}


int main(){
    struct Node* head = NULL;       // Local variable

    Insert(2,1);
    Insert(4,2);
    Insert(6,3);
    Insert(8,4);
    Insert(10,5);
    Insert(12,6);
    Insert(14,7);
    Insert(16,8);
    Print();
    printf("\n");
    printf("\nREVERSE LIST: \n");
    Recursive(head);
    Print();
}
