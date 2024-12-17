#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

// // Insert at head
// void insert_at_head(Node* &head,int val) {
//    Node *newNode = new Node(val);
//    if(head==NULL){
//       head = newNode;
//       return;
//    }
//    newNode->next = head;
//    head = newNode;
// };

// Insert at tail or end of linked list
void insert_at_tail(Node*&head,int val) {
   Node *newNode = new Node(val);

   if(head==NULL){
      head = newNode;
      return;
   };
   Node *temp = head;
   while (temp->next!=NULL)
   {
      temp = temp->next;
   }
   temp->next = newNode;
};

int main()
{
   Node *head = NULL;
   Node *tail = NULL;

   int val,sizeCount=0;
   while (1)
   {
      cin >> val;
      if(val==-1){
         break;
      }
      sizeCount++;
      insert_at_tail(head, val);
   }
   cout << sizeCount;
   return 0;
}