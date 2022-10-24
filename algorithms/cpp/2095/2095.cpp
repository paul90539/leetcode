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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr) return nullptr;
        
        // need fast_ptr walk one more prev_slow_ptr 
        ListNode* fast_ptr = head->next->next;
        ListNode* prev_slow_ptr = head;
        
        while(fast_ptr != nullptr && fast_ptr->next != nullptr){
            fast_ptr = fast_ptr->next->next;
            prev_slow_ptr = prev_slow_ptr->next;
        }
        
        // 'prev_slow_ptr->next' is middle node
        prev_slow_ptr->next = prev_slow_ptr->next->next;
        
        return head;
    }
};