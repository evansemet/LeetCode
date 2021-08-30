class Solution {
public:
    int calculateTime(string keyboard, string word) {
        vector<int> indices(26, -1);
        for (size_t i(0); i < keyboard.length(); ++i) {
            indices[keyboard[i] - 'a'] = i;
        }
            int prev(0), total(0);
            for (char &c : word) {
                total += abs(prev - indices[c - 'a']);
                prev = indices[c - 'a'];
            }
        return total;
    }
};