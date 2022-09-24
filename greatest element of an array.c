#include<stdio.h>
#include<conio.h>

void main()
{
  int n,arr[100];
  printf("Enter the array size: ");
  scanf("%d", &n);

  printf("Enter then number of elements: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 1; i < n; i++)
  {
    if (arr[0] < arr[i])
    {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %d", arr[0]);

  getch();
}


