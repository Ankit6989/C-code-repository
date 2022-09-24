#include<stdio.h>
//You can also use #define N 50 so that we can directly allot memory to array. we can write a[N][N]

int main()
{
    int i,j,k,m,n,a[100][100],b[100][100],c[100][100];
    printf("Enter the no of rows: ");
    scanf("%d",&m);
    printf("Enter the no of columns: ");
    scanf("%d",&n);

    printf("enter the values of 1st matrix: \n");
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
          {
            scanf("%d",&a[i][j]);
          }
        }
    }


     printf("enter the values of 2nd matrix: \n");
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
          {
            scanf("%d",&b[i][j]);
          }
        }
    }


    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        c[i][j]=0;
        for(k=0;k<n;k++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
      }
    }
printf("The product of two matrices are: \n");
for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
