#include <stdio.h>
int main()
{
   int n, t;
   scanf("%d %d", &n, &t);

   int times[n];
   int sum, maxBook;

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &times[i]);
   }

   for (int j = 0; j < n; j++)
   {
      sum += times[j];
      if(sum>t){
         break;
      }
      maxBook++;
   }
   printf("%d", maxBook);

   return 0;
}