#include <bits/stdc++.h>
using namespace std;

// Compare function
bool comp(string a,string b) {
   int size_of_a = a.size();
   int size_of_b = b.size();

   int posA = a.find_last_of(" ");
   int posB = b.find_last_of(" ");

   string nameA = a.substr(0, posA);
   int idA = stoi(a.substr(posA,size_of_a-posA));
   
   string nameB = b.substr(0, posB);
   int idB = stoi(b.substr(posB,size_of_b-posB));

   if (nameA < nameB)
      return true;

   if(nameA==nameB){
      if(idA>idB)
         return true;
      else
         return false;
   }
   else
      return false;
};

int main()
{
   vector<string> db;
   int n;
   cin >> n;
   cin.ignore();
   while (n > 0)
   {
      string name;
      getline(cin, name);
      db.push_back(name);
      n--;
   }
   sort(db.begin(), db.end(),comp);
   for (auto i : db)
   {
   cout << i << endl;
   }
   return 0;
}