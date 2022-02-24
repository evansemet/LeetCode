class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> check;
        for (int i = 0; i < nums.size(); ++i) {
            int look = target - nums[i];
            if (check.count(look)) {
                return {check[look], i};
            }
            check[nums[i]] = i;
        }
        return {-1, -1};
    }
};
