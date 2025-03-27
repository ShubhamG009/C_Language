#include<stdio.h>
void bublesort(int a[],int n);
int main()
{
	int a[5] = {15,16,6,8,5};
	int n = 5;
	bublesort(a,n);
	for(int i = 0; i<n; i++)
		{
			printf(" %d ",a[i]);
		}	
}

void bublesort(int a[],int n)
{
	int i,j;
	for(i = 0; i < n-1 ; i++)
	{
		for(j = 0; j < n-i-1;j++)
		{
		
			if(a[j] > a[j+1])
			{
				int k;
				k = a[j+1];
				a[j+1] = a[j];
				a[j] = k;
			}
			
		}
			
	}
	for(i = 0; i<n; i++)
		{
			printf(" %d ",a[i]);
		}	
}