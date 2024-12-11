#include<stdio.h>
int main()
{
    int arr[50],n,i;
    printf("Enter length of array=\n");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    
    return 0;
}