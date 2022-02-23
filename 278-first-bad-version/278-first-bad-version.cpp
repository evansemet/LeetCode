// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n, m;
        while (l <= r) {
            m = l + (r - l) / 2;
            bool bad = isBadVersion(m);
            if (bad && m == 1) return 1;
            bool badBehind = isBadVersion(m - 1);
            if (bad && badBehind) r = m - 1;
            else if (bad && !badBehind) return m;
            else l = m + 1;
        }
        return -1;
    }
};