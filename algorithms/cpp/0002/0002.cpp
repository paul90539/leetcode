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
        ListNode *resultList = new ListNode();
        // avoid use pointer directly
        ListNode *pl1 = l1, *pl2 = l2, *prl = resultList;
        int val1, val2, carry = 0, sum = 0;
        
        //single loop, O(n)
        while(pl1 != nullptr || pl2 != nullptr){
            val1 = 0, val2 = 0;
            
            // get value
            if(pl1 != nullptr){
                val1 = pl1->val;
                pl1 = pl1->next;
            }
            if(pl2 != nullptr){
                val2 = pl2->val;
                pl2 = pl2->next;
            }
                       
            sum = val1 + val2 + carry;
            
            // set carry bit and next node
            if(sum >= 10){
                carry = 1;
                sum -= 10;
            }
            else{
                carry = 0;
            }            
            prl->next = new ListNode(sum);
            prl = prl->next;
        }
        
        if(carry > 0)
            prl->next = new ListNode(carry);            
     
        return resultList->next;
    }
};
