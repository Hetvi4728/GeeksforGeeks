# [Closest in BST](https://leetcode.com/problems/find-the-closest-element-in-bst/)

- **Difficulty**: DSA

## Solution (cpp)
```cpp
/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/


class Solution {
  public:
    void inorder(Node* root, int k, int &ans) {
        if (root == nullptr)
            return;

        ans = min(ans, abs(root->data - k));

        inorder(root->left, k, ans);
        inorder(root->right, k, ans);
    }

    int minDiff(Node *root, int k) {
        int ans = INT_MAX;

        inorder(root, k, ans);

        return ans;
    }
};

```
