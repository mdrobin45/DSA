#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   vector<int> prefix(n);
   prefix[0] = arr[0];
   for (int i = 0; i < n; i++)
   {
      prefix[i] = arr[i] + prefix[i - 1];
   }

   for (int i = 0; i < n; i++)
   {
      cout << prefix[i]<<" ";
   }

   return 0;
}