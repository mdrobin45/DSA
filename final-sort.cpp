#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   while (n>0){
      vector<int> myList;
      int x;
      cin >> x;
      while(x>0){
         int val;
         cin >> val;
         myList.push_back(val);
         x--;
      }
      sort(myList.begin(), myList.end());
      auto end = unique(myList.begin(), myList.end());
      myList.resize(distance(myList.begin(), end));
      for (auto i : myList)
      {
         cout << i << " ";
      }
      cout << endl;

      n--;
   }
  
   return 0;
}