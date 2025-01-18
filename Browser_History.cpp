#include <bits/stdc++.h>
using namespace std;

int main()
{
   list<string> urlList;
   string url;

   while (1)
   {
      cin >> url;
      if (url == "end")
      {
         break;
      }
      urlList.push_back(url);
   }

   int number_of_queries;
   cin >> number_of_queries;
   cin.ignore();

   auto current = urlList.begin();
   while (number_of_queries--)
   {
      string command;
      getline(cin, command);

      if (command.find("visit") != std::string::npos)
      {
         string toVisit = command.substr(6);
         auto it = find(urlList.begin(), urlList.end(), toVisit);
         if (it != urlList.end())
         {
            current = it;
            cout << *it << endl;
         }
         else
         {
            cout << "Not Available" << endl;
         }
      }
      else if (command == "next")
      {
         if (current != urlList.end() && next(current) != urlList.end())
         {
            ++current;
            cout << *current << endl;
         }
         else
         {
            cout << "Not Available" << endl;
         }
      }
      else if (command == "prev")
      {
         if (current != urlList.begin())
         {
            --current;
            cout << *current << endl;
         }
         else
         {
            cout << "Not Available" << endl;
         }
      }
   }
   return 0;
}