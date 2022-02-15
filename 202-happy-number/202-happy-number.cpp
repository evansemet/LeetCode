class Solution {
public:
    bool isHappy(int n) {
        int cur = n;
        unordered_map<int, int> seen;
        
        while (true) {
            if (cur == 1) {
                return true;
            }
            
            ++seen[cur];
            if (seen[cur] >= 2) {
                return false;
            }
            
            int temp = 0;
            while (cur) {
                temp += (cur % 10) * (cur % 10);
                cur /= 10;
            }
            cur = temp;
        }
    }
};