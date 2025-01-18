#include <bits/stdc++.h>
using namespace std;

// How stack created using vector
class Stack{
   vector<int> v;
   public:
   void push(int x){
      v.push_back(x);
   };
   void pop(){
      v.pop_back();
   };
   int top(){
      return v.back();
   };
   bool empty(){
      return v.empty();
   };
   int size(){
      return v.size();
   };
};

int main()
{

   return 0;
}