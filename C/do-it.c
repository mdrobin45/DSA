#include <stdio.h>
int main()
{
   int x, y;
   scanf("%d %d", &x, &y);

   if(x<1 || y>100){
      return 0;
   }

   for (int i = 0; i < x; i++)
   {
      for (int k = 1; k <= y; k++)
      {
         printf("%d ", k);
      }
      printf("\n");
   }

   return 0;
}