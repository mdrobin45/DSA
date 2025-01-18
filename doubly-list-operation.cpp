#include <bits/stdc++.h>
using namespace std;

// Doubly Linked list node class
class Node
{
public:
   int val;
   Node *next;
   Node *prev;

   Node(int val)
   {
      this->val = val;
      this->next = NULL;
      this->prev = NULL;
   }
};

// Insert a head
void doubly_insert_head(Node *&head, Node *&tail, int val)
{
   Node *newNode = new Node(val);
   if (head == NULL)
   {
      head = newNode;
      tail = newNode;
      return;
   }

   newNode->next = head;
   head->prev = newNode;
   head = newNode;
};

// Insert at tail
void doubly_insert_tail(Node*&head,Node*&tail,int val) {
   Node *newNode = new Node(val);

   if(head==NULL){
      head = newNode;
      tail = newNode;
      return;
   }

   newNode->prev = tail;
   tail->next = newNode;
   tail = newNode;
};

// Position insert
void doubly_position_insert(Node*head,Node*tail,int pos,int val){
   Node *newNode = new Node(val);
   Node *current = head;
   for (int i = 1; i < pos; i++)
   {
     current = current->next;
   }
   if(current==tail){
      return;
   }
   newNode->next = current->next;
   current->next->prev = newNode;
   current->next = newNode;
   newNode->prev = current;
}

// Print Linked List
void print_linked_list(Node *head)
{
   if (head == NULL)
   {
      return;
   }
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->val << " ";
      temp = temp->next;
   }
};

int main()
{
   // Node *head = NULL;
   // Node *tail = NULL;
   Node *head = new Node(10);
   Node *a = new Node(20);
   Node *b = new Node(30);
   Node *tail = new Node(40);

   head->next = a;
   a->prev = head;
   a->next = b;
   b->prev = a;
   b->next = tail;
   tail->prev = b;

   doubly_position_insert(head,tail,4,200);

   print_linked_list(head);
   return 0;
}