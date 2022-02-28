class Solution {
public:
    int hammingWeight(uint32_t n) {
        for (int total = 0;; n &= (n - 1), ++total) {
            if (!n) return total;
        }
        return -1;
    }
};