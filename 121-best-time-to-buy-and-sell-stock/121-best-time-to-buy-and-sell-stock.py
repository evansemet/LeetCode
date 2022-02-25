class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minP, prof = float("INF"), 0
        for price in prices:
            if price < minP:
                minP = price
            elif price - minP > prof:
                prof = price - minP
        return prof