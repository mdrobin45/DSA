#include <bits/stdc++.h>
using namespace std;

// Binary Tree Node
class TreeNode
{
public:
   int val;
   TreeNode *left;
   TreeNode *right;

   TreeNode(int val)
   {
      this->val = val;
      this->left = NULL;
      this->right = NULL;
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

// Left outer nodes
void left_outer(TreeNode *root, vector<int> &leftOuter)
{
   if (!root)
   {
      return;
   }

   if (root->left)
   {
      left_outer(root->left, leftOuter);
   }
   else if (root->right)
   {
      left_outer(root->right, leftOuter);
   }
   leftOuter.push_back(root->val);
}

// Right outer nodes
void right_outer(TreeNode *root, vector<int> &rightOuter)
{
   if (!root)
   {
      return;
   }
   rightOuter.push_back(root->val);
   if (root->right)
   {
      right_outer(root->right, rightOuter);
   }
   else if (root->left)
   {
      right_outer(root->left, rightOuter);
   }
}

int main()
{
   vector<int> leftOuter;
   vector<int> rightOuter;
   TreeNode *root = input_tree();
   left_outer(root, leftOuter);
   right_outer(root, rightOuter);
   if (root->left && root->right)
   {
      rightOuter.erase(rightOuter.begin());
      leftOuter.insert(leftOuter.end(), rightOuter.begin(), rightOuter.end());
      for (auto l : leftOuter)
      {
         cout << l << " ";
      }
   }
   else if (!root->left)
   {
      for (auto l : rightOuter)
      {
         cout << l << " ";
      }
   }
   else
   {
      for (auto l : leftOuter)
      {
         cout << l << " ";
      }
   }

   return 0;
}