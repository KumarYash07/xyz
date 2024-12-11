#include<stdio.h>
int main()
{
    int n,t,d,rev=0;
    printf("Enter number");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        d=n%10;
        rev=(rev*10)+d;
        t /= 10;
    }
    if(t==rev)
    printf("palindrome");
    else
    printf("Not palindrome");
    return 0;
}