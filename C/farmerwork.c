#include <stdio.h>
#include <string.h>

int main()
{
   int n, m1, m2, d;
   scanf("%d\n", &n);
   for (int i = 0; i < n; i++)
   {
      scanf("%d %d %d", &m1, &m2, &d);

      int di = (m1 * d) / (m1 + m2);
      int fday = d - di;
      printf("%d\n", fday);
   }

   return 0;
}