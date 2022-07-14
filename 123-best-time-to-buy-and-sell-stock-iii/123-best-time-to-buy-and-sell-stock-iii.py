class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        t1c, t2c, t1p, t2p = float("inf"), float("inf"), 0, 0
        for price in prices:
            t1c = min(t1c, price)
            t1p = max(t1p, price - t1c)
            t2c = min(t2c, price - t1p)
            t2p = max(t2p, price - t2c)
        return t2p