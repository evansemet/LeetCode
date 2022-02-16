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
    bool isPalindrome(ListNode* head) {
        vector<int> check;
        auto cur = head;
        while (cur) {
            check.push_back(cur->val);
            cur = cur->next;
        }
        int left = 0;
        int right = check.size() - 1;
        while (right >= left) {
            if (check[right] != check[left]) {
                return false;
            }
            --right;
            ++left;
        }
        return true;
    }
};