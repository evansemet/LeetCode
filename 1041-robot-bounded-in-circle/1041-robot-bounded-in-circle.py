class Solution:
    def isRobotBounded(self, instructions: str) -> bool:
        dX, dY = 0, 1
        x, y = 0, 0
        
        for d in instructions:
            if d == "G":
                x, y = x + dX, y + dY
            elif d == "L":
                dX, dY = -dY, dX
            else:
                dX, dY = dY, -dX
                
        return (x, y) == (0, 0) or (dX, dY) != (0, 1)
                
        