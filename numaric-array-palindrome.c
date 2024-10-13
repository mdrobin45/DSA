#include <stdio.h>

int main()
{
   int n,p=0;

   scanf("%d", &n);
   int arr[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }

   for (int j = 0; j < n; j++)
   {
      if(arr[j] != arr[n-(j+1)]){
         p = 1;
         break;
      };
     
   }

   if(p){
      printf("NO");
   }else{
      printf("YES");
   }

   return 0;
}