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
        if(head == NULL) return head;
        ListNode* temp = head;
        int count = 0;
        // cout<<head->val<<endl;
        while(temp!=NULL){
            // cout<<count<<endl;
            count++;
            temp=temp->next;
        }
        if(count == 1){
            return NULL;
        }
        // cout<<count<<endl;
        count = count/2;
        temp = head;
        ListNode* prev = NULL;
        int i=0;
        while(i!=count){
            prev = temp;
            temp = temp->next;
            i++;
        }
        prev->next = temp->next;
        return head;
    }
};