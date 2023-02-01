#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    int a[5];
    printf("enter the array values\n");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    printf("\n array a[5] contains the following values\n");
    for (i=0; i<5; i++)
        printf("a[%d] = %d\n", i, a[i]);
    system("PAUSE");
    return 0;
}


