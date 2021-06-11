class Solution {
public:
    string thousandSeparator(int n) {
        string num(to_string(n));
        if (num.length() > 3) {
            for (int i(num.length() - 3); i >= 1; i -=3) {
                num = num.substr(0, i) + "." + num.substr(i, num.length());
            }
        }
        return num;
    }
};