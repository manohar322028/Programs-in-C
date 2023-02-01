#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    char loop[60];
    printf("write anything to loop (characters after space are not considered)\n");
    scanf("%s", loop);
    printf("how many times do you want to loop the word **%s**?\n", loop);
    scanf("%d", &i);
    printf("executing...\n");
    system("pause");
for(a=1; a<=i; a++){

printf("%s\n", loop);
}
system("pause");
    return 0;


}
