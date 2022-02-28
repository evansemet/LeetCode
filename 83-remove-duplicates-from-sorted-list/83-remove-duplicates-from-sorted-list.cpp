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
    ListNode* deleteDuplicates(ListNode* head) {
        for (ListNode *curr = head; curr;) {
            ListNode *check = curr->next;
            while (check && check->val == curr->val) check = check->next;
            curr = curr->next = check;
        }
        return head;
    }
};