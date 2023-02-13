/*Write a program thatt will find the smallest, largest and average values in a collection
of N numbers. Get the value of N before scanning each value in the collection of N numbers.*/

#include <stdio.h>

int main ()
{
    int counts, num1, num2, largest, smallest, num;
    float sum, ave;

    printf("How many numbers would you like to input? ");
    scanf("%d", &counts);
    printf("Enter Number: ");
    scanf("%d ,%d", &num1, &num2);
    sum = num1 + num2;

    if ( num1 > num2 )
    {
        largest = num1;
        smallest = num2;
    }
    else
    {
        largest = num2;
        smallest = num1;
    }
    printf("Enter new num: ");
    scanf("%d", &num);
    while ( (counts - 2) > 0)
    {
            if ( num > largest)
                largest = num;
            if ( num < smallest);
                smallest =  num;
    counts ++;
    sum = sum + num;

    }
    ave = sum / counts;
    printf("The Average of 10 numbers %.2f", ave);

    return 0;

}
