class Solution {
public:
    bool isArmstrong(int n) {
        int digits = 0, copy1 = n, copy2 = n, sum = 0;
        while (copy1) {
            copy1 /= 10;
            ++digits;
        }
        while (copy2) {
            sum += pow(copy2 % 10, digits);
            if (sum > n) return false;
            copy2 /= 10;
        }
        return sum == n;
    }
};