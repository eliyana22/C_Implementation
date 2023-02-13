#include <stdio.h>

int main ()
{
    int i,j,col,row;

    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("\nEnter number of column: ");
    scanf("%d",&col);

    int table[row][col];

    for (i=0; i<row; i++)
    {
        for(j=0;j<col; j++)
        {
            printf("(ROW = %d :COLUMN = %d): ",i+1,j+1);
            scanf("%d",&table[i][j]);
        }
    }

    printf("\n");
    for (i=0; i<row; i++)
    {
        for(j=0;j<col; j++)
        {
            printf(" %d ", table[i][j]);
        }
        printf("\n");
    }


}
