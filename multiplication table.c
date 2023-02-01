#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a=5;
    int row, column, product[a][a];
    int i,j;
    printf("multiplication table\n\n");
    printf("   ");
    for(j=1;j<=a;j++)
        printf("%4d",j);
    printf("\n");
    printf("___________________________________\n");
    for(i=0;i<a;i++)
    {
        row=i+1;
        printf("%2d|", row);
        for(j=1;j<=a;j++)
        {
            column=j;
            product[i][j]=row*column;
                printf("%4d", product[i][j]);


        }
        printf("\n");
    }

        system("PAUSE");
        return 0;
}
