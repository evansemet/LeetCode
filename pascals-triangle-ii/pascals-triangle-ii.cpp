class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> answer = {1};
        for (int i(1); i <= rowIndex; ++i) {
            answer.push_back((int)((answer.back() * (long long)(rowIndex - i + 1)) / i));
        }
        return answer;
    }
};