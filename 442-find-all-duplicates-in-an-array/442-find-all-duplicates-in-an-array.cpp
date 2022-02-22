class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> answer;
        unordered_map<int, int> dups;
        for (int &num : nums) {
            ++dups[num];
            if (dups[num] > 1) {
                answer.push_back(num);
            }
        }
        return answer;
    }
};