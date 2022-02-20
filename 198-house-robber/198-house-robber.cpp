class Solution {
public:
    int rob(vector<int>& nums) {
        if (!nums.size()) return 0;
        if (nums.size() == 1) return nums[0];
        int second = nums[0], first = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); ++i) {
            int curr = max(first, second + nums[i]);
            second = first;
            first = curr;
        }
        return first;
    }
};