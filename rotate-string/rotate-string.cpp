class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s == goal) {
            return true;
        }
        for (int i(0); i < s.length(); ++i) {
            string check = s.substr(i + 1) + s.substr(0, i + 1);
            if (check == goal) {
                return true;
            }
        }
        return false;
    }
};