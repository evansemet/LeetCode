class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int one = m - 1, two = n - 1;
        for (int i = nums1.size() - 1; i >= 0; --i) {
            if (two < 0) {
                break;
            }
            if (one >= 0 && nums1[one] > nums2[two]) {
                nums1[i] = nums1[one];
                --one;
            } else {
                nums1[i] = nums2[two];
                --two;
            }
        }
    }
};