class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum(0);
        unordered_map<int, int> check;
        for (int i(0); i < nums.size(); ++i) {
            ++check[nums[i]];
            if (check[nums[i]] == 1) {
                sum += nums[i];
            }
            if (check[nums[i]] == 2) {
                sum -= nums[i];
            }
        }
        return sum;
    }
};