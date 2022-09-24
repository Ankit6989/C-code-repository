
#include<stdio.h>
#include<conio.h>
    void main ()
    {

        int arr[30];

        int i, j, temp, n;
        printf("Enter the value of N\n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; i++)
        {
	        scanf("%d", &arr[i]);
        }


        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printf("The numbers arranged in descending order are given below\n");

        for (i = 0; i < n; i++)
        {
            printf("%d\n", arr[i]);
        }
getch();
    }
