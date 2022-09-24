#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n,m,a[100][100],b[100][100],c[100][100];
    printf("enter the rows of ARRAY: ");
    scanf("%d",&n);
    printf("enter the columns of ARRAY: ");
    scanf("%d",&m);

    printf("enter the 1st element: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          printf("Enter element a%d%d: ", i + 1, j + 1);
          scanf("%d",&a[i][j]);
        }
    }

    printf("enter the 2nd element: \n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
        {
         printf("Enter element b%d%d: ", i + 1, j + 1);
         scanf("%d",&b[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
       for (j=0; j<m; j++)

      {
       c[i][j] = a[i][j] + b[i][j];
      }

    }

    printf("Sum of two array elements are:\n");

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)

       {
        printf("%d\t", c[i][j]);
       }

    }
     getch();
}

