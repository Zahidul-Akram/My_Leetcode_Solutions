/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         Node *current = head, *next;
          // check ayushi if necessary
          // proti ta original er por oitar copy pointer add kortesi
          while (current != NULL) {
            next = current->next;

            Node* copy=new Node(current->val);
            current->next = copy;
            copy->next = next;

            current = next;
          }

          // protita original er moto random node tao thik kortesi
          current = head;
          while (current != NULL) {
            if (current->random != NULL) {
              current->next->random = current->random->next;
            }
            current = current->next->next;
          }

          // Third round: restore the original list, and extract the copy list.
          current = head;
          Node* dummy = new Node(0);
          Node* copy, *copyTail = dummy;

          while (current != NULL) {
            next = current->next->next;

            // extract the copy
            copy = current->next;
            copyTail->next = copy;
            copyTail = copy;

            // restore the original list
            current->next = next;

            current = next;
          }

          return dummy->next;
    }
};