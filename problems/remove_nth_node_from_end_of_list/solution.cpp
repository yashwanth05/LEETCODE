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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = head;
        int size = 0;
        while (ptr != nullptr) {
            size++;
            ptr = ptr->next;
        }

        if (n == size) {
            ListNode* newHead = head->next;
            return newHead;
        }

        ptr = head;
        ListNode* prev = nullptr;
        int rem = size - n;
        for (int i = 0; i < rem; ++i) {
            prev = ptr;
            ptr = ptr->next;
        }

        prev->next = ptr->next;

        return head;
    }
};
