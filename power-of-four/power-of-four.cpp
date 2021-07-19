class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) {
            return true;
        }
        long int check(4);
        while (check <= n) {
            if (check == n) {
                return true;
            }
            check *= 4;
        }
        return false;
    }
};