class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice, maxProf = float("inf"), 0
        for price in prices:
            if price < minPrice: 
                minPrice = price
            elif price - minPrice > maxProf: 
                maxProf = price - minPrice
        return maxProf