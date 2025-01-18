#include <bits/stdc++.h>
using namespace std;

// Linked list node class
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

// Insert at tail - Linked list
void tail_insert(Node*&head,Node*&tail,int val){
   Node *newNode = new Node(val);

   // Check if list empty or not
   if (head == NULL){
      head = newNode;
      tail = newNode;
      return;
   }

   // Update tail & pointer
   tail->next = newNode;
   newNode->prev = tail;
   tail = newNode;
};

// Check if linked list is palindrome or not
bool is_palindrome(Node*head, Node*tail){
   Node *leftPtr = head;
   Node *rightPtr = tail;
   while(leftPtr != rightPtr){
      if(leftPtr->val != rightPtr->val){
         return false;
      }
      leftPtr = leftPtr->next;
      rightPtr = rightPtr->prev;
   } 
   return true;
}

int main(){
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

      // Check if linked list is palindrome or not
      bool palindrome = is_palindrome(head, tail);
      palindrome ? cout << "YES" : cout << "NO";
   return 0;
}