#include <bits/stdc++.h>
using namespace std;

// Binary Tree TreeNode
class TreeNode{
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

// Preorder traversal
void preorder_traversal(TreeNode *root) {
   if(!root){
      return;
   };
   cout << root->val<<" ";
   preorder_traversal(root->left);
   preorder_traversal(root->right);
};

// Postorder traversal
void postorder_traversal(TreeNode *root) {
   if(!root){
      return;
   };
   postorder_traversal(root->left);
   postorder_traversal(root->right);
   cout << root->val<<" ";
};

// In order traversal
void inorder_traversal(TreeNode *root) {
   if(!root){
      return;
   };
   inorder_traversal(root->left);
   cout << root->val<<" ";
   inorder_traversal(root->right);
};

// In order traversal
void levelorder_traversal(TreeNode *root) {
   queue<TreeNode*> queueList;
   queueList.push(root);
   while(!queueList.empty()){
      // Take front TreeNode from queue
      TreeNode *frontNode = queueList.front();

      // Push children of front TreeNode of have
      if(frontNode->left){
         TreeNode *leftNode = frontNode->left;
         queueList.push(leftNode);
      }
      if(frontNode->right){
         TreeNode *rightNode = frontNode->right;
         queueList.push(rightNode);
      }

      // Print front TreeNode value
      cout << frontNode->val<<" ";

      // Remove front TreeNode from queue
      queueList.pop();
   }
};

int main()
{
   TreeNode *root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->left->left = new TreeNode(4);
   root->left->right = new TreeNode(5);
   root->right->left = new TreeNode(6);
   root->right->right = new TreeNode(7);

   levelorder_traversal(root);
   return 0;
}