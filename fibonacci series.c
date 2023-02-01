#include <stdio.h>

int main()
{
  int arr[50], len, i;
  printf("\n\n enter length of the fibonacci series:\n");
  scanf("%d", &len);
  arr[0]=0;
  arr[1]=1;
  for(i=2;i<len;i++)
        arr[i]=arr[i-1]+arr[i-2];
  printf("\n *******fibonacci series*******\n");
for(i=0;i<len;i++)
    printf("%d ", arr[i]);
printf("\n");

return 0;
}
