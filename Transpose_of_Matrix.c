
#include<stdio.h>

int main()
{
    int i , j,k=0,n,m,a[10][10],b[10][10];

    printf("Enter number of row :");
    scanf("%d",&n);
    printf("Enter number of column :");
    scanf("%d",&m);

    for (i=0; i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter value at %d%d index ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0; i<n; i++)
    {
        for (j = 0; j<m; j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");

    }

    /*transpose of matrix*/

    printf("\nTranspose of a given matrix is :\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[i][j] = a[j][i] ;
            printf("%d  ",b[i][j]);
        }
        printf("\n");

        
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if (a[i][j] == b[j][i])
            {
                 k=1;
            }
            
           
        }
    }
    if (k==1)
    {
        printf("Matrix is symmatric");
    }
    else{
        printf("Matrix is not symmatric");
    }

    

    
}