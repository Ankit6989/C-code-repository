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

    printf("the unique values are: ");

    for(i=0;i<n;i++)
    {
     for(j=0;j<i;j++)
     {
      if(arr[i]==arr[j])

          break;
     }
      if(i==j){
        printf(" %d ",arr[i]);
     }
    }
    return 0;
}
