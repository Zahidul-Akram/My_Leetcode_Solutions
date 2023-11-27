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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1 ;
        ListNode* p3 = new ListNode() ;
        ListNode* ans = p3 ;
        ListNode* p1 = l1 ;
        ListNode* p2 = l2 ;
        
        while( p1 && p2 ){
            if(p1->val < p2->val){
                p3->val = p1->val ;
                p1 = p1->next ;
            }
            else{
                p3->val = p2->val ;
                p2 = p2->next ;
            }
            p3->next = new ListNode() ;
            p3 = p3->next ;
        }
        while(p1){
            p3->val = p1->val ;
            p1 = p1->next ;
            if(!p1){
                p3->next = NULL ;
            }
            else{
              p3->next = new ListNode() ;
            p3 = p3->next ;  
            }
            
        }
        while(p2){
            p3->val = p2->val ;
            p2 = p2->next ;
            if(!p2){
                p3->next = NULL ;
            }
            else{
               p3->next = new ListNode() ;
            p3 = p3->next ; 
            }
            
        }
        p3=p3->next ;
        return ans ;
        
    }
};
















