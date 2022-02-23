class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() < 2) return false;
        unordered_map<int, int> check;
        for (int &num : nums) {
            ++check[num];
            if (check[num] > 1) return true;
        }
        return false;
    }
};