#include<stdio.h>
#include<stdlib.h>

void leftRotate(int arr[], int n, int k)
{
    int i,mod=k%n;
    for(i=0;i<n;i++)
        printf("%d ",arr[(mod + i) % n]);
}

int main(){
    int n,k,i;
    int *arr;
    printf("Enter values of n,k=");
    scanf("%d%d",&n,&k);
    arr=(int *)malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
    leftRotate(arr,n,k);
    
    return 0;    
}