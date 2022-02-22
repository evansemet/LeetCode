class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int> views;
        int tallest = 0;
        for (int i = heights.size() - 1; i >= 0; --i) {
            if (heights[i] > tallest) {
                tallest = heights[i];
                views.push_back(i);
            }
        }
        reverse(views.begin(), views.end());
        return views;
    }
};