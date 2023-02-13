#include <stdio.h>

int main()
{
    int i;
    float a[10], b[10], sum1=0, sum2=0;
    float average;

    for  (i=0; i<10; i++)
    {
        printf("Enter number[%d]: ", (i+1));
        scanf("%f", &a[i]);
        sum1= sum1 + a[i];
    }
    printf("SUM NUMBER 1: %.0f\n", sum1);

    for  (i=0; i<10; i++)
    {
        printf("Enter number [%d]: ", (i+1));
        scanf("%f", &b[i]);
        sum2 = sum2 + b[i];
    }
    printf("SUM NUMBER 2: %.0f", sum2);

    average = (sum1+sum2)/20;
    printf("\n\nAVERAGE OF ALL ELEMENTS IS: %.2f\n\n", average);

    return 0;
}
