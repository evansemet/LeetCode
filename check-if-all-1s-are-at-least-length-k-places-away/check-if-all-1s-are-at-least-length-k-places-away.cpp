class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count(k);
        for (int i(0); i < nums.size(); ++i) {
            if (nums[i] == 1) {
                if (count < k) {
                    return false;
                } else {
                    count = 0;
                }
            } else {
                ++count;
            }
        }
        return true;
    }
};