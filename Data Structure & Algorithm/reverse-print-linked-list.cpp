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

// Reverse linked list
int reverse_linked_list(Node*head){
   Node *temp = head;
   if(temp==NULL){
      return;
   }
   
   reverse_linked_list(temp->next);
   return temp->val;
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
   reverse_linked_list(head);
   return 0;
}