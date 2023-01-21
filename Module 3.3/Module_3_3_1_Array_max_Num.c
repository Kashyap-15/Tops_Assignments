#include <stdio.h>
int max_no();
void main()
{
  printf("\n Max number from array is : %d", max_no());
}

int max_no()
{
  int i, j, max=0;
  int a[5];

  for (i = 0; i < 5; i++)
  {
    printf("\n Entre 5 number for array : ");
    scanf("%d", &a[i]);
  }

  printf("\n Here is your 5 number for array : ");

  for (i = 0; i < 5; i++)
  {
    printf(" %d", a[i]);
  }

  for (i = 0; i < 5; i++)
  {
      if (a[i] > max)
      {
        max = a[i];
      }
  }
  return max;
}