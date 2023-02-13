
/// Main ()                             CalcBill                                DisplayCustomerBill
/// reads name of the customers         Accept No. of Envelopes                 Accept Total Amount Bill
/// Number of Envelopes                 Accept No. of Pages                     Display Total Amount Bill
/// Number of Pages                     Accept Charge per Envelopes
/// Charge per Envelopes                Accept Charge per Pages
/// Charge per Pages                    COMPUTE & DISPLAY AMOUNT DUE FOR
///                                     ENVELOPE AND PAGES
///                                     Compute Total Amount Bill
///                                     Return Total Amount Bill

#include <stdio.h>
#include <string.h>

float CalcBill(float NoEnv, float ChrgEnv, float NoPg, float ChrgPg);
void DisplayCustomerBill(float AmtBill, char Name[]);

int main ()
{
    float NoEnv,ChargeEnv,NoPages,ChargePg;
    char Name[15];
    float AmtBill;

    printf("Enter Customer Name: ");
    gets(Name);
    printf("Enter Number of Envelopes: ");
    scanf("%f", &NoEnv);
    printf("Enter Charge of Envelopes: ");
    scanf("%f", &ChargeEnv);
    printf("Enter Number of Pages: ");
    scanf("%f", &NoPages);
    printf("Enter Charge of Pages: ");
    scanf("%f", &ChargePg);
    AmtBill = CalcBill(NoEnv,ChargeEnv,NoPages,ChargePg);
    DisplayCustomerBill(AmtBill, Name);
    return 0;
} ///main program
 float CalcBill(float NoEnv, float ChrgEnv, float NoPg, float ChrgPg)
 {
     /// Bill mare return sa CalcBill na nasa itaas
     /// AmtBill ay mapupunta sa kanya ang value ni Bill
     float Bill;
     Bill = (NoEnv * ChrgEnv) + (NoPg * ChrgPg);
     return Bill;
 }
 void DisplayCustomerBill(float AmtBill, char Name[])
 {
    printf("%s", Name);
    printf("Your total is : %.2f\n", AmtBill);

 }
