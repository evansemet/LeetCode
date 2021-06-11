class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> st_string;
        for (char &val : s) {
            ++st_string[val];
        }
        for (char &val : t) {
            --st_string[val];
        }
        for (auto a : st_string) {
            if (a.second < 0) return a.first;
        }
        return -1;
    }
};
