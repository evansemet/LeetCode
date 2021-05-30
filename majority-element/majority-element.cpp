class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count(0), potMax;
        for (int i(0); i < nums.size(); ++i) {
            if (count <= 0) {
                potMax = nums[i];
            }
            count += nums[i] == potMax ? 1 : -1;
        }
        return potMax;
    }
};