#include <stdio.h>

int main()
{
   int n;
   char str[100];
   char st[]="HEllo";
   printf("%s\n",st);

   scanf("%d", &n);
   
   if(n < 1 || n > 100){
     return 0;
   }
   
   for(int i=0; i<n;i++){
     scanf("%s",str);
     printf("%s\n",str);
   }
  

   return 0;
}