#include <stdio.h>

int main()
{
   long long totalAmount;
   scanf("%lld", &totalAmount);

   if (totalAmount > 1000)
   {
      printf("I will buy Punjabi\n");
      if ((totalAmount - 1000) >= 500)
      {
         printf("I will buy new shoes\n");
         printf("Alisa will buy new shoes\n");
      }
   }
   else
   {
      printf("Bad luck!\n");
   }
   return 0;
}