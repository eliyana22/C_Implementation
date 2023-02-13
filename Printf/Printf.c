#include <stdio.h>

int main()
{
    float NoEnvelopes,NoPages,ChargeEnv,ChargePages;
    float AmtEnv,AmtPage;
    float TotalAmount;

    NoEnvelopes = 50;
    NoPages = 100;
    ChargeEnv = 0.10;
    ChargePages = 0.25;

    AmtEnv = NoEnvelopes * ChargeEnv;
    AmtPage = NoPages * ChargePages;
    TotalAmount = AmtEnv + AmtPage;

    printf("Charge due for the NoEnvelopes, ChargeEnv : %.2f\n", AmtEnv);
    printf("Charge due for the NoPages, ChargePages : %.2f\n", AmtPage);
    printf("Total of Amount Due and Pages AmtEnv, AmtPage : %.2f\n", TotalAmount);

}
