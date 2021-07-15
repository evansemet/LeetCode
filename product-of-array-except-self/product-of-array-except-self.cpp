class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer = {1};
        for (int i(1); i < nums.size(); ++i) {
            answer.push_back(nums[i - 1] * answer[i - 1]);
        }
        int R(1);
        for (int i(nums.size() - 1); i >= 0; --i) {
            answer[i] *= R;
            R *= nums[i];
        }
        return answer;
    }
};