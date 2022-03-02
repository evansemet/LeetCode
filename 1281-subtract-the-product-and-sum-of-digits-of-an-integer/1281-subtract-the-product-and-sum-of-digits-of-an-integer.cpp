class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1, sum = 0;
        while (n) {
            int dig = n % 10;
            prod *= dig;
            sum += dig;
            n /= 10;
        }
        return prod - sum;
    }
};