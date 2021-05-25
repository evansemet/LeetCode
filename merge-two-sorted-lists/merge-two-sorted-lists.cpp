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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode temp(-1);
        ListNode* end(&temp);
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val){
                end->next = l1;
                end = l1;
                l1 = l1->next;
            } else {
                end->next = l2;
                end = l2;
                l2 = l2->next;
            }
        }
        if (l1 != NULL) {
            end->next = l1;
        } else {
            end->next = l2;
        }
        return temp.next;
    }
};