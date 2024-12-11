#include<stdio.h>
int main()
{
    int n;
    int sign=1;
    float sum=1;
    float fact=1;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sign=sign*-1;
    }
    printf("sum = %f",sum);
}