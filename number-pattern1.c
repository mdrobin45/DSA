#include <stdio.h>

int main()
{
   int n;
   char space = 1;

   scanf("%d", &n);

   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         printf("%d", j);
      }
      printf("\n");
   }

   for (int r = n; r >= 1; r--)
   {

      for (int s = 0; s < space; s++)
      {
         printf(" ");
      }
      space++;

      for (int s = 1; s < r; s++)
      {
         printf("%d", s);
      }

      printf("\n");
   }

   return 0;
}