//Name: Ankit Parida  RollNo: 216320007

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[50];
    int i,j,n,temp;

    printf("enter the number of array N: \n");
    scanf("%d",&n);

    printf("enter the values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(arr[i]>arr[j])
          {
              temp = arr[i];
              arr[i] = arr[j];
              arr[j]=temp;
          }
        }
    }

    printf("The sorted value in ascending order is : \n");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
        printf("\nThis program is made by Ankit Parida. Roll no: 216320007");
    getch();
}
