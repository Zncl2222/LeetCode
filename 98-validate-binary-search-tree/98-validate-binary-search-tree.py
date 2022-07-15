# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def traverse(self, root, high, low):
        
        if root == None:
            return True
        
        if root.val >= high or root.val <= low:
            return False
        
        return self.traverse(root.right, high, root.val) and self.traverse(root.left, root.val, low)
        
    
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        
        
        high = 2**31 + 1
        low = -2**31 - 1
        
        return self.traverse(root.left, root.val, low) and self.traverse(root.right, high, root.val)