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

// Print Linked List
void print_linked_list(Node *head)
{
   if(head==NULL){
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

// Delete at head - Linked list
void delete_at_head(Node*&head){
   if(head==NULL){
      cout << "Nothing to delete! Please insert first";
      return;
   }
   Node *deleteNode = head;
   head = head->next;
   delete deleteNode;
}

// Delete at tail
void delete_at_tail(Node*head,Node*&tail){
   Node *deleteNode = tail;

   if(head==NULL||tail==NULL){
      cout << "Nothing to delete! Please insert first";
      return;
   }
   Node *temp = head;
   while (temp->next!=tail){
      temp = temp->next;
   }
   tail = temp;
   tail->next = NULL;
   delete deleteNode;
}

// Delete at position
void delete_at_position(Node*head,int pos){
   Node *temp = head;
   for (int i = 1; i < pos - 1; i++)
   {
      temp = temp->next;
   }
   Node *deleteNode = temp->next;
   temp->next = deleteNode->next;
   delete deleteNode;
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

   delete_at_position(head, 10);
   print_linked_list(head);

   return 0;
}