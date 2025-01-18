#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, m;
   stack<int> stk;
   queue<int> que;
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

   if(stk.empty()&&que.empty()){
      cout << "YES";
   }else{
      cout << "NO";
   }
   return 0;
}