#include"stdio.h"

int main()
{
    int i,j,m,n,a[50][50],sum=0;
    printf("Enter the no of rows: ");
    scanf("%d",&m);
    printf("Enter the no of columns: ");
    scanf("%d",&n);

    printf("Enter the element of matrix: \n");
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
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
printf("The sum of principle diagonal of matrix=  %d \n",sum);
return 0;
}
