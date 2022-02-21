class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if (tomatoSlices > 4 * cheeseSlices || tomatoSlices < 2 * cheeseSlices || tomatoSlices % 2) return {};
        return {tomatoSlices / 2 - cheeseSlices, cheeseSlices * 2 - tomatoSlices / 2};
        
    }
};