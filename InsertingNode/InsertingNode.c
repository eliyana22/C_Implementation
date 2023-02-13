#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void insert(int x);
void print();

int main(){
    int n,i,x;

    // struct Node* head NULL; NOT IN GLOBAL VARIABLE

    head = NULL;

    printf("How many numbers? ");
    scanf(" %d",&n);

    for(i=0;i<n;i++){

        printf("Enter number: ");
        scanf(" %d",&x);
        insert(x);
        print();
         // head = insert(head, x)  NOT A GLOBAL VARIABLE
        // print(head)  NOT A GLOBAL VARIABLE
        printf("\n\n");

    }
}

// NOT IN GLOBAL VARIABLE
/*
    Node*  insert(struct Node* head, int x){
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        temp -> data = x;
        temp -> next = NULL;

        if (head != NULL)
            temp -> next = head;

        head = temp;
        return head;

    }
*/

void insert(int x){

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = NULL;

    if (head != NULL)
        temp -> next = head;

    head = temp;
}

// NOT IN GLOBAL VARIABLE
/*
void print(struct Node* head){

    printf("List is: ");
    while (head != NULL){
        printf("%d ",head -> data);
        head = head -> next ;
    }
}
*/

void print(){

    struct Node* temp = head;

    printf("List is: ");
    while (temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next ;
    }

}
