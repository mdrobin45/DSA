#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
   string nm;
   int cls;
   char s;
   int id;
   int math_marks;
   int eng_marks;
};

bool compare(Student left, Student right)
{
   if (left.eng_marks == right.eng_marks)
   {
      if (left.math_marks > right.math_marks)
      {
         return true;
      }
      else if (left.math_marks < right.math_marks)
      {
         return false;
      }
      else
      {
         if (left.id < right.id)
         {
            return true;
         }
         else
         {
            return false;
         }
      }
   }
   if (left.eng_marks > right.eng_marks)
   {
      return true;
   }
   else
   {
      return false;
   }
}
int main()
{
   int testCase;
   cin >> testCase;
   Student arr[testCase];

   for (int i = 0; i < testCase; i++)
   {
      cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
   }
   sort(arr, arr + testCase, compare);
   for (int i = 0; i < testCase; i++)
   {
      cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
   }

   return 0;
}