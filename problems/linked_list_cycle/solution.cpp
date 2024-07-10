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
    bool hasCycle(ListNode *head) {
       set<ListNode*> st;
        ListNode* ptr = head;
        while(ptr!=NULL){
            if(st.find(ptr->next)!=st.end()){
                return true;
            }
            else{
                st.insert(ptr->next);
            }
            ptr = ptr->next;
        }
        return false;
    }
};