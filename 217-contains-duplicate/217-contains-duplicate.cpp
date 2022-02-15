class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() > 1) {
            unordered_map<int, int> check;
            for (int &num: nums) {
                ++check[num];
            }
            for (auto &pair: check) {
                if (pair.second != 1) {
                    return true;
                }
            }
            return false;
        }
        return false;
    }
};