#include <stdio.h>
#include <string.h>

int main()
{
   char str[100000];
   scanf("%s", str);
   int strLen = strlen(str);
   int count = 0;
   for (int i = 0; i < strLen; i++)
   {
     if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
        count++;
     }
   }
   printf("%d", count);

   return 0;
}