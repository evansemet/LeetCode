class Solution {
public:
    int countLetters(string s) {
        int total = 1, curr = 1;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] == s[i - 1]) ++curr;
            else curr = 1;
            total += curr;
        }
        return total;
    }
};