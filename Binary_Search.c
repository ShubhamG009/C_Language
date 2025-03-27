#include<stdio.h>
 int main()
 {
    int arr[6]={1,2,3,4,5,6},n,size = 6;
    printf("Enter a no you wantt to search");
    scanf("%d",&n);
    binary_s(arr,n,size);
 }

 void binary_s(int arr[],int n,int size)
 {
    int low = 0,high = size - 1;
    for(int i = 0; i < size-1; i++)
    {
        int mid = (low + high)/2;
        if(n = arr[mid])
        {
            printf("Element found %d index",mid);           
        }
        else if(n < arr[mid])
        {
            high = mid -1;
        }
    }
 }
