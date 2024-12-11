#include<stdio.h>
int main()
{
    int n=10;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i=0;
    int j=n-1;
    int temp;
    while(i<j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for( int p=0;p<n;p++)
    {
        printf("%d ", arr[p]);
    }
}