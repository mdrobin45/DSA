#include <stdio.h>
#include <string.h>

int main()
{
   char str[10000];
   int alfaArr[10000];

   scanf("%s", str);
   int strLen = strlen(str);

   for (int i = 0; i < strLen; i++)
   {
      int index = str[i] - 'a';
      alfaArr[i] = index;
   }

   int freq[26] = {0};
   for (int i = 0; i < strLen; i++)
   {
      freq[alfaArr[i]]++;
   }
   for (int i = 0; i < 26; i++)
   {
      if (freq[i] != 0)
      {

         printf("%c - %d\n", 'a'+i, freq[i]);
      }
   }

   return 0;
}