class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *temp = head;

        Node *new_node = new Node(x);

        if (head == NULL) {
            return new_node;
        }

        while(temp->next != NULL){
            temp = temp -> next;
        }

        temp->next = new_node;
        new_node->next = NULL;

        return head;
    }
};