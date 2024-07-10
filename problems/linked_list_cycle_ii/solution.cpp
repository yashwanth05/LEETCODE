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
    ListNode *detectCycle(ListNode *head) {
       set<ListNode*> st;
        ListNode* ptr = head;
        while(ptr!=NULL){
            if(ptr->next == head){
                return head;
            }
            if(st.find(ptr->next)!=st.end()){
                return ptr->next;
            }
            else{
                st.insert(ptr->next);
            }
            ptr = ptr->next;
        }
        return NULL;
    }
};