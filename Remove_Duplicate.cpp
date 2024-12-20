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

// Delete at position
void delete_at_position(Node *head, int pos)
{
   Node *temp = head;
   for (int i = 1; i < pos; i++)
   {
      temp = temp->next;
   }
   Node *deleteNode = temp->next;
   temp->next = deleteNode->next;
   delete deleteNode;
}

// Print Linked List
void print_linked_list(Node *head)
{
   if (head == NULL)
   {
      cout << "Nothing to print! Please insert first";
      return;
   }
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->val << " ";
      temp = temp->next;
   }
};

void remove_duplicate(Node *head)
{
   Node *current = head;
   while (current != NULL)
   {
      Node *current2 = current;
      while (current2->next != NULL)
      {
         if (current->val == current2->next->val)
         {
            Node *duplicate = current2->next;
            current2->next = current2->next->next;
            delete duplicate;
         }
         else
         {
            current2 = current2->next;
         }
      }
      current = current->next;
   }
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

   remove_duplicate(head);
   print_linked_list(head);
   return 0;
}