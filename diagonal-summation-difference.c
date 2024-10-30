#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);

   if (n < 1 || n > 100)
   {
      return 1;
   }
   int arr[n][n];
   int pd=0, sd=0,dif=0;

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         scanf("%d", &arr[i][j]);

         if (i == j)
         {
            pd += arr[i][j];
         }
      }
   }

   for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--)
   {
      sd += arr[i][j];
   }

   if (pd > sd)
   {
      dif=pd-sd;
   }
   else if (pd == sd)
   {
      dif=sd-pd;
   }else if(sd>pd)
   {
      dif = sd - pd;
   }

   printf("%d\n", dif);

   return 0;
}