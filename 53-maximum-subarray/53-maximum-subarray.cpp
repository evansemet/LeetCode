class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0], maxSub = curr;
        for (int i = 1; i < nums.size(); ++i) {
            curr = max(nums[i], curr + nums[i]);
            maxSub = max(curr, maxSub);
        }
        return maxSub;
    }
};