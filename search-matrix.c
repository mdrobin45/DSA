#include <stdio.h>
int main()
{
   int n, m, x;
   scanf("%d %d", &n, &m);
   int arr[n][m];
   if (n < 2 || n > 100 || m < 2 || m > 100 || x < 0)
   {
      printf("D");
      return 1;
   }

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
         if (arr[i][j] < 1 || arr[i][j]>100000)
         {
            return 1;
         }
      }
   }

   scanf("%d", &x);

   if (x < 0 || x>100000)
   {
      return 1;
   }

   int state = 1;
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         if (arr[i][j] == x)
         {
            state = 0;
            break;
         }
      }
   }

   if (state)
   {
      printf("will take number");
   }
   else
   {
      printf("will not take number");
   }

   return 0;
}