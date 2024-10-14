#include <stdio.h>

int main()
{
   int n;

   scanf("%d", &n);
   int arr[n];
   int max = arr[0];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);

      if (arr[i] > max)
      {
         max = arr[i];
      }
   }

   for (int j = 0; j < n; j++)
   {
      if (arr[j] >= 0)
      {
         arr[j] = max - arr[j];
         printf("%d ", arr[j]);
      }
   }

   return 0;
}