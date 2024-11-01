#include <stdio.h>
int main()
{
   int n, m, x;
   scanf("%d %d %d", &n, &m, &x);

   int arr[n][m];
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         scanf("%d", &arr[i][j]);
         if (arr[i][j] < 0 || arr[i][j] > 1000)
         {
            return 1;
         }
      }
   }

   int xArr[x];

   for (int i = 0; i < x; i++)
   {
      scanf("%d", &xArr[i]);
      if (xArr[i] < 0 || xArr[i] > 1000)
      {
         return 1;
      }
   }

   int freq[1000+1] = {0};
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         freq[arr[i][j]]++;
      }
   }

    for (int j = 0; j <x; j++)
      {
         printf("%d\n", freq[xArr[j]]);
      }

   return 0;
}