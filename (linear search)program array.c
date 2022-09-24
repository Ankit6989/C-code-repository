#include<stdio.h>
#include<conio.h>

void main()
{  int n,i,key,found = 0,arr[50];

    printf("Enter the number of elements \n");
    scanf("%d", &n);

    printf("Enter the elements one by one \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched \n ");
    scanf("%d", &key);
    for (i = 0; i < n ; i++)
    {
        if (key == arr[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element is present in the array at position: %d \n",i);
    else
        printf("Element is not present in the array\n");

        getch();
}


