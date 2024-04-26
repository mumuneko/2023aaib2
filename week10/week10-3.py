# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
#week10-3
#104.Maximum Depth of Binary Tree
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root==None:return 0 #簡單的結束條件
        left = self.maxDepth(root.left)
        right = self.maxDepth(root.right)
        return max(left,right)+1