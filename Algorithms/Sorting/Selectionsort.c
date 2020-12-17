#include<stdio.h>
#include<conio.h>

void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  

int select(int n,int arr[]){
    
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++){
            if (arr[min] > arr[j])
            {
                min=j;
            }
        }
        if (min != i)
        {
            swap(&arr[min],&arr[i]);
        }
    }
    printf("After sorting\n");
    for(int x=0; x<n; x++){
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

    select(n,arr);
    return 0;
}