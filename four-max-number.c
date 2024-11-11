#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
   int arr[4] = {a, b, c, d};
   int lg = arr[0];
   for (int i = 0; i < 4; i++)
   {
      if(arr[i]>lg){
         lg = arr[i];
      }
   }

   return lg;
}
int main()
{
   max_of_four(4, 9, 7, 8);
   return 0;
}