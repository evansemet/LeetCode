class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int &number: nums) {
            number *= number;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};