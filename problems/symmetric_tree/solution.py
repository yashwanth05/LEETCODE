# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def ism(self,right ,left):
        if not left and not right:
            return True
        if not left or not right:
            return False
        return left.val==right.val and self.ism(left.left,right.right) and self.ism(left.right,right.left)
    def isSymmetric(self, root):
        if not root:
            return False
        return self.ism(root.left,root.right)
        
        