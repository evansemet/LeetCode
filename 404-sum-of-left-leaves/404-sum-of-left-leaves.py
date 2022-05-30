# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        self.res = 0
        
        def l(root, parent):
            if not root:
                return
            elif not root.left and not root.right and parent.left == root:
                self.res += root.val
                
            parent = root
            l(root.left, parent)
            l(root.right, parent)
        
        parent = root
        l(root, parent)
        return self.res