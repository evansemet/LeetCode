class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()) {
            for (int i(0); ; ++i) {
                for (auto &c : strs) {
                    if (i >= c.size() || c[i] != strs[0][i]) {
                        return strs[0].substr(0, i);
                    }
                }
            }
        }
        return "";
    }
};