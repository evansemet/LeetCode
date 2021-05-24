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
    int getDecimalValue(ListNode* head) {
        int length(0), output(0);
        ListNode* curr = head;
        while (curr != nullptr) {
            ++length;
            curr = curr->next;
        }
        curr = head;
        for (int i(length - 1); i >= 0; --i) {
            if (curr->val == 1) {
                output += pow(2, i);
            }
            curr = curr->next;
        }
        return output;
    }
};


/// 