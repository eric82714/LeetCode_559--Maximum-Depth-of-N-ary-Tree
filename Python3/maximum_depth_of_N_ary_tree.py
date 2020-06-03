"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if not root: return 0
        
        n = len(root.children)
        result = 0
        
        for i in range(n):
            result = max(result, self.maxDepth(root.children[i]))
  
        return result + 1
