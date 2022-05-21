class Solution:
    def highFive(self, items: List[List[int]]) -> List[List[int]]:
        res = []
        obj = defaultdict(list)
        
        for student, scores in items:
            heappush(obj[student], scores)
            if len(obj[student]) > 5:
                heappop(obj[student])
        for student, scores in obj.items():
            avg = sum(scores) // 5
            res.append([student, avg])
            
        return sorted(res)
    
    
