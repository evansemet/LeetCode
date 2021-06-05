class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum(0);
        sort(nums.begin(), nums.end());
        for (size_t i(0); i < nums.size() - 1; i += 2) {
            sum += nums[i];
        }
        return sum;
    }
};