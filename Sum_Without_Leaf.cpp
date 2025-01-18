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

// Sum without leaf
int sum_without_leaf(TreeNode *root) {
   if(!root){
      return 0;
   }
   
   if(!root->left && !root->right){
      return 0;
   }
   
   return root->val+sum_without_leaf(root->left)+sum_without_leaf(root->right);
};

int main()
{

   TreeNode *root = input_tree();
   int result = sum_without_leaf(root);
   cout << result;
   return 0;
}