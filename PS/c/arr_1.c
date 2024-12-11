#include<stdio.h>
int main(){
    int T;
    printf("Enter size of an array");
    scanf("%d",&T);
    int a[100];
    int i;
    for(int i=0;i<T;i++){
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < T; i++)
    {
        if(a[i]%2==0){
            printf("Even: %d\t",a[i]);
        }
        if(a[i]%2!=0){
            printf("Odd: %d\t",a[i]);
        }
    }
    
    
}