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

// Get max node depth
int max_depth(TreeNode*root) {
   if(!root){
      return 0;
   };
   if(!root->left&&!root->right){
      return 0;
   }
   int l = max_depth(root->left);
   int r = max_depth(root->right);
   return max(l, r)+1;
};

// Count nodes
int count_nodes(TreeNode *root) {
   if(!root){
      return 0;
   }

   int l = count_nodes(root -> left);
   int r = count_nodes(root->right);

   return (l + r)+1;
};

int main()
{
   TreeNode*root=input_tree();
   int depth = max_depth(root);
   double perfectTreeNodes = pow(2,depth+1)-1;
   int totalNodes = count_nodes(root);
   if(perfectTreeNodes==totalNodes){
      cout << "YES";
   }else{
      cout << "NO";
   }
   return 0;
}