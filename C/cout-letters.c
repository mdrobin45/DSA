#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char *str;
   str = (char *)malloc((10000000+1 * sizeof(char)));
   if (str == NULL)
   {
      printf("Memory allocation failed!\n");
      return 1;
   }

   scanf("%s",str);
   // fgets(str, sizeof(str), stdin);
   int strLen = strlen(str);
   int freq[26] = {0};

   for (int i = 0; i < strLen; i++)
   {
      if (str[i] >= 'a' && str[i] <= 'z')
      {
         int index = str[i] - 'a';
         freq[index]++;
      }
   }

   for (int i = 0; i < 26; i++)
   {
      if (freq[i] != 0)
      {
         printf("%c : %d\n", 'a' + i, freq[i]);
      }
   }
   free(str);

   return 0;
}