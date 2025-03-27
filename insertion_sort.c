#include<stdio.h>
void insertsort(int a[],int n);
int main()
{
	int a[5] = {15,16,6,8,1};
	int n = 5;
	insertsort(a,n);
	
}

void insertsort(int a[],int n)
{
    int i,j,temp;

    for(i = 1; i < n; i++)
    {
        for(j = i-1; j <= 0; j--)
        {
            temp = a[i];
            if(temp < a[j])
            {
                a[i] = a[j];
                a[j] = temp;   
            }
        }
    }
}