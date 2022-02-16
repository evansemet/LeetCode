class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> check;
        for (int &num: nums1) {
            ++check[num];
        }
        
        vector<int> answer;
        map<int, int> check2;
        for (int &num: nums2) {
            if (check[num] && !check2[num]) {
                answer.push_back(num);
                ++check2[num];
            }
        }
        
        return answer;
    }
};