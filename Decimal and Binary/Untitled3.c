#include<stdio.h>

int main(){
    int n, s = 0, n1 = 0, n2 = 1, total = 0, rem, deci, bin = 0, j = 1;
    printf("Input number of terms: ");
    scanf("%d", &n);
    printf(".___________.____________.");
    printf("\nDecimal\t\tBinary\n");
    printf(".___________.____________.\n");
    printf("%d\t\t%d\n", n1, n1);
    printf("%d\t\t%d\n", n2, n2);
    for(int i = 0; i <= (n - 3); i++) {
        s = n1 + n2;
        n1 = n2;
        n2 = s;

        deci = s;
        while(deci > 0){
            rem = deci % 2;
            deci = deci / 2;
            bin = bin + (j * rem);
            j = j * 10;
        }
        printf("%d\t\t%d\n", s, bin);
        bin = 0;
        j = 1;
        total += s;
    }

    deci = total;
    while(deci > 0){
        rem = deci % 2;
        deci = deci / 2;
        bin = bin + (j * rem);
        j = j * 10;
    }

    printf(".___________.____________.\n");
    printf("Total: %d\t%d\n", total + 1, bin);
    printf(".___________.____________.");
}
