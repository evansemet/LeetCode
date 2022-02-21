class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets = {{}};
        for (int number : nums) {
            int lim = subsets.size();
            for (int i = 0; i < lim; ++i) {
                vector<int> curr = subsets[i];
                curr.push_back(number);
                subsets.push_back(curr);
            }
        }
        return subsets;
    }
};