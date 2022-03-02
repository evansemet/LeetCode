class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int curr = 0, res = 0;
        for (int i = 0; i < values.size(); ++i) {
            res = max(res, values[i] - i + curr);
            curr = max(curr, values[i] + i);
        }
        return res;
    }
};
