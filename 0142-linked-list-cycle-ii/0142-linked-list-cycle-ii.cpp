/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return NULL;

        ListNode *back  = head;
        ListNode *forw  = head;
        ListNode *strt = head;

        while (forw->next && forw->next->next) {
            back = back->next;
            forw = forw->next->next;
            if (back == forw) {                    
                while(back != strt) {               
                    back  = back->next;
                    strt = strt->next;
                }
                return strt;
            }
        }
        return NULL;  
    }
};