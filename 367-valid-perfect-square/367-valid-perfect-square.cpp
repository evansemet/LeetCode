class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 2) return true;
        int lastDig = num % 10;
        if (lastDig == 2 || lastDig == 3 || lastDig == 7 || lastDig == 8) return false;

        long x = num / 2;
        while (x * x > num) {
            x = (x + num / x) / 2;
        }
        return x * x == num;
    }
};