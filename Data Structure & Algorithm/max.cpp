#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int maxNum = arr[0];
   for (int i = 0; i < n; i++)
   {
      maxNum=max(maxNum,arr[i]);
   }
   cout << maxNum << endl;

   return 0;
}