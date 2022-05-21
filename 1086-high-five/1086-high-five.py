class Solution:
    def highFive(self, items: List[List[int]]) -> List[List[int]]:
        res = []
        obj = defaultdict(list)
        
        for stud, score in items:
            heappush(obj[stud], score)
            if len(obj[stud]) > 5:
                heappop(obj[stud])
        for stud, score in obj.items():
            avg = sum(score) // 5
            res.append([stud, avg])
            
        return sorted(res)