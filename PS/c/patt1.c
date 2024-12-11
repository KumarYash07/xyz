#include<stdio.h>
int main()
{
    int t,i,j;
    printf("Enter value of t:");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
      {
        for(j=1;j<=i;j++)
        
            printf("%d",i);
        
        printf("\n");
      }
  return 0;
}