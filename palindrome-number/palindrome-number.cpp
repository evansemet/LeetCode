class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            long int y(0), z(x);
            while (z > 0) {
                y *= 10;
                y += z % 10;
                z /= 10;
            }
            if (x == y) {
                return true;
            } else {
                return false;  
            }
        }
    }
};