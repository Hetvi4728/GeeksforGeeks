# [Identical Linked Lists](https://leetcode.com/problems/identical-linked-lists/)

- **Difficulty**: DSA

## Solution (cpp)
```cpp
/* Strucutre of a Node in linked list
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {

        while (head1 != nullptr && head2 != nullptr) {
            if (head1->data != head2->data) {
                return false;
            }

            head1 = head1->next;
            head2 = head2->next;
        }

        return head1 == nullptr && head2 == nullptr;
    }
};
```
