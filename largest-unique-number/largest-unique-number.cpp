class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
        int max(INT_MIN);
        unordered_map<int, int> numOfEach;
        for (int &val : A) {
            ++numOfEach[val];
        }

        for (auto iter(numOfEach.begin()); iter != numOfEach.end(); ++iter) {
            if (iter->second == 1 && iter->first > max) max = iter->first;
        }
        return max != INT_MIN ? max : -1;
        
    }
};