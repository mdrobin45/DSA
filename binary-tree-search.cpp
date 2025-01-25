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

// Tree search
bool tree_search(TreeNode*root,int val){
   if(!root){
      return 0;
   }
   if(root->val==val){
      return 1;
   }
   if(root->val>val){
      return tree_search(root->left, val);
   }
   if(root->val<val){
      return tree_search(root->right, val);
   }
}
int main(){
   int sValue;
   TreeNode *root = input_tree();
   cin >> sValue;
   bool r=tree_search(root, sValue);
   cout << r;
   return 0;
}