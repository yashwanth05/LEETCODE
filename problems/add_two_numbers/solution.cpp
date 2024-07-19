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
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        int tally = 0;
        int n1,n2;
        int val;
        while(l1!=NULL || l2!=NULL || tally != 0){
            int n1 = (l1 != nullptr) ? l1->val : 0;
            int n2 = (l2 != nullptr) ? l2->val : 0;
            val = n1+n2+tally;
            tally = val/10;
            val = val%10;
            ListNode* nn = new ListNode(val);
            cur->next = nn;
            cur = cur->next;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;

        }
        return dummy->next;
    }
};