class Solution:
    def interpret(self, command: str) -> str:
        res = ""
        if len(command) == 0:
            return res
        pointer = 0
        while pointer < len(command):
            if command[pointer] == "G":
                res += "G"
                pointer += 1
            elif command[pointer + 1] == ")":
                res += "o"
                pointer += 2
            else:
                res += "al"
                pointer += 4
        return res