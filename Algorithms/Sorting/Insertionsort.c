#include<stdio.h>
#include<conio.h>

int insert(int n,int arr[]){
    int i,temp,j,x;
    for (i = 0; i < n; i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("After sorting\n");
    for(x=0;x<n;x++){
        printf("%d ",arr[x]);
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

    insert(n,arr);
    return 0;
}