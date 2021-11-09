class Solution {
public:
    bool isValid(string s) {
        stack<int> check;
		for (int i(0); i < s.length(); ++i) {
            if (check.size() &&
               (check.top() == '(' && s[i] == ')' ||
                check.top() == '{' && s[i] == '}' ||
                check.top() == '[' && s[i] == ']')) {
                check.pop();
            } else {
                check.push(s[i]);
            }
        }
        return check.empty();
    }
};

