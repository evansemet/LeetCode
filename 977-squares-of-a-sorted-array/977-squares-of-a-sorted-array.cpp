class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer(nums.size());
        
        int left = 0;
        int right = nums.size() - 1;
        
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (abs(nums[left]) < abs(nums[right])) {
                answer[i] = nums[right] * nums[right];
                --right;
            } else {
                answer[i] = nums[left] * nums[left];
                ++left;
            }
        }
        
        return answer;
    }
};