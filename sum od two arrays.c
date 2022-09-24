//Name: Ankit Parida  RollNo: 216320007

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,a[100],b[100],c[100];
    printf("enter the size of ARRAY: ");
    scanf("%d",&n);

    printf("enter the 1st element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the 2nd element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    for (i = 0; i < n; i++)
    {
       c[i] = a[i] + b[i];
    }

    printf("Sum of two array elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t\n", c[i]);
    }
     printf("This program is made by Ankit Parida. Roll no: 216320007");
     getch();
}
