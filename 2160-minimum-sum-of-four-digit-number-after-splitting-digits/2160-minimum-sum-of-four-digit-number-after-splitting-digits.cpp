class Solution {
public:
    int minimumSum(int num) {
        vector<int> holder;
        while (num) {
            holder.push_back(num % 10);
            num /= 10;
        }
        sort(holder.begin(), holder.end());
        return (holder[0] + holder[1]) * 10 + holder[2] + holder[3];
    }
};