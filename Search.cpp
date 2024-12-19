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

// Check value existence
void exist(Node *head, int x)
{
   Node *current = head;
   int index = 0;
   while (current != NULL)
   {
      index++;
      if (current->val == x)
      {
         cout << index - 1<<endl;
         return;
      }
      current = current->next;
   }
   if (current == NULL)
   {
      cout << "-1"<<endl;
   }
}

int main()
{
   int n;
   cin >> n;
   while (n != 0)
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

      int x;
      cin >> x;
      exist(head, x);
      n--;
   }

   return 0;
}