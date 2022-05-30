# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        num = ""
        while head:
            num += str(head.val)
            head = head.next
        power = 0
        res = 0
        for i in range(len(num) - 1, -1, -1):
            if num[i] == "1":
                res += 2 ** power
            power += 1
        return res