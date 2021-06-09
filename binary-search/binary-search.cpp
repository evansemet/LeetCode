class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left(0), right(nums.size() - 1);
        while (left <= right) {
            int center = left + (right - left) / 2;
            if (nums[center] < target) {
                left = center + 1;
            } else if (nums[center] > target) {
                right = center - 1;
            } else {
                return center;
            }
        }
        return -1;
    }
};