class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int points(0), count(0), left(0), right(k - 1);
        for (int i(0); i < k && i < calories.size(); ++i) {
            count += calories[i];
        }
        if (count < lower) {
            --points;
        } else if (count > upper) {
            ++points;
        }
        ++right;
        while (right < calories.size()) {
            count += calories[right++];
            count -= calories[left++];
            if (count < lower) {
                --points;
            } else if (count > upper) {
                ++points;
            }
        }
        return points;
    }
};