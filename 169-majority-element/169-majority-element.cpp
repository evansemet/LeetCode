class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> check;
        for (int &number: nums) {
            ++check[number];
            if (check[number] > nums.size() / 2) {
                return number;
            }
        }
        return -1;
    }
};