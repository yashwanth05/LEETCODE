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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k==0){
            return head;
        }
        int count = 0;
        ListNode* ptr = head;
        while(ptr != NULL){
            count++;
            ptr = ptr->next;
        }
        // cout<<count;
        
        k = k%count;
        int itr = count - k;
        if(itr == count){
            return head;
        }
        cout<<itr;
        ListNode* prev;
        ptr = head;
        for(int i=0;i<itr;i++){
            prev = ptr;
            ptr = ptr->next;
        }
        ListNode* head2 = ptr;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        cout<<prev->val;
        ptr->next = head;
        prev->next = NULL;
        head = head2;
        return head;
    }
};