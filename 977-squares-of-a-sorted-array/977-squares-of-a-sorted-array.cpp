class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int i = nums.size() - 1, l = 0, r = nums.size() - 1;
        while (i >= 0) {
            if (abs(nums[r]) > abs(nums[l])) {
                res[i--] = pow(nums[r--], 2);
            } else {
                res[i--] = pow(nums[l++], 2);
            }
        }
        return res;
    }
};