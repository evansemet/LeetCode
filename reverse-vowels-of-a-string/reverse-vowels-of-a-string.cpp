class Solution {
public:
    
    bool isVowel(char c) {
        return tolower(c) == 'a' || tolower(c) == 'e' || 
            tolower(c) == 'i' || tolower(c) == 'o' || 
            tolower(c) == 'u';
    }
    
    string reverseVowels(string s) {
        int left(0), right(s.length() - 1);
        while (left < right) {
            if (isVowel(s[left]) && isVowel(s[right])) {
                swap(s[left], s[right]);
                ++left;
                --right;
            } else {
                if (!isVowel(s[left])) {
                    ++left;
                }
                if (!isVowel(s[right])) {
                    --right;
                }
            }
        }
        return s;
    }
};