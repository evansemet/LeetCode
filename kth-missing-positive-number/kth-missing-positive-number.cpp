class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left(0), right(arr.size() -  1), mid, close;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (arr[mid] - mid - 1 < k) {
                left = close = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return k + close;
    }
};