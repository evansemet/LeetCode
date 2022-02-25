class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> one, two;
        for (int &num : nums1) ++one[num];
        for (int &num : nums2) ++two[num];
        vector<int> res;
        for (auto &x : one) {
            int amount = min(x.second, two[x.first]);
            for (int i = 0; i < amount; ++i) {
                res.push_back(x.first);
            }
        }
        return res;
    }
};