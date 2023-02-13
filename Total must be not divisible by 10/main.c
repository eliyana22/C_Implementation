/*C PROGRAM THAT COMPUTE THE ALL INTEGERS THAT  MUST BE NOT DIVISIBLE BY 10 TO DISPLAY THE TOTAL SUM*/

#include <stdio.h>
#include <stdlib.h>

int solution (int arr[],int x);
int main()
{
    int x,Arr[100];

    for (x=1;x<=10;x++){
        printf ("Enter the number %d: ",x);
        scanf (" %d",&Arr[x]);
    }
    if (solution (Arr, x)%10!=0)
       printf ("The sum is %d",solution (Arr,x));
    else
      printf ("Divisible by 10");

    return 0;
}
int solution (int arr[], int x)
{
    int sum=0;
    for (x=1;x<=10;x++){
        sum+=arr[x];
    }
    return sum;
}

