#include <stdio.h>

int main()
{
   long long int a, b, k;

   scanf("%lld ", &a);
   scanf("%lld ", &b);
   scanf("%lld ", &k);

   if (a >= 1 && b >= 1)
   {
      if (a % k == 0 && b % k == 0)
      {
         printf("Both");
      }
      else if (a % k == 0 && b % k != 0)
      {
         printf("Memo");
      }
      else if (b % k == 0 && a % k != 0)
      {
         printf("Momo");
      }
      else if (a % k != 0 && b % k != 0)
      {
         printf("No One");
      }
   }

   return 0;
}