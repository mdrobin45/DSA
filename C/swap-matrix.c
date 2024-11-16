#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, m;
   scanf("%d %d", &n, &m);
   int arr[n][m];

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         scanf("%d", &arr[i][j]);
      }
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         int temp = arr[i][j];
         arr[i][j] = arr[i][m - 1];
         arr[i][m - 1] = temp;
         break;
      }
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         int temp = arr[i][j];
         arr[i][j] = arr[n - 1][j];
         arr[n - 1][j] = temp;
      }
      break;
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }
   return 0;
}