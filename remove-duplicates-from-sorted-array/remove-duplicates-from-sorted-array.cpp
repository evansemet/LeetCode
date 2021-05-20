class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (size_t i(1); i < nums.size(); ++i) {
            if (nums[i - 1] == nums[i]) {
                nums.erase(nums.begin() + i - 1);
                --i;
            }
        }
        return nums.size();
    }
};