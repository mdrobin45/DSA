#include <stdio.h>
#include <string.h>

int main()
{
   int n;
   scanf("%d", &n);
   int sum = 0;

   for (int i = 0; i <= n; i++)
   {
      if(i%2==0){
         sum += i;
      }
   }
   printf("%d", sum);

   return 0;
}