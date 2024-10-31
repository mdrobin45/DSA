#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int arr[n][n];
   int x = 0;

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         scanf("%d", &arr[i][j]);
      }
   }
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         if(i==j && arr[i][j]!=1){
            x = 1;
            break;
         }
         else if (i != j && arr[i][j] != 0)
         {
            x = 1;
            break;
         }
      }
      }

      if(!x){
         printf("YES");
      }else{
         printf("NO");
      }

      return 0;
}