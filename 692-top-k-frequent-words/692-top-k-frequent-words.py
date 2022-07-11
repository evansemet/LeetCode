class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        counter = Counter(words)
        heap, ans = [], []
        
        for word, count in counter.items():
            heapq.heappush(heap, (-count, word))
            
        for i in range(k):
            ans.append(heapq.heappop(heap)[1])
            
        return ans