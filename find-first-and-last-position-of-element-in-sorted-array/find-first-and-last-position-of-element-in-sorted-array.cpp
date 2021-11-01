class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int begin(0), end(nums.size() - 1), check(-1);
        bool found(false);
        while (begin <= end && !found) {
            int mid = (end - begin) / 2 + begin;
            if (nums[mid] == target) {
                check = mid;
                found = true;
            } else if (nums[mid] < target) {
                begin = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        if (check == -1) {
            return {-1, -1};
        } else {
            int left(check), right(check);
            bool L(true), R(true);
            for (int i(check); i >= 0 && L; --i) {
                if (nums[i] != target) {
                    L = false;
                } else {
                    left = i;
                }
            }
            for (int j(check); j < nums.size() && R; ++j) {
                if (nums[j] != target) {
                    R = false;
                } else {
                    right = j;
                }
            }
            return {left, right};
        }
    }
};