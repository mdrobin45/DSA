#include <bits/stdc++.h>
using namespace std;

// Binary Tree Node
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

// Input binary tree
TreeNode *input_tree()
{
   queue<TreeNode *> queList;
   int val;
   cin >> val;
   TreeNode *root;
   root = val == -1 ? nullptr : new TreeNode(val);
   if (root)
   {
      queList.push(root);
   }
   while (!queList.empty())
   {
      int left, right;
      TreeNode *myLeft, *myRight;
      TreeNode *currentNode;
      currentNode = queList.front();
      queList.pop();
      cin >> left >> right;
      left != -1 ? myLeft = new TreeNode(left) : myLeft = nullptr;
      right != -1 ? myRight = new TreeNode(right) : myRight = nullptr;
      currentNode->left = myLeft;
      currentNode->right = myRight;
      if (currentNode->left)
      {
         queList.push(currentNode->left);
      }
      if (currentNode->right)
      {
         queList.push(currentNode->right);
      }
   }
   return root;
};

// Get max height
int max_height(TreeNode*root) {
   if(!root){
      return 0;
   };
   if(!root->left&&!root->right){
      return 0;
   }
   int l = max_height(root->left);
   int r = max_height(root->right);
   return max(l, r)+1;
};

void levelorder_traversal(TreeNode *root,int x)
{
   int height = max_height(root);
   if(x>height || x<0){
      cout << "Invalid";
      return;
   }
   
   queue<pair<TreeNode *,int>> queueList;
   queueList.push({root,0});
   while (!queueList.empty())
   {
      // Take front TreeNode from queue
      pair<TreeNode*,int>frontNode = queueList.front();
      int level = frontNode.second;

      // Push children of front TreeNode of have
      if (frontNode.first->left)
      {
         TreeNode *leftNode = frontNode.first->left;
         queueList.push({leftNode,level+1});
      }
      if (frontNode.first->right)
      {
         TreeNode *rightNode = frontNode.first->right;
         queueList.push({rightNode,level+1});
      }

      // Print front TreeNode value
      if(level==x){
         cout << frontNode.first->val << " ";
      }

      // Remove front TreeNode from queue
      queueList.pop();
   }
};

int main(){
   int x;
   TreeNode *root = input_tree();
   cin >> x;
   // cout << x;
   levelorder_traversal(root, x);
   return 0;
}