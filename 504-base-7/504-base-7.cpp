class Solution {
public:
    string convertToBase7(int num) {
        if (!num) return "0";
        string answer;
        bool negative = num < 0 ? true: false;
        if (negative) num = -num;
        while (num) {
            answer += char(num % 7 + '0');
            num /= 7;
        }
        reverse(answer.begin(), answer.end());
        return negative ? '-' + answer : answer;
    }
};
