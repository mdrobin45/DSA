#include <stdio.h>
#include <string.h>

int main()
{
   char str[10000];
   int alfaArr[25];

   scanf("%s", str);
   int strLen = strlen(str);

   for (int i = 0; i < strLen; i++)
   {
      int index = str[i] - 'a';
      alfaArr[i] = index;
   }

   int freq[27] = {0};
   for (int i = 0; i < 25; i++)
   {
      freq[alfaArr[i]]++;
   }
   for (int i = 1; i <= 26; i++)
   {
      if (freq[i] != 0)
      {

         printf("%c - %d\n", str[i], freq[i]);
      }
   }

   return 0;
}