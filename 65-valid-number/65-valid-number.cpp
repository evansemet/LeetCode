class Solution {
public:
    bool isNumber(string s) {
        bool dig = false, exp = false, dot = false;
        for (int i = 0; i < s.size(); ++i) {
            char curr = s[i];
            if (isdigit(curr)) dig = true;
            else if (curr == '-' || curr == '+') {
                if (i != 0 && s[i - 1] != 'e' && s[i - 1] != 'E') return false;
            } else if (curr == 'e' || curr == 'E') {
                if (exp || !dig) return false;
                exp = true;
                dig = false;
            } else if (curr == '.') {
                if (dot || exp) return false;
                dot = true;
            } else return false;
        }
        return dig;
    }
};