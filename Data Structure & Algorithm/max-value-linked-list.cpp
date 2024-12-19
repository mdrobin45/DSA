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

// Find maximum value from linked list
int max_linkedlist(Node *head)
{
   int maxValue = INT_MIN;
   Node *current = head;
   while (current != NULL)
   {
      if (current->val > maxValue)
      {
         maxValue = current->val;
      }
      current = current->next;
   }
   return maxValue;
}

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

   int maxValue = max_linkedlist(head);
   cout << maxValue;
   return 0;
}