 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *student[10][256];
    char name[50];
    int i,f;

    for(i=0;i<10;i++){

        printf("Enter your name: \n");
        scanf("%s",student);

        system("PAUSE");

        printf("Do you want to continue\n");
        printf("[1] yes\n");
        printf("[2] no\n");
        scanf("%d",&f);

        if(f==1){
            system("cls");
        }
        else if(f==2){
            system("cls");
            break;
        }
        else{
            printf("Choose only one and two\n");
        }
    }
}
