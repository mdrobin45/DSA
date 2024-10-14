#include <stdio.h>

int main()
{
   int n, x;

   scanf("%d", &n);
   int arr[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }

   scanf("%d", &x);

   for (int j = 0; j < n; j++)
   {
      if (arr[x - 1] == 0)
      {
         arr[x - 1] = 1;
         break;
      }

      else if (arr[x - 1] == 1)
      {
         arr[x - 1] = 0;
         break;
      }
   }

   for (int k = 0; k < n; k++)
   {
      printf("%d ", arr[k]);
   }

   return 0;
}