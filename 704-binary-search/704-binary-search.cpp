class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int left = 0, right = nums.size() - 1; left <= right;) {
            int middle = (right - left) / 2 + left;
            if (nums[middle] == target) return middle;
            else if (nums[middle] < target) left = middle + 1;
            else right = middle - 1;
        }
        return -1;
    }
};