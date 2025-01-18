#include <bits/stdc++.h>
using namespace std;

int main()
{
   list<int> myList;
   list<int> myList2;

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
   while (1)
   {
      cin >> val;
      if (val == -1)
      {
         break;
      }

      myList2.push_back(val);
   }

   if(myList==myList2){
      cout << "YES";
   }else{
      cout<<"NO";
   }

   return 0;
}