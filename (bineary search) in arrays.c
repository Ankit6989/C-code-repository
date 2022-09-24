#include<stdio.h>

int binarySearch(int arr[], int s, int e, int key)
 {
  int mid;

  if (s > e)
     return -1;

  mid = (s + e)/2;

  if (arr[mid] == key)
    return mid;
  else if (key> arr[mid])
    return binarySearch(arr, mid+1, e, key);
  else
    return binarySearch(arr, s, mid-1, key);
}

int main()
{
  int i, first, last, n, search, arr[100], index;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;

  index = binarySearch(arr, first, last, search);

  if (index == -1)
    printf("Not found! %d isn't present in the list.\n", search);
  else
    printf("%d is present at location %d.\n", search, index);  //%d ulta value present kar raha ha

  return 0;
}


