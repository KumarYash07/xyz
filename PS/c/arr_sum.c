#include<stdio.h>
int main()
{
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for(int i=0;i<10;i++)
    {
        int t =a[i];
        sum=sum+t;
    }
    printf("sum= %d",sum);
}