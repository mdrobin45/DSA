#include <stdio.h>

int main()
{
   int x, y, z, r, t;
   char c, g, d;

   scanf("%d ", &x);
   scanf("%c ", &c);
   scanf("%d ", &y);
   scanf("%c ", &d);
   scanf("%d ", &r);

   if (c == 43)
   {
      t = x + y;
      if (t == r)
      {
         printf("Yes");
      }
      else
      {
         printf("%d", t);
      }
   }
   else if (c == 45)
   {
      t = x - y;
      if (t == r)
      {
         printf("Yes");
      }
      else
      {
         printf("%d", t);
      }
   }
   else if (c == 42)
   {
      t = x * y;
      if (t == r)
      {
         printf("Yes");
      }
      else
      {
         printf("%d", t);
      }
   }

   return 0;
}