/* C PROGRAM THAT REVERSES THE ELEMENTS OF AN ARRAY IN PLACE.
THE FUNCTION MUST BE ACCEPT ONLY ONE POINTER VALUE AND RETURN VOID.*/

#include <stdio.h>
#define MAX 10
void Preverse (int *passer);

int main (){
    int arr[MAX],i;

    for(i=0;i<MAX;i++){
        scanf(" %d", &arr[i]);
    }
    Preverse(arr);

    return 0;
}
void Preverse (int *passer){
    int i;
    printf("\n\n REVERSE DISPLAY\n\n");
    for (i = (MAX-1); i >= 0; i--){
        printf("\t%d",*(passer+i));
    }
    printf("\n\n");
}
