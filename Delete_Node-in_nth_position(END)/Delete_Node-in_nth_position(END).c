#include <stdio.h>
#include  <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;      // GLOBAL VARIABLE
struct Node* end;      // GLOBAL VARIABLE

void Insert(int data);  // INSERT AN INTEGER AT THE END OF THE LIST
void Print();                   // PRINT ALL ELEMENT IN THE LIST
void Delete(int n);     // DELETE NODE AT POSITION N

int main(){
    int n;

    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);  // LIST: 2, 4, 6, 5
    Print();

    printf("Enter a position: ");
    scanf(" %d",&n);
    Delete(n);
    Print();

    return 0;

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


// INSERT FUNCTION
void Insert(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp ->data = data;
    temp -> next = NULL;

    if(head == NULL){
        head = temp;
        end = temp;
        return;
    }
    end -> next = temp;
    end = temp;
}

// DELETE FUNCTION
void Delete(int n){
    int i;

    struct Node* temp1 = head;

    if(n==1){
        head = temp1->next; // HEAD NOW POINRS TO SECOND NODE.
        free(temp1);
        return;
    }


    for(i = 0; i < n-2; i++){
        // TEMP1 POINTS TO (N-1)NTH NODE
        temp1 = temp1 -> next;
    }
    struct Node* temp2 = temp1 -> next; // nth Node
    temp1 ->next = temp2 ->next; // (n+1)th Node
    free(temp2); // delete temp2
}

