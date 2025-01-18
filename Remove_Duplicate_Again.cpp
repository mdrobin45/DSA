#include <bits/stdc++.h>
using namespace std;
int main(){
   list<int> myList;

      // Input linked list
      int val;
      while (1)
      {
         cin >> val;
         if (val == -1)
         {
            break;
         }
         myList.push_back(val);
      }

      // Remove duplicates
      myList.sort();
      myList.unique();

      // Print linked list
      for (auto i : myList)
      {
         cout << i << " ";
      }
   return 0;
}