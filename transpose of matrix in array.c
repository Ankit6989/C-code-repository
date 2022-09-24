#include"stdio.h"
#define N 50

int main()
{
    int i,j,m,n,a[N][N],transpose[N][N];
    printf("Enter the no of rows: ");
    scanf("%d",&m);
    printf("Enter the no of columns: ");
    scanf("%d",&n);

    printf("Enter the elements of 1st matrix: \n");
    {
       for(i=0;i<m;i++)
        for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
       {
           transpose[j][i]=a[i][j];
       }
       printf("Transpose of the matrix:\n");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", transpose[i][j]);
      printf("\n");
   }
   return 0;
}

