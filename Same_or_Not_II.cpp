#include <bits/stdc++.h>
using namespace std;
class Stack
{
   list<int> myList;

public:
   void push(int val)
   {
      myList.push_back(val);
   }
   void pop()
   {
      myList.pop_back();
   }
   int size()
   {
      return myList.size();
   }
   bool empty()
   {
      return myList.empty();
   }
   int top()
   {
      return myList.back();
   }
};
class Queue
{
   list<int> myQueue;

public:
   void push(int val)
   {
      myQueue.push_back(val);
   }
   void pop()
   {
      if (!myQueue.empty())
      {
         myQueue.pop_front();
      }
   }
   int size()
   {
      return myQueue.size();
   }
   bool empty()
   {
      return myQueue.empty();
   }
   int front()
   {
      if (!myQueue.empty())
      {
         return myQueue.front();
      }else{
         return -1;
      }
   }
   int back()
   {
      if (!myQueue.empty())
      {
         return myQueue.back();
      }else{
         return -1;
      }
   }
};

int main()
{
   int n, m;
   Stack stk;
   Queue que;
   cin >> n >> m;

   // Input in stack
   int val;
   while (n > 0)
   {
      int val;
      cin >> val;
      stk.push(val);
      n--;
   }
   // Input queue

   while (m > 0)
   {
      cin >> val;
      que.push(val);
      m--;
   }

   while (!stk.empty() && !que.empty())
   {
      if (stk.top() != que.front())
      {
         cout << "NO";
         return 0;
      }
      else
      {
         stk.pop();
         que.pop();
      }
   }

   if (stk.empty() && que.empty())
   {
      cout << "YES";
   }
   else
   {
      cout << "NO";
   }
   return 0;
}