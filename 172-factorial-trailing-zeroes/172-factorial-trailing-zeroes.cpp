class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        long curr = 5;
        while (n >= curr) {
            count += n / curr;
            curr *= 5;
        }
        return count;
    }
};