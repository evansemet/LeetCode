class Solution:
    def average(self, salary: List[int]) -> float:
        low, high, tot = float('inf'), float('-inf'), 0
        for sal in salary:
            low, high, tot = min(low, sal), max(high, sal), tot + sal
        return (tot - low - high) / (len(salary) - 2)
        