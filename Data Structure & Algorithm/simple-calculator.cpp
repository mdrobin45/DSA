#include <bits/stdc++.h>
using namespace std;

// Sum
long long sum(int x, int y)
{
   long long result = x + y;
   return result;
}

// Multiplication
long long multi(int x, int y)
{
   long long result = x * y;
   return result;
}

// Subtraction
int subtraction(int x, int y)
{
   int result = x - y;
   return result;
}
int main()
{
   long long x, y;
   cin >> x >> y;
   if (x >= 1 && x<=100000 && y > 0 && y<=100000)
   {
      long long summation = sum(x, y);
      int subs = subtraction(x, y);
      long long multiplication = multi(x, y);

      cout << x << " + " << y << " = " << summation << endl;
      cout << x << " * " << y << " = " << multiplication << endl;
      cout << x << " - " << y << " = " << subs << endl;
   }
}