#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   vector<long long> arr(n);

   // Input array - O(n)
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   // Calculate prefix sum - O(n)
   vector<long long> prefixSum(n);
   prefixSum[0] = arr[0];
   for (int i = 1; i < n; i++)
   {
      prefixSum[i] = arr[i] + prefixSum[i - 1];
   }

   // Reverse prefix sum - O(n)
   reverse(prefixSum.begin(), prefixSum.end());

   // Print reversed prefix sum
   for (int i = 0; i < n; i++)
   {
      cout << prefixSum[i]<<" ";
   }

   return 0;
}