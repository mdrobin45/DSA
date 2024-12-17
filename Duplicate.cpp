#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   vector<long long> arr(n);

   // Input array
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   // Sort array accenting order - O(nlogN)
   sort(arr.begin(), arr.end());

   // Check duplicate - O(n)
   for (int i = 0; i < n-1; i++)
   {
      if(arr[i]==arr[i+1]){
         cout << "YES";
         return 0;
      }
   }

   cout << "NO";

   return 0;
}