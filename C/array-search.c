#include <stdio.h>

int main()
{
   int n;

   scanf("%d", &n);
   int arr[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }

   int x;
   scanf("%d", &x);
   int found=0;

   for (int j = 0; j < n; j++)
   {
      if (arr[j] == x)
      {
         printf("%d",j);
         found += 1;
         break;
      }
   }
   if(!found){
   printf("-1");
   }

   return 0;
}