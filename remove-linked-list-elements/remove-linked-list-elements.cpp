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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *curr(head), *prev(nullptr);
        while (curr) {
            if (curr->val == val && !prev) {
                ListNode* temp(curr);
                curr = curr->next;
                head = curr;
                delete temp;
            } else if (curr->val == val) {
                ListNode* temp(curr);
                curr = curr->next;
                prev->next = curr;
                delete temp;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};