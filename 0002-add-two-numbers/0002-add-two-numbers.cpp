/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int car = 0;
        ListNode* l3 = new ListNode(0);
        ListNode* ans = l3 ;
        
        while(l1 && l2){
            int sum = l1->val + l2->val + car ;
            car = sum/10 ;
            l3->next = new ListNode(sum%10);
            l3 = l3->next ;
            l1 = l1->next ;
            l2 = l2->next ; 
        }
        while(l1){
            int sum = l1->val + car ;
            car = sum/10 ;
            l3->next = new ListNode(sum%10);
            l3 = l3->next ;
            l1 = l1->next ; 
        }
        while(l2){
            int sum = l2->val + car ;
            car = sum/10 ;
            l3->next = new ListNode(sum%10);
            l3 = l3->next ;
            l2 = l2->next ; 
        }
        if(car){
            l3->next = new ListNode(car) ;
        }
        
        return ans->next ; // karon shuru te 0 ekta node dye create korsilam ja lagbe na hudai so ....
        
    }
};

















