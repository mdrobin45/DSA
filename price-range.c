#include <stdio.h>
int main()
{
   int n, start,end;
   scanf("%d %d %d", &n, &start,&end);

   int prices[n],count;

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &prices[i]);
   }
   for (int j = 0; j < n; j++)
   {
      if(prices[j]>=start && prices[j]<=end ){
         count++;
      }
   }
   printf("%d", count);

   return 0;
}