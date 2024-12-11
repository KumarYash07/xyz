#include<stdio.h>
#include<conio.h>
int main()
{int n,i;
    int array[10];
    printf("Enter size of array elements=");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
     printf("Traverse the array elements\n");
     for(i=0;i<n;i++)
     {
        printf("%d ",array[i] );
     }
    return 0; 
}
