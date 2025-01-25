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

void tree_insert(TreeNode *root, int val)
{
   TreeNode *temp = nullptr;
   TreeNode *newNode = new TreeNode(val);
   while (root!=nullptr)
   {
      temp = root;
      if (val < root->val)
      {
         root = root->left;
      }
      else if (val > root->val)
      {
         root = root->right;
      }
      else
      {
         return;
      }
   }
   
   if (temp->val > val)
   {
      temp->left = newNode;
   }
   else
   {
      temp->right = newNode;
   }
};

void levelorder_traversal(TreeNode *root)
{
   queue<TreeNode *> queueList;
   queueList.push(root);
   while (!queueList.empty())
   {
      // Take front TreeNode from queue
      TreeNode *frontNode = queueList.front();

      // Push children of front TreeNode of have
      if (frontNode->left)
      {
         TreeNode *leftNode = frontNode->left;
         queueList.push(leftNode);
      }
      if (frontNode->right)
      {
         TreeNode *rightNode = frontNode->right;
         queueList.push(rightNode);
      }

      // Print front TreeNode value
      cout << frontNode->val << " ";

      // Remove front TreeNode from queue
      queueList.pop();
   }
};
int main()
{
   int val;
   TreeNode *root = input_tree();
   cin >> val;
   tree_insert(root, val);
   levelorder_traversal(root);
   return 0;
}