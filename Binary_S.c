#include<stdio.h>
int  binary_s();
 int main()
 {
    int arr[6]={1,2,3,4,5,6},n,size = 6;
    printf("Enter a no you want to search ");
    scanf("%d",&n);
    int mid;
    int result = binary_s(arr,n,size);
    printf("%d",result);
    if(result == -1){
        printf("Element not found ");
    }
    else{
        printf("Element found at index  %d",result);
    }
 }

 int binary_s(int arr[],int n,int size)
 {
    int low = 0,high = size - 1;
    while(low != high)
    {
        int mid = (low + high)/2;
        if(n == arr[mid])
        {
            return mid;           
        }
        else if(n < arr[mid])
        {
            high = mid -1;
        }
        else if(n > arr[mid])
        {
            low = mid +1;
        }
        else
        {
            return -1;
        }
    }
 }
