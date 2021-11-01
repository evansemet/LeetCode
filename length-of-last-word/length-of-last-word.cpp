class Solution {
public:
    int lengthOfLastWord(string s) {
        int answer(0);
        bool x(false);
        for (int i(s.length() - 1); i >= 0; --i) {
            if (!x && s[i] != ' ') {
                x = true;
                ++answer;
            } else if (x && s[i] != ' ') {
                ++answer;
            } else if (x && s[i] == ' ') {
                return answer;
            }
        }
        return answer;
    }
};