class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) {
            return true;
        }
        long int check(3);
        while (check <= n) {
            if (check == n) {
                return true;
            }
            check *= 3;
        }
        return false;
    }
};