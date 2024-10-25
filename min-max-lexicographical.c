#include <stdio.h>
#include <string.h>

int main()
{
   char str1[1000], str2[1000], str3[1000];
   int i = 0;

   scanf("%s %s %s", str1, str2, str3);
   int cmp1 = strcmp(str1, str2);
   int cmp2 = strcmp(str1, str3);
   int cmp3 = strcmp(str2, str1);
   int cmp4 = strcmp(str2, str3);

   if (cmp1 < 0 && cmp2 < 0)
   {
      printf("%s\n", str1);
   }
   else if (cmp3 < 0 && cmp4 < 0)
   {
      printf("%s\n", str2);
   }
   else
   {
      printf("%s\n", str3);
   }

   if (cmp1 > 0 && cmp2 > 0)
   {
      printf("%s\n", str1);
   }
   else if (cmp3 > 0 && cmp4 > 0)
   {
      printf("%s\n", str2);
   }
   else
   {
      printf("%s\n", str3);
   }

   return 0;
}