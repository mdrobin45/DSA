#include <bits/stdc++.h>
using namespace std;

int main()
{
   string input;
   cin >> input;
   transform(input.begin(), input.end(), input.begin(), ::tolower);
   int eNum=0, yNum=0, gNum=0, pNum=0, tNum=0;
   for (int i = 0; i < input.length(); i++)
   {
      if(input[i]=='e'){
         eNum++;
      }else if(input[i]=='y'){
         yNum++;
      }else if(input[i]=='g'){
         gNum++;
      }else if(input[i]=='p'){
         pNum++;
      }else if(input[i]=='t'){
         tNum++;
      }
   }
   int minTime = min({eNum, yNum, gNum, pNum, tNum});
   cout << minTime;
}