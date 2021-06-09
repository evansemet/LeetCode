class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> check(sentence.begin(), sentence.end());
        return check.size() == 26;
    }
};
