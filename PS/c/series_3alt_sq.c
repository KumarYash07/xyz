#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    int sign=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i*sign;
        sign=sign*-1;
    }
    printf("sum=%d",sum);
}