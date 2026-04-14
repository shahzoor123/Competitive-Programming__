# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:
        answer = temp = ListNode(0)
        temp.next = head

        while temp.next is not None:
            if temp.next.val == val:
                temp.next = temp.next.next
            else:
                temp = temp.next
        return answer.next

# Helper function to create a linked list from a list of values
def create_linked_list(values):
    if not values:
        return None
    head = ListNode(values[0])
    current = head
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next
    return head

# Helper function to print the linked list
def print_linked_list(head):
    current = head
    while current:
        print(current.val, end=" -> " if current.next else "\n")
        current = current.next

# Example usage
values = [1, 2, 6, 3, 4, 5, 6]
val_to_remove = 6
head = create_linked_list(values)

print("Original list:")
print_linked_list(head)

solution = Solution()
new_head = solution.removeElements(head, val_to_remove)

print("List after removing elements:")
print_linked_list(new_head)
