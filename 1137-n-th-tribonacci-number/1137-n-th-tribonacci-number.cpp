class Solution {
public:
    
    int tribonacci(int n) {
        if (n == 0) return 0;
        else if (n < 3) return 1;
        int zero = 0, one = 1, two = 1, three;
        for (int i = 3; i <= n; ++i) {
            three = zero + one + two;
            zero = one;
            one = two;
            two = three;
        }
        return three;
    }
};