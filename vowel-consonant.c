#include <stdio.h>

int main()
{
   char ch;
   scanf("%c", &ch);
   char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
   int isVowel = 0;

   if (ch >= 97 && ch <= 122)
   {
      for (int i = 0; i < 5; i++)
      {
         if (vowels[i] == ch)
         {
            isVowel = 1;
            break;
         }
      }
      if (isVowel)
      {
         printf("Vowel");
      }
      else
      {
         printf("Consonant");
      }
   }

   return 0;
}