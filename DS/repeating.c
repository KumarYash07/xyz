#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,1,8,8};
    int count[10] ={0};
    
    for(int i=0; i<10; i++)
    {
        for(int j=0;j<10;j++)
        {
            if (arr[i]==arr[j])
           {
            count[i]++;
           } 
        }
    }
    for( int i=0;i<10;i++)
    {
        if(count[i] > 1)
        {
            printf("%d",arr[i]);
        }
    }

    return 0;
}
