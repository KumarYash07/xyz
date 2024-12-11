#include<stdio.h>
int main()
{
    int a[3][3], at[3][3];
    int i,j,r,c;
    printf("Enter num of rows: \n");
    scanf("%d",&r);
    printf("Enter num of column: \n");
    scanf("%d",&c);
    printf("Enter array elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<r;j++)
    {
        for(i=0;i<c;i++)
        {
            at[j][i]=a[i][j];
        }
    }
    printf("Enter transpose of array a:\n");
    for(j=0;j<r;j++)
    {
        for(i=0;i<c;i++)
        {
           printf("%d ",at[j][i]);
           
        }
    }
    return 0;
}