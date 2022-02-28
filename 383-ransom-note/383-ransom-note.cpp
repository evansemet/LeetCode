class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) return false;
        unordered_map<char, int> m;
        for (char let : magazine) ++m[let];
        for (char let : ransomNote) {
            --m[let];
            if (m[let] < 0) return false;
        }
        return true;
    }
};