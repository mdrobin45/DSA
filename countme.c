#include <stdio.h>

int main()
{
   int n,dt=0,dth=0;
   scanf("%d", &n);

   int arr[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   for (int i = 0; i < n; i++)
   {
      if(arr[i]%3==0 && arr[i]%2==0){
         dt++;
      }else if(arr[i]%2==0){
         dt++;
      }else if(arr[i]%3==0){
         dth++;
      }
      
   }
   printf("%d %d", dt,dth);

   return 0;
}