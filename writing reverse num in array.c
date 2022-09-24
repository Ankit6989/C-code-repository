#include<stdio.h>

int main()
{
    int i,j,arr[100],n;
    printf("enter the no of array N: ");
    scanf("%d",&n);

    printf("enter the values of array: ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the value stored in array: ");
    for(i = 0;i<=n-1;i++)
    {
        ("%d", arr[i]);

    }

    printf("the reverse of array is : ");

    for(i=n-1;i>=0;i--)
       {
         printf("%d", arr[i]);
       }
    return 0;

}
