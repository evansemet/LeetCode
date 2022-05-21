# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if not root:
            return
        
        res = []
        
        def helper(node):
            if not node.left and not node.right:
                res.append(node.val)
                return
            res.append(node.val)
            if node.left:
                helper(node.left)
            if node.right:
                helper(node.right)
                
        helper(root)
        return res