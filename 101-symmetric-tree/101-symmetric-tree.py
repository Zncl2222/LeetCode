# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def traverse(self, left, right):
        
        if(left==None and right==None):
            return True
        
        elif(left==None or right==None):
            return False
        
        elif(left.val!=right.val):
            return False

        
        return self.traverse(left.left,right.right) and self.traverse(left.right,right.left) 
        
    
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        
        return self.traverse(root.left,root.right)