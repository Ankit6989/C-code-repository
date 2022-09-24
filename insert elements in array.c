#include<stdio.h>
#include<conio.h>

void main()
{
    int i,arr[10],n;
    printf("enter the number N : \n");
    scanf("%d",&n);


    printf("enter the no of array: \n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("entered numbers \n");

    for(i=0;i<=n-1;i++)
    {
        printf("%d\n", arr[i]);

    }
      getch();
}
