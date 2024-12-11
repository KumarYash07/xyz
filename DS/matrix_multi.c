#include<stdio.h>
int main()
{
    int a[5][5], b[5][5],c[5][5];
    int n,x,y,z;
    printf("Enter value of N(N<=5): ");
    scanf("%d",&n);
   
    printf("Enter elements of matrix a:");
    for(x=0; x<n; x++)
    {
        for(y=0; y<n ;y++)
        {
            scanf("%d",&a[x][y]);
        }
    }
    
     printf("Enter elements matrix b:");
    for(x=0; x<n; x++)
    {
        for(y=0; y<n ;y++)
        {
            scanf("%d",&b[x][y]);
        }
    }

  
   printf("matrix a:\n");
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            printf("%d\t",a[x][y]);
        }
        printf("\n");
    }

    printf("matrix b:\n");
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            printf("%d\t",b[x][y]);
        }
        printf("\n");
    }
    
  
    for( x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            c[x][y]=0;
            for(z=0; z<n ;z++)
            {
               c[x][y]+= a[x][z] * b[x][y];
            }
        }
    }
    printf("Product of matrix a and matrix b is:\n");
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            printf("%d\t",c[x][y]);
        }
        printf("\n");
    }
    return 0;
}