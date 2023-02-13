/*POINTER ARGUMENT TO SCANF*/

#include <stdio.h>

int main(){
    int value;
    int *pvalue = NULL;

    //  SET POINTER TO REFER VALUE
    printf("ENTER VALUE: ");
    pvalue = &value;

    //READ INTO VALUE VIA THE POINTER
    scanf(" %d",pvalue);

    //OUTPUT THE VALUE ENTERED
    printf("\nYOU ENTERED %d\n", value);

   return 0;
}
