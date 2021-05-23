class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer(nums2.size());
        for (int i(0); i < nums1.size(); ++i) {
            bool x(true);
            for (int j(0); x && j < nums1.size(); ++j) {
                if (nums2[j] == nums1[i]) {
                    answer[i] = j;
                    x = false;
                }
            }
        }
        return answer;
    }
};