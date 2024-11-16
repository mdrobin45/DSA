#include <stdio.h>

int main()
{
   int x, y;
   char c;

   scanf("%d ", &x);
   scanf("%c ", &c);
   scanf("%d ", &y);

   if (c == 62)
   {
      if (x > y)
      {
         printf("Right");
      }
      else
      {
         printf("Wrong");
      }
   }
   else if (c == 60)
   {
      if (x < y)
      {
         printf("Right");
      }
      else
      {
         printf("Wrong");
      }
   }
   else if (c == 61)
   {
      if (x == y)
      {
         printf("Right");
      }
      else
      {
         printf("Wrong");
      }
   }

   return 0;
}