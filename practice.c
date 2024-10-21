#include <stdio.h>
  int arr[100000];
int main()
{
    int len;
   
  
    scanf("%d",&len);
    
    
    for(int i=0;i<len;i++){
      scanf("%d",&arr[i]);
    }
    
    for(int j=1;j<len;j++){
      arr[j-1] = arr[len-j];
    }
    
    for(int k=0; k<len;k++){
      printf("%d ", arr[k]);
    }
    return 0;
}