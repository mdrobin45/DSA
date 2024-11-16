#include <stdio.h>

int main()
{

   int n;
   scanf("%d", &n);
   int arr[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }

   int s = arr[0];

   for (int i = 0; i < n; i++)
   {
      if (arr[i] < s)
      {
         s = arr[i];
      }
   }

   printf("%d ", s);
   for (int k = 0; k < n; k++)
   {
      if (arr[k] == s)
      {
         int p = k + 1;
         printf("%d", p);
         break;
      }
   }

   return 0;
}