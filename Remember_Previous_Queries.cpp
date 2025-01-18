#include <bits/stdc++.h>
using namespace std;
int main(){
   list<int>myList;
   int n;
   cin >> n;
   while (n--)
   {
      int firstVal,secondVal;
      cin >> firstVal >> secondVal;

      // Operations
      if(firstVal == 0){
         myList.push_front(secondVal);
      }else if(firstVal == 1){
         myList.push_back(secondVal);
      }else if(firstVal == 2 && secondVal < myList.size()){

         list<int>::iterator it = myList.begin();
         advance(it,secondVal);
         myList.erase(it);
      }

      // Print the list
      cout << "L -> ";
      for(auto it = myList.begin(); it != myList.end(); it++){
         cout << *it << " ";
      };
      cout << endl;

      // Copy main list to another list
      list<int>myListCopy(myList);
      myListCopy.reverse();
      cout << "R -> ";
      for(auto it = myListCopy.begin(); it != myListCopy.end(); it++){
         cout << *it << " ";
      };
      cout << endl;
   }

   return 0;
}