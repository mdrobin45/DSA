#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a, b;
   scanf("%d %d", &a, &b);
   int *pa, *pb;
   pa = &a;
   pb = &b;

   int diff = abs(*pa - *pb);

   printf("%d", diff);

   return 0;
}