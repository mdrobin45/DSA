#include<stdio.h>

int main(){
   int num1, num2, num3, big;

   printf("Enter first number: \n");
   scanf("%d", &num1);

   printf("Enter second number: \n");
   scanf("%d", &num2);

   printf("Enter third number: \n");
   scanf("%d", &num3);

   if(num1>num2 && num1>num3)
   {
      big = num1;
   } if(num2>num1 && num2>num3)
   {
      big = num2;
   } if(num3>num1 && num3>num2){
      big = num3;
   }

   printf("Largest number is: %d\n", big);
   return 0;
}