"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if head is None:
            return None
            
        nodes = {}
        curr = head

        while curr:
            newNode = Node(curr.val)
            nodes[curr] = newNode
            curr = curr.next
        
        curr = head
        while curr:
            copiedNode = nodes[curr]
            if curr.next:
                copiedNode.next = nodes[curr.next]
            else:
                copiedNode.next = None

            if curr.random:
                copiedNode.random = nodes[curr.random]
            else:
                copiedNode.random = None

            curr = curr.next

        return nodes[head]
        
