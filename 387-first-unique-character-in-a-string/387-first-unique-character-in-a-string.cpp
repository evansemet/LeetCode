class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, size_t> check;
        for (char &letter : s) ++check[letter];
        
        for (int i = 0; i < s.size(); ++i) {
            if (check[s[i]] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};