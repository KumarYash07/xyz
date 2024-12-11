#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    float fact=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(i/fact);
    }
    printf("sum=%f",sum);
    return 0;
}