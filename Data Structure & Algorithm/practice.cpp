#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   cin.ignore();
   for (int i = 0; i < n; i++)
   {
      string str1, str2, newWord;
      cin >> str1 >> str2;
      int minStr = min(str1.length(), str2.length());
      for (int i = 0; i < minStr; i++)
      {
         newWord += str1.at(i);
         newWord += str2.at(i);
      }
      if (str1.length()> str2.length())
      {
         newWord += str1.substr(str2.length());
      }
      if (str1.length()< str2.length())
      {
         newWord += str2.substr(str1.length());
      }

      cout << newWord << endl;
   }
}