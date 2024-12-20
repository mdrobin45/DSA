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

// Check same same
void same_same(Node *head1, Node *head2)
{
   Node *current1 = head1;
   Node *current2 = head2;

   int flag = 0;
   while (current1 != NULL && current2 != NULL)
   {
      if (current1->val != current2->val)
      {
         flag = 1;
         break;
      }
      current1 = current1->next;
      current2 = current2->next;
   }

   if (current1 == NULL && current2 == NULL && flag == 0)
   {
      cout << "YES" << endl;
   }
   else
   {
      cout << "NO" << endl;
   }
};

int main()
{

   // Linked list one
   Node *head1 = NULL;
   Node *tail1 = NULL;

   // Input linked list
   int val;
   while (1)
   {
      cin >> val;
      if (val == -1)
      {
         break;
      }
      tail_insert(head1, tail1, val);
   }

   // Linked list two
   Node *head2 = NULL;
   Node *tail2 = NULL;

   // Input linked list
   while (1)
   {
      cin >> val;
      if (val == -1)
      {
         break;
      }
      tail_insert(head2, tail2, val);
   }

   same_same(head1, head2);

   return 0;
}