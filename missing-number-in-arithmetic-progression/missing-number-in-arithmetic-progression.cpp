class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int first(arr[1] - arr[0]), second(arr[2] - arr[1]);
        if (first == second) {
            for (int i(3); i < arr.size(); ++i) {
                int check(arr[i] - arr[i - 1]);
                if (check != first) {
                    return arr[i] - first;
                }
            }
        } else if (abs(first) > abs(second)) {
            return arr[1] - second;
        }
        return arr[1] + first;
    }
};