# [Linked List Traversal](https://leetcode.com/problems/print-linked-list-elements/)

- **Difficulty**: DSA

## Solution (cpp)
```cpp
/* Structure for Link list node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> printList(Node *head) {
        vector<int> ans;

        while (head != nullptr) {
            ans.push_back(head->data);
            head = head->next;
        }

        return ans;
    }
};
```
