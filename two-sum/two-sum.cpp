class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lookup;
        for (int i(0); i < nums.size(); ++i) {
            if (lookup.find(target - nums[i]) == lookup.end()) {
                lookup.insert({nums[i], i});
            } else {
                return {i, lookup[target - nums[i]]};
            }
        }
        return {-1};
    }
};
