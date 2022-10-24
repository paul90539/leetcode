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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast_ptr = head;
        ListNode* slow_ptr = head;
        
        while(fast_ptr != nullptr && fast_ptr->next != nullptr){
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        
        return slow_ptr;
    }
};