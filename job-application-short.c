#include <stdio.h>
int main()
{
   int numberOfCndt;
   scanf("%d", &numberOfCndt);

   int exp[numberOfCndt];

   for (int i = 0; i < numberOfCndt; i++)
   {
      scanf("%d", &exp[i]);
   }

   for (int j = 0; j < numberOfCndt; j++)
   {
     if(exp[j]<1){
        printf("Entry-level candidate\n");
     }
     if(exp[j]>=1 && exp[j]<=3){
        printf("Junior candidate\n");
     }
     if(exp[j]>=4 && exp[j]<=7){
        printf("Mid-level candidate\n");
     }
     if(exp[j]>7 && exp[j]<=20){
        printf("Senior candidate\n");
     }
   }
   

   return 0;
}