# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        curr = l1
        curr2 = l2
        hashMap1,hashMap2 = {},{}
        num1,num2 = "",""
        i,j=0,0
        listNode = ListNode()
        head = listNode
        curr3 = head
        while curr:
            hashMap1[i] = curr.val
            curr = curr.next
            i += 1
        while curr2:
            hashMap2[j] = curr2.val
            curr2 = curr2.next
            j += 1
 
        for val in reversed(hashMap1.values()):
            num1 = num1 + f"{val}"
        for val in reversed(hashMap2.values()):
            num2 = num2 + f"{val}"

        finalNum = int(num1) + int(num2)
        strFinalNum = str(finalNum)
        reversedFinalNum = strFinalNum[::-1]

        for index, num in enumerate(reversedFinalNum):
            curr3.val = int(num)
            if index < len(reversedFinalNum) -1:
                newNode = ListNode()
                curr3.next = newNode
                curr3 = curr3.next
        return head
