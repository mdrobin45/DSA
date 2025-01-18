#include <bits/stdc++.h>
using namespace std;
int main(){
   list<int> mainlist;
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int x, v;
      cin >> x >> v;
      auto iterator = mainlist.begin();
      advance(iterator, x);
      mainlist.insert(iterator, v);
      for(auto val:mainlist){
         cout << val << " ";
      }
      cout << endl;
   }
   
   // while(n!=0){
      
   //    n--;
   // }
   
   return 0;
}