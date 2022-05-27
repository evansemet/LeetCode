# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def helper(arr):
            if not arr:
                return
            node = TreeNode(arr[len(arr) // 2])
            node.left = helper(arr[: len(arr) // 2])
            node.right = helper(arr[len(arr) // 2 + 1 :])
            return node
        return helper(nums)
        