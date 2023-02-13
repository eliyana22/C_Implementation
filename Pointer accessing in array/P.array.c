/*POINTER ACCESSING IN ARRAY*/

#include <stdio.h>

int main(){
    int a[10], sum, *p = NULL;
    sum =0;

    // THE ADDRESS OF 'p' SHOULD BE LESSER THAN '&a[10]'
    for(p=&a[0]; p < &a[10]; p++){
        // GET THE INTEGERS
        scanf(" %d",p);
        // COMPUTE THE TOTAL SUM
        sum+= *p;
        printf("TOTAL: %d", sum);
    }

    return 0;
}
