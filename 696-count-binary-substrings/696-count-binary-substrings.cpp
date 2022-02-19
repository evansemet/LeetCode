class Solution {
public:
    int countBinarySubstrings(string s) {
        int answer = 0, prev = 0, curr = 1;
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == s[i + 1]) {
                ++curr;
            } else {
                prev = curr;
                curr = 1;
            }
            if (curr <= prev) {
                ++answer;
            }
        }
        return answer;
    }
};