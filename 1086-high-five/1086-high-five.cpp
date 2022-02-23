class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        int K = 5;
        map<int, priority_queue<int>> scores;
        for (vector<int> &result : items) {
            int id = result[0];
            int score = result[1];
            scores[id].push(score);
        }
        vector<vector<int>> answer;
        for (auto &[id, score] : scores) {
            int sum = 0;
            for (int i = 0; i < 5; ++i) {
                sum += score.top();
                score.pop();
            }
            answer.push_back({id, sum / 5});
        }
        return answer;
    }
};