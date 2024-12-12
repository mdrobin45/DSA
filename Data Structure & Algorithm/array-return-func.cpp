#include <bits/stdc++.h>
using namespace std;

int* get_array(int n){
   int* arr=new int[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   return arr;
}
int main(){
   int n;
   cin >> n;
   int* p = get_array(n);
   for (int i = 0; i < n; i++)
   {
       cout << *p+i<<" "<<endl;
   }
   
  
   delete[] p;
   cout << *p;
   return 0;
}