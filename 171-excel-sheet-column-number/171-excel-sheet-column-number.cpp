class Solution {
public:
    int titleToNumber(string columnTitle) {
        int answer = 0;
        for (char &letter: columnTitle) {
            answer *= 26;
            answer += letter - 'A' + 1;
        }
        return answer;
    }
};