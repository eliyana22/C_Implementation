#include <stdio.h>

int main()
{
    int num, linecount;
    printf("\n\n\nEnter an integer between 1 and 100: "); //initializing is done by asking the user to enter num
    scanf("%d", &num);

    if (num > 100)
      num = 100;
       linecount = 0;
    while (num > 0) //LIMIT TEST , as long num is greater than zero we continue printing out
    {
        if (linecount < 10)
            linecount++;
    else
        {
            printf("\n");
            linecount = 1;
        }
        printf ("%5d", num --);//UPDATE,after printing num we subtract 1 from it
    }
return 0;
}
