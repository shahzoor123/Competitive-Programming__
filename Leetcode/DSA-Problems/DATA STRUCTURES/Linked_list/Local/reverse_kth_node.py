# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        current = head
        prev_tail = None

        # Set new_head to None, will update once the first group is reversed
        new_head = None

        while current:
            # Find the k-th node from the current position
            kth_node = self.find_kth_node(current, k)
            if not kth_node:
                break  # Less than k nodes remaining

            next_group_head = kth_node.next

            # Reverse the nodes in the current k-group
            new_group_head = self.reverse_nodes(current, kth_node.next)

            # Update new_head for the first group
            if not new_head:
                new_head = new_group_head

            # Connect the previous group's tail to the new head
            if prev_tail:
                prev_tail.next = new_group_head

            # Update prev_tail to the current group's head (before reversal)
            prev_tail = current

            # Move current to the next group's head
            current = next_group_head

        # Return the new head after all possible k-groups have been reversed
        return new_head or head
        
        
    def find_kth_node(self, node: ListNode, k: int) -> ListNode:
        while node and k > 1:
            node = node.next
            k -= 1
        return node

    def reverse_nodes(self, start: ListNode, end: ListNode) -> ListNode:
        prev, current = end, start
        while current != end:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node
        return prev



        