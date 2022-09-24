
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,a[100],sum = 0;
    printf("enter the size of ARRAY: ");
    scanf("%d",&n);

    printf("enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    printf("sum of array is: %d",sum);
    getch();
}
