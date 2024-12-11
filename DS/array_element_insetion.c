#include<stdio.h>
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int given =12, index ,t;
    printf("Enter index: ");
    scanf("%d",&index);
     
    for(int i=10;i>=0;i--)
    {
        if(i!=index)
        {
            t=a[i];
            a[i]=a[i-1];
            a[i-1]=t;
        }
        else
        {
            a[i]=given;
            break;
        }
    } 
    for(int i=0;i<=10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}