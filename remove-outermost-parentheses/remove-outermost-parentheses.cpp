class Solution {
public:
    string removeOuterParentheses(string s) {
        string answer;
        int open(0), close(0);
        for (int i(0); i < s.length(); ++i) {
            if (s[i] == '(') {
                ++open;
            } else {
                ++close;
            }
            if (open == close) {
                answer += s.substr(i - 2 * open + 2, 2 * open - 2);
                open = close = 0;
            }
            
        }
        return answer;
    }
};