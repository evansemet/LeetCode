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
        int length(0);
        ListNode* curr(head);
        while (curr) {
            ++length;
            curr = curr->next;
        }
        if (length == n) {
            return head->next;
        } else {
            curr = head;
            for (int j(1); j < length - n; ++j) {
                curr = curr->next;
            }
            curr->next = curr->next->next;
            return head;
        }
    }
};