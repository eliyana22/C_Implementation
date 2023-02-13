/*C PROGRAM THAT DISPLAY THE TOTAL ITEM OF THE CUSTOMER WHO PURCHASED ENVELOPES AND PAGES*/

#include <stdio.h>
#include <string.h>

float Calcbill (float Noenv, float Chargeenv, float Nopg, float Chargepg);
void Display (float Totalbill, char Name []);

int main()
{
   float noenvelope, chargeenvelope, nopage, chargepage;
   float Amtbill;
   char Name[20];

   printf("Enter Name: ");
   gets (Name);
   printf("Enter Number of Envelopes: ");
   scanf("%f", &noenvelope);
   printf("Enter Charge of Envelopes: ");
   scanf("%f", &chargeenvelope);
   printf("Enter Number of Pages: ");
   scanf("%f", &nopage);
   printf("Enter Charge of Pages: ");
   scanf("%f", &chargepage);
   Amtbill = Calcbill(noenvelope, chargeenvelope, nopage, chargepage);
   Display(Amtbill,Name);

}
float Calcbill (float Noenv, float Chargeenv, float Nopg, float Chargepg)
{
    float Amtbill1;
    Amtbill1 = (Noenv * Chargeenv) + (Nopg * Chargepg);
    return Amtbill1;
}
void Display (float Totalbill, char Name [])
{
    printf ("The Total is %.2f. Thank You For Coming %s", Totalbill, Name);
}

