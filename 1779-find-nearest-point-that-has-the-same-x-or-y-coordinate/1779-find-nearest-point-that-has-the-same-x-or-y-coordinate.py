class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        def dist(x, y, point):
            return ((x - point[0]) ** 2 + (y - point[1]) ** 2) ** 0.5
        
        def same(x, y, point):
            return x == point[0] or y == point[1]
        
        sm = float('inf')
        res = -1
        
        for pos, point in enumerate(points):
            if dist(x, y, point) < sm and same(x, y, point):
                res = pos
                sm = dist(x, y, point)
                
        return res