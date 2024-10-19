#include <stdio.h>
int main()
{
   int x;
   long long int sum = 0;

   scanf("%d", &x);

   if (x > 0)
   {
      sum = x * (x + 1) / 2;
      printf("%lld", sum);
   }

   return 0;
}