
#include <stdio.h>
#include <string.h>

int main()
{
   int n, m;
   scanf("%d %d", &n, &m);
   int arr[n][m];

   for (int i = 1; i <= n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         scanf("%d", &arr[i][j]);
      }
   }
   for (int i = 1; i <= n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         if(arr[i][j])
      }
   }

   
   return 0;
}