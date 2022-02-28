class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int p1 = INT_MIN, p2 = p1, p3 = p1, n1 = INT_MAX, n2 = n1, n3 = n1;
        for (int num : nums) {
            if (num < n1) {
                n3 = n2;
                n2 = n1;
                n1 = num;
            } else if (num < n2) {
                n3 = n2;
                n2 = num;
            } else if (num < n3) n3 = num;
            
            if (num > p1) {
                    p3 = p2;
                    p2 = p1;
                    p1 = num;
            } else if (num > p2) {
                p3 = p2;
                p2 = num;
            } else if (num > p3) p3 = num;
        }
        int s = n1 * n2 * n3, b = n1 * n2 * p1, l = p1 * p2 * p3;
        return max(s, max(b, l));
    }
};