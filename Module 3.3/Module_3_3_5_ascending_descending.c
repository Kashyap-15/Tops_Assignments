#include <stdio.h>
void main()
{
  int i, j;
  int a[5];

  for (i = 0; i < 5; i++)
  {
    printf("Entre the 5 numbers for array : ");
    scanf("%d",&a[i]);
  }

  printf("Your Array is : ");

  for (i = 0; i < 5; i++)
  {
    printf(" %d",a[i]);
  }

  for (i = 0; i < 5; i++)
  {
    for (j = i + 1; j < 5; j++)
    {
      if (a[i] > a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printf(" \nThe array in ascending order : ");
  for (i = 0; i < 5; i++)
  {
    printf(" %d", a[i]);
  }
//-----------------------------------------
  for (i = 0; i < 5; i++)
  {
    for (j = i + 1; j < 5; j++)
    {
      if (a[i] < a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printf(" \nThe array in decending order : ");
  for (i = 0; i < 5; i++)
  {
    printf(" %d", a[i]);
  }
}