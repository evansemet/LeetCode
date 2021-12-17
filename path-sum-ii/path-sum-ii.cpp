/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, int targetSum, vector<int> pass, vector<vector<int>> &answer) {
        if (!root) return;
        pass.push_back(root->val);
        if (targetSum == root->val && !root->left && !root->right) answer.push_back(pass);
        else {
            helper(root->left, targetSum - root->val, pass, answer);
            helper(root->right, targetSum - root->val, pass, answer);
        }
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> answer;
        vector<int> pass;
        helper(root, targetSum, pass, answer);
        return answer;
        
        
    }
};