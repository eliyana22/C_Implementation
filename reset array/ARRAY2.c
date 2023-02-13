#include<stdio.h>
void ResetArray(int Arrayx[], int reset);
int main()
{
    int x[100];
    int i,p,reset;
    int ArrayX;

    printf("How many value to input: ");
    scanf("%d", &p);

    printf("Enter %d value:\n",p);
    for(i=0; i<p; i++)

        scanf("%d", &x[i]);

    printf("How many values would you like to reset: ");
    scanf("%d", &reset);

    ResetArray(x,reset);

    printf("The initial value is: ");
    for(i=0; i<p; i++)
    {
        printf("%d, ",x[i]);
    }

    return 0;
}
void ResetArray(int ArrayX[], int reset)
{


    int i=0;
    do
    {
        ArrayX[i]=0;
        i++;
    }while(i<reset);

}
