class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0; i < s.size();) {
            for (int j = i + 1; j <= s.size(); ++j) {
                if (s[j] == ' ' || j == s.size()) {
                    for (int l = i, r = j - 1; l < r;) swap(s[l++], s[r--]);
                    i = j + 1;
                }
            }
        }
        return s;
    }
};