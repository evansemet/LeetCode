class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for (int i(0); i < numRows; ++i) {
            vector<int> row = {1};
            for (int j(1); j <= i; ++j) {
                row.push_back((int)(row.back()) * ((long long)(i - j + 1)) / j);
            }
            answer.push_back(row);
        }
        return answer;
    }
};