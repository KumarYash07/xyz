#include<stdio.h>
int main()
{
    int i,j,k,l,x,n;
    printf("Enter num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
           printf(" "); 
        }
        x=i;
        for(k=1;k<=i;k++)
        {
            printf("%d",x);
            x++;
        }
        x=x-2;
        for(l=1;l<=i-1;l++)
        {
            printf("%d",x);
            x--;
        }
        printf("\n");
    }
    return 0;
}