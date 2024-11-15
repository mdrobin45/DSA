#include <stdio.h>
#include <string.h>

int main()
{
   char str[1000];
   scanf("%s", str);
   int strLen = strlen(str);
   int indexArr[1000];

   // Character index count
   for (int i = 0; i < strLen; i++)
   {
      int index = str[i] - 'a';
      indexArr[i] = index;
   }

   // Character frequency count
   int freq[26] = {0};
   int oddCount = 0;
   for (int i = 0; i < strLen; i++)
   {
      freq[indexArr[i]]++;
   }

   for (int i = 0; i < 26; i++)
   {
      if (freq[i] % 2 != 0)
      {
         oddCount++;
      }
      if (freq[i] % 2 == 0)
      {
         evenCount++;
      }
   }

   // Count total operation
   if (oddCount!=0)
   {
      int totalOpe = oddCount - 1;
      printf("%d", totalOpe);
   }else{
      printf("%d",0);
   }

   return 0;
}