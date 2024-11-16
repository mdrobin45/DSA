#include <stdio.h>
#include <stdlib.h>

void numberOrder(int c, int x)
{
   if (c > x)
   {
      return;
   }
   printf("%d ", c);
   numberOrder(c + 1, x);
   if (c > 1)
   {

      printf("%d ", c - 1);
   }
}
int main()
{
   int n, x;
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &x);
      numberOrder(1, x);
      printf("\n");
   }

   return 0;
}