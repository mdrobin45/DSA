#include <stdio.h>
#include <string.h>

int main()
{
   char s1[101], s2[101], s3[101];
   scanf("%s %s %s", s1, s2, s3);
   int length = strlen(s1);
   int operation = 0;

   for (int i = 0; i < length; i++)
   {
      char ch1 = s1[i];
      char ch2 = s2[i];
      char ch3 = s3[i];

      if(ch1==ch2 && ch2==ch3){
         continue;
      }else if(ch1 == ch2 || ch2==ch3 || ch1==ch3){
         operation += 1;
      }else{
         operation += 2;
      }
   }

   printf("%d", operation);

   return 0;
}