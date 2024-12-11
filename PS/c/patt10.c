#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter num of lines=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { int p=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",p++);
        }
        for(k=1;k<= 2*(n-i);k++)
        {
            printf(" ");  
        }
         p--;
        for(int l=1;l<=i;l++)
        {
          printf("%d",p--);
        }
        printf("\n");
    }

    return 0;
}