/*C PROGRAM THAT DISPLAY ONE'S AND TEN'S*/

#include <stdio.h>

int ExTens(int Tens);
int ExOnes(int Ones);

int main()
{
    int number;
    printf("ENTER ANY WHOLE NUMBER: ");
    scanf("%d", &number);
    printf("THE VALUE OF ONES IS: %d\n",ExOnes (number));
    printf("THE VALUE OF TENS IS: %d\n", ExTens (number));

}
int ExTens(int Tens)
{
    int PlcVal;
    PlcVal = (Tens/100)%10;
    return PlcVal;
}
int ExOnes(int Ones)
{
    int PlacVal;
    PlacVal = Ones%10;
    return PlacVal;
}
