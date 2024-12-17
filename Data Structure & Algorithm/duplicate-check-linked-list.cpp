#include <bits/stdc++.h>
using namespace std;

// Linked list node class
class Node
{
public:
   int val;
   Node *next;

   Node(int val)
   {
      this->val = val;
      this->next = NULL;
   }
};

// Insert at tail - Linked list
void tail_insert(Node *&head, Node *&tail, int val)
{
   Node *newNode = new Node(val);

   // Check if list empty or not
   if (head == NULL)
   {
      head = newNode;
      tail = newNode;
      return;
   }

   // Update tail & pointer
   tail->next = newNode;
   tail = newNode;
};

int main()
{
   Node *head = NULL;
   Node *tail = NULL;

   // Input linked list
   int val;
   while (1)
   {
      cin >> val;
      if (val == -1)
      {
         break;
      }
      tail_insert(head, tail, val);
   }

   Node *temp = head;
   int flag = 0;
   while (temp != NULL)
   {
      Node *temp2 = temp->next;
      while (temp2 != NULL)
      {
         if (temp->val == temp2->val)
         {
            cout << "YES";
            return 0;
         }
         temp2 = temp2->next;
      }
      temp = temp->next;
   }
   if (temp == NULL)
   {
      cout << "NO";
   }
   return 0;
}