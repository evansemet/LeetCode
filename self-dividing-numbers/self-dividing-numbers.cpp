class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        for (int i(left); i <= right; ++i) {
            int num(i), digit;
            bool x(true);
            while (num > 0 && x) {
                digit = num % 10;
                if (digit == 0 || i % digit != 0) {
                    x = false;
                }
                num /= 10;
            }
            if (x) answer.push_back(i);
        }
        return answer;
    }
};