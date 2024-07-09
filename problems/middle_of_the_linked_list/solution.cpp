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
        ListNode *vp = head;
        int count = 0;
        while(vp != NULL){
            count++;
            vp = vp->next;
        }
        if(count%2!=0){
            count = count/2;
            for(int i=0;i<count;i++){
                head = head->next;
            }
        }
        else{
            count = (count/2);
            for(int i=0;i<count;i++){
                head = head->next;
            }
        }
        return head;
    }
};