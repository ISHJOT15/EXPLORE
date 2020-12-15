#include<stdio.h>
#include<conio.h>

int linear(int n,int arr[],int x){
    int j;
    for(j=0;j<n;j++){
        if(arr[j]==x){
            printf("Element found at %dth position\n",j+1);
            break;
        }
    }
    if(j==n){
        printf("Element not found\n");
    }
    return 0;
}

int main(){
    int arr[50];
    int i,j,n,x;
    printf("Enter the numbers of elements of array\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter %dth element of array\n",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter element you want to search\n");
    scanf("%d",&x);
    
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    linear(n,arr,x);
    return 0;
}