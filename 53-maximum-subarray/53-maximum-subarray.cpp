class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSub = nums[0], maxSub = currSub;
        for (int i = 1; i < nums.size(); ++i) {
            currSub = max(nums[i], currSub + nums[i]);
            maxSub = max(maxSub, currSub);
        }
        return maxSub;
    }
};