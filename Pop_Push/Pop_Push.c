#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *top;

void push(int x){

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> link = NULL;

    if (top != NULL)
        temp -> link = top;

    top = temp;

}

void pop(){
    struct Node *temp = top;

    if(top == NULL) return;

    top = temp -> link;
    free(temp);

}

void print(){
    struct Node* temp = top;

    if(temp == NULL){
        printf("\nSTACK IS EMPTY\n");
        return;
    }
    else{
        printf("STACK: ");

        while(temp != NULL){
             printf("%d ",temp -> data);
             temp = temp -> link;
        }
        printf("\n\n");
    }

}

int main(){

    top = NULL;

    push(2);
    push(4);
    push(6);
    push(8);
    push(10);
    print();
    pop();
    print();
    push(2);
    print();

}
