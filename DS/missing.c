#include<stdio.h>
int main()
{
    int arr[8] = {1,2,3,5,6,7,8};
    int sum = 0 ,i;
    int sum_arr=0;
    int n=7;
    for(i=0;i<n;i++)
    {
        sum_arr +=arr[i];
    }
    for(i=0;i<8;i++)
    {
        sum +=i;
    }
    int missing_num = sum_arr - sum ;
    printf("%d",missing_num);
    return 0;
}