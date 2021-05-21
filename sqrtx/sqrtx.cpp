class Solution {
public:
    int mySqrt(int x) {
        long long int j;
        for (long long int i(0); i <= x; ++i) {
            if (i * i <= x && (i + 1) * (i + 1) > x) {
                j = i;
                break;
            }
        }
        return j;
    }
};