/*C PROGRAM THAT ASK THE USER TO ENTER THE PRICE,QUANTITY  AND DISPLAY TOTAL PURCHASED*/

#include<stdio.h>
int Orch ();
int Mainflr ();
int Balc ();
void Totalrev(void);

int main()
{
    Totalrev();
    return 0;
}
int Orch ()
{
    int Noorch,Qty1,Amount1;
    printf("PRICE OF ORCHESTRA: \n");
    scanf("%d", &Noorch);
    printf("HOW MANY ORCHESTRA SEATS: \n");
    scanf("%d", &Qty1);
    Amount1 = Noorch * Qty1;
    printf("The Orchestra reserved %d with the price of %d each. The Total Amount is %d\n", Qty1,Noorch,Amount1);

    return Amount1;
}
int Mainflr ()
{
    int Nomainflr,Qty2,Amount2;
    printf("\nPRICE OF MAIN FLOOR: \n");
    scanf("%d", &Nomainflr);
    printf("HOW MANY MAIN FLOOR SEATS: \n");
    scanf("%d", &Qty2);
    Amount2 = Nomainflr * Qty2;
    printf("The Main Floor reserved %d with the price of %d each. The Total Amount is %d\n", Qty2,Nomainflr,Amount2);

    return Amount2;
}
int Balc ()
{
    int Nobalc,Qty3,Amount3;
    printf("\nPRICE OF BALCONY: \n");
    scanf("%d", &Nobalc);
    printf("HOW MANY BALCONY SEATS: \n");
    scanf("%d", &Qty3);
    Amount3 = Nobalc * Qty3;
    printf("The Balcony reserved %d with the price of %d each. The Total Amount is %d\n", Qty3,Nobalc,Amount3);

    return Amount3;
}
void Totalrev(void)
{
    int Total_Amount;
    Total_Amount = Orch() + Mainflr() + Balc();
    printf("\n=======YOUR TOTAL AMOUNT REVENUE IS %d FOR EACH SEAT CATEGORIES. THANK YOU FOR RESERVING=======", Total_Amount);
    return 0;

}
