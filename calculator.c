#include <stdio.h>


int main()
{

    double a,b;
    float result;
    char ch1;
    char option;

do{

    printf("calculator:\n");



  printf("Enter operands (separated by newline):\n");
    scanf("%lf %c %lf",&a,&ch1, &b);

    switch(ch1){
        case '+' : result=a+b;
                 printf("The addition is : %.5lf\n",result);
                 break;
        case '-' : result=a-b;
                 printf("The Subtraction is : %.5lf\n",result);
                 break;
        case '*' : result=a*b;
                 printf("The Multiplication is : %.5lf\n",result);
                 break;
        case '/' : result=a/b;
                 printf("The division is : %.5lf\n",result);
                 break;


        default: printf("wrong input\n");

    }
    printf("Do you want to continue ? (y/n)\n");
    scanf("%s",&option );
    }while(option=='y');




 return 0;
}
