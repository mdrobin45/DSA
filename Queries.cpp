#include <bits/stdc++.h>
using namespace std;

// Linked list node class
class Node
{
public:
   long long val;
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

// Insert at head
void head_insert(Node *&head, Node *&tail, int val)
{
   Node *newNode = new Node(val);
   if (head == NULL)
   {
      head = newNode;
      tail = newNode;
      return;
   }
   newNode->next = head;
   head = newNode;
};

// Delete at position
void delete_at_position(Node *&head,Node*&tail, int pos)
{
   if (!head || pos < 0)
   {
      return;
   }

   // Delete from head
   if (pos == 0)
   {
      Node *deleteNode = head;
      head = head->next;

      if(!head){
         tail = NULL;
      }
      delete deleteNode;
      return;
   }

   // Delete at position
   Node *temp = head;
   for (int i = 0; temp != NULL && i < pos - 1; i++)
   {
      temp = temp->next;
   }

   // Check invalid position
   if (!temp || !temp->next)
   {
      return;
   }

   Node *deleteNode = temp->next;
   temp->next = deleteNode->next;

   // Update tail if last node deleted
   if(deleteNode==tail){
      tail = temp;
   }

   delete deleteNode;
}

// Print Linked List
void print_linked_list(Node *head)
{
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->val << " ";
      temp = temp->next;
   }
};

int main()
{
   int n;
   Node *head = NULL;
   Node *tail = NULL;

   cin >> n;

   while (n != 0)
   {
      long long x, v;
      cin >> x >> v;

      if (x == 0)
      {
         head_insert(head,tail, v);
      }
      if (x == 1)
      {
         tail_insert(head, tail, v);
      }
      else if (x == 2)
      {
         delete_at_position(head,tail, v);
      }
      print_linked_list(head);
      cout << endl;
      n--;
   }

   return 0;
}