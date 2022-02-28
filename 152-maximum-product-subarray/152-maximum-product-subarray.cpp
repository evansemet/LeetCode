class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = nums[0], currMin = currMax, res = currMax;
        for (int i = 1; i < nums.size(); ++i) {
            int curr = nums[i];
            int tempMax = max(curr, max(currMax * curr, currMin * curr));
            currMin = min(curr, min(currMax * curr, currMin * curr));
            currMax = tempMax;
            res = max(currMax, res);
        }
        return res;
    }
};