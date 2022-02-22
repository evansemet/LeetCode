class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> kLarg;
        for (int i = 0; i < k; ++i) {
            kLarg.push_back(nums[i]);
        }
        sort(kLarg.begin(), kLarg.end());
        for (int i = k; i < nums.size(); ++i) {
            if (nums[i] > kLarg[0]) {
                kLarg[0] = nums[i];
                sort(kLarg.begin(), kLarg.end());
            }
        }
        return kLarg[0];
    }
};