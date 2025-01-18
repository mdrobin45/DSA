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

// List size function
int list_size(Node *head)
{
   int count = 0;
   while (head != NULL)
   {
      count++;
      head = head->next;
   }
   return count;
};

int main()
{
   Node *head = NULL;
   Node *tail = NULL;

   int n;
   cin >> n;

   while (n--)
   {
      int val, pos;
      cin >> pos >> val;
      int size = list_size(head);

      if(pos < 0 || pos > size){
         cout << "Invalid" << endl;
         continue;
      };

      if (pos == 0)
      {
         Node *newNode = new Node(val);
         if (head == NULL)
         {
            head = newNode;
            tail = newNode;
         }
         else
         {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
         }
      }
      else if (pos == size)
      {
         Node *newNode = new Node(val);
         if (head == NULL)
         {
            head = newNode;
            tail = newNode;
         }
         else
         {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
         }
      }
      else
      {
         Node *temp = head;
         for (int i = 0; i < pos - 1; i++)
         {
            temp = temp->next;
         }
         Node *newNode = new Node(val);
         newNode->next = temp->next;
         temp->next->prev = newNode;
         temp->next = newNode;
         newNode->prev = temp;
      }

      // Printing the list
      Node *temp = head;
      cout << "L -> ";
      while (temp != NULL)
      {
         cout << temp->val << " ";
         temp = temp->next;
      }

      cout << endl;

      // Reverse print
      temp = tail;
      cout << "R -> ";
      while (temp != NULL)
      {
         cout << temp->val << " ";
         temp = temp->prev;
      }

      cout << endl;
   };
   return 0;
};