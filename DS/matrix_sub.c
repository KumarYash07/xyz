#include<stdio.h>
int main()
{
    int a[3][3], b[3][3],s[3][3];
    int r,c;
    printf("Enter num of rows & column=");
    scanf("%d %d",&r,&c);
    printf("Enter elements array a:");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c ;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter elements array b:");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c ;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            s[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Sum of array a+b:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",s[i][j]);
        }
    }
    return 0;
}