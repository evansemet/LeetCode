class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int counter(0);
        for (int i(0); i < isConnected.size(); ++i) {
            if (isConnected[i][i] == 1) {
                ++counter;
                dfs(isConnected, i);
            }
        }
        return counter;
    }
    
    void dfs(vector<vector<int>>& isConnected, int check) {
        if (isConnected[check][check] == 0) {
            return;
        }
        for (int j(0); j < isConnected.size(); ++j) {
            if (isConnected[check][j] == 1) {
                isConnected[check][j] = 0;
                dfs(isConnected, j);
            }
        }
    }
};