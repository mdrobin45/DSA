#include <bits/stdc++.h>
using namespace std;

// Count zeros
int coutZero(stack<string>stk) {
   int zeros = 0;
   if (!stk.empty())
   {
      string line = stk.top();
      for (int i = 0; i < stk.top().size(); i++)
      {
         if (line[i] == '0')
         {
            zeros++;
         }
      }
   }
   return zeros;
};

// Count zeros
int coutOne(stack<string>stk) {
   int ones = 0;
   if (!stk.empty())
   {
      string line = stk.top();
      for (int i = 0; i < stk.top().size(); i++)
      {
         if (line[i] == '1')
         {
            ones++;
         }
      }
   }
   return ones;
};

int main()
{
   int n;
   cin >> n;
   while(n>0){
      stack<string> stk;
      string val;
      cin >> val;
      stk.push(val);
      int totalZeros = coutZero(stk);
      int totalOnes = coutOne(stk);
      
      if(totalZeros==totalOnes){
         cout << "YES"<<endl;
      }else{
         cout << "NO"<<endl;
      }
      n--;
   }
   return 0;
}