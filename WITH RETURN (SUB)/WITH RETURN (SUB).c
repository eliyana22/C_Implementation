#include <stdio.h>

float CalcEnvelopes();
float CalcPages();
void CalcBill(void);


int main()
{
    CalcBill();
    return 0;
}

// Function Definition part

float CalcEnvelopes()
{
    int NoEnvelopes;
    float ChargeEnv,AmtEnv;

    printf("Enter Number of Envelopes: ");
    scanf("%d", &NoEnvelopes);

    printf("Enter Charge Number per Envelopes: ");
    scanf("%f", &ChargeEnv);

    AmtEnv = NoEnvelopes * ChargeEnv;
    printf("You are billed for %.2f\n", AmtEnv);

    return AmtEnv;
}

 float CalcPages()
 {
    int NoPages;
    float ChargePage,AmtPages;

    printf("\nEnter Number of Pages: ");
    scanf("%d", &NoPages);

    printf("Enter Charge Number per Pages: ");
    scanf("%f", &ChargePage);

    AmtPages = NoPages * ChargePage;
    printf("You are billed for %.2f\n", AmtPages);

    return AmtPages;
 }

 void CalcBill(void)
 {
     float TotalAmt;

     TotalAmt = CalcEnvelopes() + CalcPages();
     printf("\nYour Total : %.2f\n", TotalAmt);
 }
