#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return compareBSTs(p, q);
        // printLeftToRight(q, vector2);
    }

    bool compareBSTs(TreeNode* root1, TreeNode* root2) {
      if (root1 == nullptr && root2 == nullptr)
        return true;
      
      if (root1 == nullptr || root2 == nullptr)
        return false;
      
      if (root1->val != root2->val)
        return false;
      
      bool leftEqual = compareBSTs(root1->left, root2->left);
      bool rightEqual = compareBSTs(root1->right, root2->right);
      
      return leftEqual && rightEqual;
    }
};


int main() {
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);

    Solution solution;
    bool result = solution.isSameTree(p, q);
    cout << "Result: " << result << endl;
}