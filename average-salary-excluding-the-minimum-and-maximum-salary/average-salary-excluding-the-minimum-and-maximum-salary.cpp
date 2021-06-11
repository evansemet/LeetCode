class Solution {
public:
    double average(vector<int>& salary) {
        int m(salary[0]), M(salary[0]);
        double sum(0);
        for (int i(0); i < salary.size(); ++i) {
            sum += salary[i];
            m = min(m, salary[i]);
            M = max(M, salary[i]);
        }
        return (sum - m - M) / (salary.size() - 2);
    }
};