# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def Traverse(self, root, targetSum, curr_sum):
        
        if(root==None):
            return False
        
        curr_sum+=root.val
        
        if(curr_sum==targetSum and (root.right==None and root.left==None)):
            return True
        
        return self.Traverse(root.right, targetSum, curr_sum) or self.Traverse(root.left, targetSum, curr_sum)
    
    
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        
        if(root==None):
            return False
        
        return self.Traverse(root, targetSum, 0)
        