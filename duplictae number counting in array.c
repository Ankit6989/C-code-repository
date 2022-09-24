#include<stdio.h>

int main()
{
    int arr[100],i,j,n,count=0;
    printf("enter the value of array N: ");
    scanf("%d",&n);

    printf("enter the value of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
      if(arr[i]==arr[j])
      {
         count++;
         break;
      }

    }

  }

  printf("the total number of duplicate number in array is: %d",count);

  return 0;
}
