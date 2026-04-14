def reverseList(head):
    def reverse(node, prev=None):
        if not node:
            return prev
        next_node = node[1]
        node[1] = prev
        return reverse(next_node, node)

    return reverse(head)

# Manually create the linked list [1, 2, 3] using lists [val, next]
head = [1, [2, [3, None]]]

# Reverse the linked list
reversed_head = reverseList(head)

# Helper function to print the linked list
def print_list(node):
    while node:
        print(node[0], end=" -> " if node[1] else "\n")
        node = node[1]

# Print the reversed linked list
print_list(reversed_head)
