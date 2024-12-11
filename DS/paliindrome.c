#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,num,temp;
    printf("Enter three digit num=");
    scanf("%d",num);
    temp=num;
    while(num>0)
    {
    n1=num/100;
    n2=num%100;
    n3=n2/10;
    n4=n2%10;
    temp=n4*100+n3*10+n1;
    }
    if(temp==num)
    printf("pallindrome");
    else
    printf("not pallindrome");
    
    return 0;
}