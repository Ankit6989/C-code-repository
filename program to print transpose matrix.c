#include<stdio.h>
#include<conio.h>

void main()
{
    int n,m,i,j,a[100][100],transpose[100][100];
    printf("Enter the rows: ");
    scanf("%d",&n);
    printf("Enter the column: ");
    scanf("%d",&m);

    printf("enter the elements of matrix: \n ");


    for(i=0;i<n;i++)

        for(j=0;j<m;j++)

            scanf("%d",&a[i][j]);


        for(i=0;i<n;i++)

            for(j=0;j<m;j++)

                transpose[j][i] = a[i][j];



            printf("Transpose of the matrix: \n");

            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)

                    printf("%d\t",transpose[i][j]);
                    printf("\n");
            }

            getch();
}
