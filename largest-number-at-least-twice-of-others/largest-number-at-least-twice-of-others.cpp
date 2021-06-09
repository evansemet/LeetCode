class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() < 2) return 0;
        int second(-1), largest(-1), index(0);
        for (int i(0); i < nums.size(); ++i) {
            if (nums[i] > largest) {
                second = largest;
                largest = nums[i];
                index = i;
            } else if (nums[i] > second) {
                second = nums[i];
            }
        }
        return second * 2 <= largest ? index : -1;
    }
};