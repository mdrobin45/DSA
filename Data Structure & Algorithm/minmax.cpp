#include <bits/stdc++.h>
using namespace std;
int main(){
   int a, b, c,minNum,maxNum;
   cin >> a >> b >> c;

   minNum = min({a, b, c});
   maxNum = max({a, b, c});
   cout << minNum << " " << maxNum;

   return 0;
}