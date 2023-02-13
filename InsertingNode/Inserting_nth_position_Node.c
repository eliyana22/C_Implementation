#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void insertt(int data, int n);
void print();

int main(){
    int get,change;

    head = NULL;  // empty list

    insertt(2,1);    // List: 2
    insertt(3,2);   // List: 2, 3
    insertt(4,1);   // List: 4, 2, 3
    insertt(5,2);   // List: 4, 5, 2, 3
    print();
}

void insertt(int data, int n){
    // Node* temp1 = new Node();  C++
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));

    temp1 -> data = data;
    temp1 -> next = NULL;
    if(n ==1){
        temp1 -> next = head;
        head = temp1;
        return;
    }

     struct Node* temp2 = head;

     for (int i = 0; i < n-2; i++){
            temp2 = temp2 -> next;
     }

     temp1 -> next =  temp2 -> next;
     temp2 -> next = temp1;
}

void print(){
    struct Node* temp = head;
    printf("List is: ");
    while (temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> next ;
    }
}
