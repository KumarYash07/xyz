#include<stdio.h>
#include<iostream>
// using namespace std;
int main()
{
    int n;
    int sign=1;
    float sum=1;
    float fact=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=(sum + (i/fact))*sign;
        sign=sign*-1;
    }
    printf("sum=%f",sum);
}