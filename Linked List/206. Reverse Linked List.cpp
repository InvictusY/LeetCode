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
    ListNode* reverseList(ListNode* head) {
        ListNode* dummy =new ListNode(0);
        dummy -> next = head;
        ListNode* pre = dummy;
        ListNode* cur = head;
        while(cur && cur -> next){
            ListNode* temp = cur -> next;
            cur -> next = temp -> next;
            temp -> next = pre -> next;
            pre ->next = temp;
        }
        return dummy -> next;
    }
};