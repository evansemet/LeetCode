class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer;
        while (columnNumber) {
            string add;
            add += 'A' + ((columnNumber - 1) % 26);
            add += answer;
            answer = add;
            columnNumber = (columnNumber - 1) / 26;
        }
        return answer;
    }
};