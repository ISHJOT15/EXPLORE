#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int arr[],int lb,int ub){
    int start=lb,end=ub;
    int pivot=arr[lb];
    while(start<end){
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[lb],&arr[end]);
    return end;
}

void quick(int arr[],int lb,int ub){
    
    if (lb < ub) 
    { 
        int loc = partition(arr, lb, ub);  
        quick(arr, lb, loc - 1); 
        quick(arr, loc + 1, ub); 
    } 
    
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

    quick(arr,0,n);
    
    printf("After sorting\n");
    for(int x=0; x<n; x++){
        printf("%d ",arr[x]);
    }
    return 0;
}