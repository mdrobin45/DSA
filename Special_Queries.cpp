#include <bits/stdc++.h>
using namespace std;
int main()
{
   queue<string> que;
   int n;
   cin >> n;
   cin.ignore();
   while (n > 0)
   {
      
      string inpt;
      getline(cin, inpt);

      string cmd = inpt.substr(0, 1);
      string person;
      if (inpt.size() > 1)
      {
         person = inpt.substr(2, inpt.size());
      }
      if (cmd == "0")
      {
         que.push(person);
      }
      else if (cmd == "1")
      {
         if (!que.empty())
         {
            cout << que.front() << endl;
            que.pop();
         }
         else
         {
            cout << "Invalid" << endl;
         }
      }
      n--;
   }
   return 0;
}