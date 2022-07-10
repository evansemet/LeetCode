class Solution {
public:
    
    
    unordered_map<int, int> m;
    int wlen;
    
    
    Solution(int n, vector<int>& blacklist) {
        wlen = n - blacklist.size();
        unordered_set<int> w;
        for (int i = wlen; i < n; ++i) w.insert(i);
        for (int x : blacklist) w.erase(x);
        auto wi = w.begin();
        for (int x : blacklist) {
            if (x < wlen) m[x] = *wi++;
        }
    }
    
    int pick() {
        int k = rand() % wlen;
        return m.count(k) ? m[k] : k;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(n, blacklist);
 * int param_1 = obj->pick();
 */