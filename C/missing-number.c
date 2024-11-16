#include <stdio.h>
#include <math.h>

int main()
{
   int t, a, b, c;
   long long m;
   scanf("%d", &t);

   for (int i = 0; i < t; i++)
   {
      scanf("%lld %d %d %d", &m, &a, &b, &c);

      if (a != 0 && b != 0 && c != 0 && m % (a * b * c) == 0)
      {
         long long result = m / (a * b * c);
         printf("%lld\n", result);
      }
      else
      {
         printf("-1\n");
      }
   }

   return 0;
}