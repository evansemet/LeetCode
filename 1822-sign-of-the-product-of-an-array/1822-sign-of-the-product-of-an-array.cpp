class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negs = 0;
        for (int &number : nums) {
            if (number == 0) return 0;
            if (number < 0) ++negs;
        }
        return negs % 2 ? -1 : 1;
    }
};