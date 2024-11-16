#include <stdio.h>

int main()
{
   int n, m;
   scanf("%d %d", &n, &m);

   int arr[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }

   int freq[100000+1] = {0};

   for (int i = 0; i < n; i++)
   {
     freq[arr[i]]++;
   }

   for (int i = 1; i <= m; i++)
   {
     printf("%d\n", freq[i]);
   }

   return 0;
}