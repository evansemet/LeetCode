class Solution:
    def grayCode(self, n: int) -> List[int]:
        res = []
        seqLen = 1 << n
        for i in range(seqLen):
            res.append(i ^ i >> 1)
        return res