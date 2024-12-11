#include<stdio.h>
int power(int a,int n)
{
    if (n==0)
     return 1;
    else
     return a*power(a,n-1);
}
int main()
{ 
    int n,a;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter n: ");
    scanf("%d",&n);
   int f= power(a,n);
    printf("%d",f);

}
