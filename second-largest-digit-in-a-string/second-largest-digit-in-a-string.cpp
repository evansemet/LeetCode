class Solution {
public:
    int secondHighest(string s) {
        int second(-1), largest(-1);
        for (int i(0); i < s.length(); ++i) {
            if (isdigit(s[i])) {
                if (s[i] - '0' > largest) {
                    second = largest;
                    largest = s[i] - '0';
                } else if (s[i] - '0' > second && s[i] - '0' != largest) {
                    second = s[i] - '0';
                }
            }
        }
        return second;
    }
};