#include <stdio.h>
 
int main()
{
  int a[50], n,i,j,temp;
 
  printf("Enter number of elements of the array: ");
  scanf("%d", &n);
 
  printf("Enter the elements of the array: ");
 
  for (i=0; i<n; i++)
    scanf("%d", &a[i]);
 
  for (i=1 ; i<n; i++)
    for (j =0 ; j<(n-i);j++)
      if (a[j] > a[j+1]) 
      {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }

  printf("Sorted array is: ");
 
  for (i = 0; i< n; i++)
     printf("%d", a[i]);
 
  return 0;
}
