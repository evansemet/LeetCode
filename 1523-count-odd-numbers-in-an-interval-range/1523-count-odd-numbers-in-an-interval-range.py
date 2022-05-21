class Solution:
    def countOdds(self, low: int, high: int) -> int:
        diff = high - low
        if low % 2 == 0 and high % 2 == 0:
            return diff // 2
        elif low % 2 and high % 2:
            return diff // 2 + 1
        else:
            return (1 + diff) // 2