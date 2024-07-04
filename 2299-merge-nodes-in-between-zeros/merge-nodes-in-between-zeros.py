# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # arr=[]
        # c = 0
        # head = head.next
        # while(head != None):
        #     if ( head.val == 0):
        #         arr.append(c)
        #         c = 0
        #         head = head.next
        #     else:
        #         c = c + head.val
        #         head = head.next
        dumy = tail = ListNode()
        s = 0
        cur = head.next
        while cur:
            if cur.val != 0:
                s += cur.val
            else:
                tail.next = ListNode(s)
                tail = tail.next
                s = 0
            cur = cur.next
        return dumy.next
        