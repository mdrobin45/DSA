#include <stdio.h>
int main()
{
   int x, a, b;
   long long int sum = 1;

   scanf("%d", &x);

   for (int y = 0; y < x; y++)
   {
      sum = 1;
      scanf("%d", &a);
      if (a >= 0 && a <= 20)
      {
         for (int x = 1; x <= a; x++)
         {
            sum *= x;
         }
         printf("%lld \n", sum);
      }
   }
   return 0;
}