#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   int arr[n];
   int newArr[n];
   for (int i = 0, j = n-1; i < n, j >= 0; i++, j--)
   {
      cin >> arr[i];
      newArr[j] = arr[i];

   }
   for (int i = 0; i < n; i++)
   {
      cout << newArr[i]<<" ";
   }

   return 0;
}