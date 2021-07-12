class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> check;
        for (int val : nums) {
            ++check[val];
        }
        for (auto itter : check) {
            if (itter.second == 1) {
                return itter.first;
            }
        }
        return -1;
    }
};
