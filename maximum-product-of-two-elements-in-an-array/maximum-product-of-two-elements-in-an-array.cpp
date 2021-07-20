class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first(INT_MIN), second(INT_MIN);
        for (int i(0); i < nums.size(); ++i) {
            if (nums[i] > second) {
                second = nums[i];
            }
            if (second > first) {
                swap(second, first);
            }
        }
        return (first - 1) * (second - 1);
    }
};