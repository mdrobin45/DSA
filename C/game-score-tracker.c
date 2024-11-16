#include <stdio.h>
#include <string.h>

int main()
{
   int n;
   scanf("%d", &n);
   int arr[n];

   // Take array input
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   
   // Find the lowest score
   int first = arr[0], lowest, highest,lowCount=0,highCount=0;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] < first)
      {
         lowest = arr[i];
         lowCount++;
         break;
      }
   }

   // Find the highest score
   for (int i = 0; i < n; i++)
   {
      if (arr[i] > first)
      {
         highest = arr[i];
         highCount++;
         break;
      }
   }

   for (int i = 0; i < n; i++)
   {
      if (arr[i]<first)
      {
         if (arr[i]<lowest)
         {
            lowest = arr[i];
            lowCount++;
         }
      }else if (arr[i]>first)
      {
         if (arr[i]>highest)
         {
            highest = arr[i];
            highCount++;
         }
      }
      
   }
   

   printf("%d %d", highCount, lowCount);

   return 0;
}