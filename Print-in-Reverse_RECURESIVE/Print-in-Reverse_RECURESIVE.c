#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void Recursive(struct Node* p){

    if(p == NULL) {
            printf("\n");
            return;
    }   // Exit condition

    Recursive(p->next);                    // Recursive call
    printf(" %d", p->data);

}

void Print(struct Node* p){

   if(p == NULL) {
            return;
    }   // Exit condition

    printf(" %d", p->data);     // First print the value in the node
    Print(p->next);                    // Recursive call

}

struct Node* Insert(struct Node* head, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp -> data = data;
    temp -> next = NULL;

    if(head == NULL) {
            head = temp;
    }
    else{
        struct Node* temp1 = head;
        while(temp1 -> next != NULL) {
            temp1 = temp1 -> next;
        }

        temp1 -> next =  temp;
    }
    return head;
};

int main(){
    struct Node* head = NULL;       // Local variable

    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);
    head = Insert(head, 10);
    head = Insert(head, 12);
    head = Insert(head, 14);
    head = Insert(head, 16);
    printf("LIST: \n\n");
    Print(head);
    printf("\n");
    printf("\nREVERSE LIST: \n");
    Recursive(head);
    printf("\n");
}

