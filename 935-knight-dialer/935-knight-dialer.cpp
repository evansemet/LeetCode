class Solution {
public:
    int knightDialer(int n) {
        int mod = 1000000000 + 7;
        vector<long int> arr(10, 1);
        for (int i = 1; i <  n; ++i) {
            vector<long int> dp(10, 0);
            dp[0] = (arr[4] + arr[6]) % mod;
            dp[1] = (arr[6] + arr[8]) % mod;
            dp[2] = (arr[7] + arr[9]) % mod;
            dp[3] = (arr[4] + arr[8]) % mod;
            dp[4] = (arr[0] + arr[3] + arr[9]) % mod;
            dp[6] = (arr[0] + arr[1] + arr[7]) % mod;
            dp[7] = (arr[2] + arr[6]) % mod;
            dp[8] = (arr[1] + arr[3]) % mod;
            dp[9] = (arr[2] + arr[4]) % mod;
            arr = dp;
        }
        long int sum = 0;
        for (long int num : arr) sum += num;
        return sum % mod;
    }
};