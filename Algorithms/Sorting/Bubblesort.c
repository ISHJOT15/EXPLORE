#include<stdio.h>
#include<conio.h>

int bubble(int n,int arr[]){
    int temp,x;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("After sorting\n");
    for(x=0;x<n;x++){
        printf("%d ",arr[x]);
    }
    printf("\n");
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

    bubble(n,arr);
    return 0;
}