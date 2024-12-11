#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,6,7,8};
    int ele,pos;
    printf("Enter array index= \n array element=");
    scanf("%d %d",&pos,&ele);
    
    for(int i=0;i>pos,i++)
    {
        arr[i+1]=arr[i];
    }
  printf("")

    return 0;
}
