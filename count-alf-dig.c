#include <stdio.h>
#include <string.h>

int main()
{
   int n;
   char str[10000];

   scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {
      int countFreq[3] = {0, 0, 0};
      scanf("%s", str);
      int strLen = strlen(str);

      for (int j = 0; j < strLen; j++)
      {
         if (str[j] >= 'A' && str[j] <= 'Z')
            countFreq[0]++;
         else if (str[j] >= 'a' && str[j] <= 'z')
            countFreq[1]++;
         else if (str[j] >= '0' && str[j] <= '9')
            countFreq[2]++;
      }
      for (int i = 0; i < 3; i++)
      {
         printf("%d ", countFreq[i]);
      }
      printf("\n");
   }

   return 0;
}