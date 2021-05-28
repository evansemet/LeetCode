class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() < 2) return true;
        int left(0), right(s.length() - 1);
        while (left < right) {
            while (!isalnum(s[left])) {
                ++left;
                if (left == s.length()) return true;
            }
            while (!isalnum(s[right])) {
                --right;
                if (right == 0) return true;
            }

            if (tolower(s[left]) != tolower(s[right])) return false;
            
            ++left;
            --right;
        }
        return true;
    }
};