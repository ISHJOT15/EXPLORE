#include<stdio.h>
#include<conio.h>

void merge(int arr[],int n){
    
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

    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");

    merge(arr,n);
    
    printf("After sorting\n");
    for(int x=0; x<n; x++){
        printf("%d ",arr[x]);
    }
    return 0;
}