class Solution {
public:
    
    double help(double x, long long n) {
        if (!n) return 1.0;
        double half(help(x, n / 2));
        return n % 2 ? half * half * x : half * half;
    }
    
    double myPow(double x, int n) {
        long long N(n);
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return help(x, N);
    }
};