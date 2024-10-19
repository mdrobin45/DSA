#include <stdio.h>
int main()
{
   int x, a, b;
   int oddSum = 0;

   scanf("%d", &x);

   for (int y = 0; y < x; y++)
   {
      oddSum = 0;
      scanf("%d %d", &a, &b);
      if (a < b)
      {
         for (int i = a + 1; i < b; i++)
         {
            if (i % 2 != 0)
            {
               oddSum += i;
            }
         }
      }

      if (a > b)
      {
         for (int j = b + 1; j < a; j++)
         {
            if (j % 2 != 0)
            {
               oddSum += j;
            }
         }
      }
      printf("%d\n", oddSum);
   }
   return 0;
}