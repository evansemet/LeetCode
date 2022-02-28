class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) return false;
        unordered_map<char, int> m, r;
        for (char let : magazine) ++m[let];
        for (char let : ransomNote) {
            ++r[let];
            if (r[let] > m[let]) return false;
        }
        return true;
    }
};