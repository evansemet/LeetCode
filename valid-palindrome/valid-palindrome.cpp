class Solution {
public:
    bool isPalindrome(string s) {
        int l(0), r(s.length() - 1);
        while (r > l) {
            while (!isalnum(s[r]) && r > l) {
                --r;
            }
            while (!isalnum(s[l]) && r > l) {
                ++l;
            }
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            ++l;
            --r;
        }
        return true;
    }
};