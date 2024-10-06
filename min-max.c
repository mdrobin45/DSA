#include<stdio.h>

int main(){
   int A, B, C,min,max;
   scanf("%d %d %d", &A, &B,&C);

   if(A<=B&&A<=C){
      min = A;
   }else if(B<=A&&B<=C){
      min = B;
   }else{
      min = C;
   }

   if(A>=B&&A>=C){
      max = A;
   }else if(B>=A&&B>=C){
      max = B;
   }else{
      max = C;
   }

   printf("%d ", min);
   printf("%d", max);

   return 0;
}