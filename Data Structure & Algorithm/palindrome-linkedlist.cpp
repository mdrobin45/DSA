#include <bits/stdc++.h>
using namespace std;

// Check palindrome
bool is_palindrome(list<int>inputList){
   auto start = inputList.begin();
   auto end = inputList.end();

   for (auto leftPtr = start, rightPtr = --end; leftPtr != rightPtr; ++leftPtr,--rightPtr)
   {
      if(*leftPtr!=*rightPtr){
         return 0;
      }
   }

   

   return 1;
}
int main(){
   list<int> myList;
   while(1){
      int val;
      cin >> val;
      if(val==-1){
         break;
      }
      myList.push_back(val);
   }

   bool result = is_palindrome(myList);
   if(result){
      cout << "YES";
   }else{
      cout << "NO";
   }

   return 0;
}