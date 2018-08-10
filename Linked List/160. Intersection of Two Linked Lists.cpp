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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL;
        ListNode* curA = headA;
        ListNode* curB = headB;
        int countA = 0;
        int countB = 0;
        while(curA){
            countA++;
            curA = curA->next;
        }
        while(curB){
            countB++;
            curB = curB->next;
        }
        int sub = abs(countA - countB);
        if(countA < countB)
            swap(headA, headB);
        ListNode* cur = headA;
        while(sub){
            cur = cur->next;
            sub--;
        }
        while(cur != headB){
            cur = cur->next;
            headB = headB->next;
        }
        return cur;
            
        }
    
};