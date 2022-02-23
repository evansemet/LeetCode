class Solution {
public:
    bool judgeCircle(string moves) {
        int lr = 0, ud = 0;
        for (char &letter : moves) {
            if (letter == 'L') --lr;
            else if (letter == 'R') ++lr;
            else if (letter == 'U') ++ud;
            else --ud;
        }
        return lr == ud && ud == 0;
    }
};