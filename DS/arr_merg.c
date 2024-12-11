#include<stdio.h>
int main()
{    
    int n=5,m=6,k=11;
    int arr1[5] = {15,15,25,35,45};
    int arr2[6] = {10,20,30,40,50,60};
    int arr3[11];
    int i=0,j=0;
    while(i<5 && j<6)
    {
        if(arr1[i] < arr2[j])
       {
        arr3[k++] = arr1[i++];
        //i++;
       // k++;
       } 
    
    else
    {
        arr3[k++] = arr2[j++];
        //j++;
        //k++;
    }
    }
    while(j < m)
    {
        arr3[k++] = arr2[j++];
       // j++;
       // k++;
    }
    for(int i=0; i<11; i++)
    {
        printf("%d ",arr3[i]);
    }
  }

