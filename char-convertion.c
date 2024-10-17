#include <stdio.h>

int main()
{
   char n, c;
   scanf("%c", &n);

   if (n >= 65 && n <= 90)
   {
      c = n + 32;
      printf("%c", c);
   }
   else if (n >= 97 && n <= 122)
   {
      c = n - 32;
      printf("%c", c);
   }

   return 0;
}