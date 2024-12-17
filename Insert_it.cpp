#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n; // O(1)
   vector<int> arrA(n);

   // Taking input array A - O(n)
   for (int i = 0; i < n; i++)
   {
      cin >> arrA[i];
   }

   int m;
   cin >> m; // O(1)
   vector<int> arrB(m);

   // Taking B array input - O(n)
   for (int i = 0; i < m; i++)
   {
      cin >> arrB[i];
   }

   int x;
   cin >> x; // O(1)

   // Array insertion - O(n)
   arrA.insert(arrA.begin() + x, arrB.begin(),arrB.end());

   // Print updated array - O(n)
   for (int i = 0; i < n+m; i++)
   {
      cout << arrA[i] << " ";
   }

   return 0;
}