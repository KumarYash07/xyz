#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    int fact=1;
    int sign=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact*sign;
        sign=sign*-1;

    }
    printf("sum=%d",sum);
}


