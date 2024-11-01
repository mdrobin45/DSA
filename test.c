#include <stdio.h>
#include <stdlib.h>

int main() {
   int n;
   scanf("%d", &n);
   int *arr=(int *)malloc(1* sizeof(int));
   for(int i=0; i<n; i++) {
      scanf("%d", &arr[i]);
      if(i < n-1) {
         arr = (int *)realloc(arr, (i+2) * sizeof(int));
      }
   }

   for(int i=0; i<n; i++) {
      printf("%d", arr[i]);
      if(i < n-1) printf(" ");
   }
   printf("\n");
   free(arr);
   return 0;
}