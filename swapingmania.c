#include <stdio.h>
#include <string.h>

int main()
{
   char str1[1000], str2[1000];
   scanf("%s %s", str1, str2);
   int str1Len = strlen(str1);
   int str2Len = strlen(str2);
   int check = 0;
   
   for (int i = 0; i < str1Len; i++)
   {
      if(strchr(str1,str2[i])!=NULL){
         check = 1;
      }
   }
   printf("%d", check);
   return 0;
}