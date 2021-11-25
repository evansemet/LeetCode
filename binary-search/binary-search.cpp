class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left(0), right(nums.size() - 1);
        while (left <= right) {
            int center((right - left) / 2 + left);
            if (nums[center] == target) return center;
            else if (nums[center] < target) left = center + 1;
            else right = center - 1;
        }
        return -1;
    }
};