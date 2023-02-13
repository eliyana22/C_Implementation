#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void Insert(int data);
void Reverse();
void print();

//NO GLOBAL VARIABLE
/*
    struct Node*  Insert(struct Node *head, int data);
    struct Node* Reverse(struct Node *head);
    void Print(struct Node *head);
*/


int main(){
    // struct Node *head = NULL;        LOCAL VARIABLE
    // head = Insert(head,2);                 Insert(struct Node *head, int data)
    // head = Insert(head,4);
    // head = Insert(head,6);
    //Print(head);                                      Print(struct Node*head)
    // head = Reverse(head);                Reverse(struct Node* head)
    //Print(head);

    int get,change;

    head = NULL;  // empty list

    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);  // LIST: 2, 4, 6, 5
    print();
    Reverse();
    print();

}

//REVERSE FUNCTION
void Reverse(){

    struct Node* current, *prev,*next;
    current = head;
    prev = NULL;

    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

// NO GLOBAL VARIABLE
/*
struct Node* Reverse (struct Node *head){

    struct Node* current, *prev,*next;
    current = head;
    prev = NULL;

    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
*/

// INSERT FUNCTION
void Insert(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp ->data = data;
    temp -> next = head;
    head = temp;
}

// NO GLOBAL VARIABLE
/*
struct Node* Insert(struct Node *head, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp ->data = data;
    temp -> next = head;
    head = temp;
    return head;
}
*/


void print(){

    struct Node* temp = head;

    printf("List is: ");
    while (temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next ;
    }
      printf("\n");
}


// NO GLOBAL VARIABLE
/*
void Print(struct Node *head){

    printf("List is: ");
    while (head != NULL){
        printf("%d ",head -> data);
        head = head -> next ;
    }
      printf("\n");
}
*/

