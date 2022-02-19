class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (!s.length()) return true;
        if (!t.length()) return false;
        for (int i = 0; i <= t.length() - s.length(); ++i) {
            if (s[0] == t[i]) {
                return isSubsequence(s.substr(1), t.substr(i + 1));
            }
        }
        return false;
    }
};