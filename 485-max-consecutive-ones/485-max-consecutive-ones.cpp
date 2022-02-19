class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int answer = 0, curr = 0;
        for (int &number: nums) {
            if (number) {
                ++curr;
                answer = max(answer, curr);
            } else {
                curr = 0;
            }
        }
        return answer;
    }
};