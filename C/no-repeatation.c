#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);

   if(n<1||n>100000){
      return 1;
   }

   int arr[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }

   int freq[100000 + 1] = {0};
   int sum = 0;

   for (int i = 0; i < n; i++)
   {
      freq[arr[i]]++;
   }

   for (int i = 1; i <= 100000; i++)
   {
      if(freq[i]==1){
         sum += freq[i];
      }
   }

   printf("%d", sum);

   return 0;
}