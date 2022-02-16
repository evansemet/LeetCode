class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for (int i = 1; i * i < num; ++i) {
            if (num % i == 0) {
                sum += i;
                if (i != 1) {
                    sum += (num / i);
                }
            }
            if (sum > num) {
                return false;
            }
        }
        return sum == num;
    }
};