#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
}