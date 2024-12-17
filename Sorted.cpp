#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;

   for (int i = 0; i < t; i++)
   {
      int n;
      cin >> n;
      int flag = 1;
      vector<int> arr(n);

      // Array intput - O(n)
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }

      // Check if sorted or not
      for (int i = 0; i < n-1; i++)
      {
         if (arr[i] > arr[i + 1])
         {
            flag = 0;
            break;
         }
      }
      if(flag){
         cout << "YES" << endl;
      }else{
         cout << "NO"<<endl;
      }
   }

   return 0;
}