class Solution:
    def robotSim(self, commands: List[int], obstacles: List[List[int]]) -> int:
        obstacles = {(x, y) for x, y in obstacles}
        dist = 0
        x, y = 0, 0
        dx, dy = 0, 1
        
        for command in commands:
            if command == -2:
                dx, dy = -dy, dx
            elif command == -1:
                dx, dy = dy, -dx
            else:
                for _ in range(command):
                    if (x + dx, y + dy) in obstacles:
                        break
                    x, y = x + dx, y + dy
                dist = max(dist, x * x + y * y)
                
        return dist