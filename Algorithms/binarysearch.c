#include<stdio.h>
#include<conio.h>

int binary(int n,int arr[],int x){
    int left=0,right=n-1,mid;
    while (left<right)
    {
        mid=(left + right)/2;
        if (arr[mid]==x)
        {
            printf("Element is present at %dth position",mid);
        }
        else if (x<arr[mid])
        {
            right=mid-1;
            printf("Element is present at %dth position",right);
        }
        else
        {
            left=mid+1;
            printf("Element is present at %dth position",left);
        }
        
        return -1;
    }
    
}

int main(){
    int arr[50];
    int i,j,n,x;
    printf("Enter the numbers of elements of array\n");
    scanf("%d",&n);
    //Data should be sorted
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
    binary(n,arr,x);
    return 0;
}