#include <stdio.h>
#include <stdlib.h>

int main() {
   int n;
   scanf("%d", &n);
   int *arr = (int *)malloc(n * sizeof(int));
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   for (int j = 0; j < n; j++)
   {
      if(j<n-1){
         arr = (int *)realloc(arr, (j + 2) * sizeof(int));
      }
   }
   for (int i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   free(arr);

   return 0;
}