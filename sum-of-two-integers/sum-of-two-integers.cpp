class Solution {
public:
    int getSum(int a, int b) {
        int diff, carry;
        while (b) {
            diff = a ^ b;
            carry = (uint32_t)(a&b) << 1;
            a = diff;
            b = carry;
        }
        return a;
    }
};