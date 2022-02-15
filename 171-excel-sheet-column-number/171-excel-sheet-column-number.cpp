class Solution {
public:
    int titleToNumber(string columnTitle) {
        int number = 0;
        for (char &letter: columnTitle) {
            number *= 26;
            number += letter - 'A' + 1;
        }
        return number;
    }
};