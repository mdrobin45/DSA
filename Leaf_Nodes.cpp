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

// Get leaf nodes
void leaf_nodes(TreeNode *root, vector<int>&leafs) {
   if(!root){
      return;
   };
   if(!root->left&&!root->right){
      leafs.push_back(root->val);
   };

   leaf_nodes(root->left, leafs);
   leaf_nodes(root->right, leafs);
   return;
};
int main()
{
   vector<int> leafs;
   TreeNode *root = input_tree();
   leaf_nodes(root, leafs);
   reverse(leafs.begin(), leafs.end());
   for (auto l : leafs)
   {
      cout << l<<" ";
   }
   return 0;
}