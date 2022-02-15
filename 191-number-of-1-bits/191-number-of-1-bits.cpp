class Solution {
public:
    int hammingWeight(uint32_t n) {
        int total = 0;
        while (n) {
            ++total;
            n &= (n - 1);
        }
        return total;
    }
};