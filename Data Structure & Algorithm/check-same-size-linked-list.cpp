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

// Linked list size count
int size_linked_list(Node*head){
   Node *temp = head;
   int sizeCount = 0;
   while(temp!=NULL){
      sizeCount++;
      temp = temp->next;
   }
   return sizeCount;
}

int main()
{
   Node *head = NULL;
   Node *tail = NULL;

   Node *head2 = NULL;
   Node *tail2 = NULL;

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

   int size1 = size_linked_list(head);
   int size2 = size_linked_list(head2);
   size1 == size2 ? cout << "YES" << endl:cout<<"NO"<<endl;
   return 0;
}