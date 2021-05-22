class Solution {
public:
    string interpret(string command) {
        string answer;
        size_t i(0);
        while (i < command.length()) {
            if (command[i] == 'G') {
                answer += "G";
                ++i;
            } else if (command[i] = '(' && command[i + 1] == ')') {
                answer += "o";
                i += 2;
            } else {
                answer += "al";
                i += 4;
            }
        }
        return answer;
    }
};