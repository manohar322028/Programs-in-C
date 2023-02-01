#include<stdio.h>
#include<conio.h>
void main()
{
    float mark1, mark2, percentage;
    char a[60],b[60];
    printf("enter name of first subject:\n");
    scanf("%s", a);
    printf("enter the mark of first subject:\n");
    scanf("%f", &mark1);
    printf("enter name of second subject:\n");
    scanf("%s", b);
    printf("enter marks of second subject:\n");
    scanf("%f", &mark2);
    printf("result:\n");
    system("pause");
    printf("subject: %s\t", a);
    printf("marks= %f\n", mark1);
    printf("subject: %s\t", b);
    printf("marks=%f\n", mark2);
    printf("percent= ((%f+%f)/200)*100%\n", mark1, mark2);
    percentage = ((mark1+mark2)/200)*100;
    printf("= %f%%\n", percentage);

    if(percentage>40)
        printf("passed\n");
    else
        printf("failed\n");
    system("pause");

}
