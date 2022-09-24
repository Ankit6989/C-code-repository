#include<stdio.h>

int main()
{
    int i,n,a[100],b[100];
    printf("enter the no of array N: ");
    scanf("%d",&n);

    printf("enter the no value of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        b[i] = a[i];

    }
    printf("the value of 2nd array is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",b[i]);
    }
    return 0;
}
