class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int placement(0), answer(0);
        for (int i(0); i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[placement++] = nums[i];
                ++answer;
            }
        }
        return answer;
    }
};