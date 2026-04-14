# LINKED LIST IMPLEMENTATION
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    # traverse list 
    def traverse_list(self):
        current_node = self.head
        while current_node:
            print(current_node.data, end=" -> ")
            current_node = current_node.next
        print("None")

    #searching a node
    def search_node(self, key):
        current_node = self.head
        while current_node:
            if current_node.data == key:
                return True
            current_node = current_node.next
        return False
    

    def insert_node(self, data, position):
        new_node = Node(data)
        # Base case: If the linked list is empty or position is 0
        if position == 0:
            new_node.next = self.head
            self.head = new_node
            return
        
        #traverse to the desired position 
        current_node = self.head
        current_position = 0
        # Traverse to the position just before the desired position
        while current_node and current_position < position - 1:
            current_node = current_node.next
            current_position += 1

        # If the current node is None, the position is out of bounds
        if current_node is None:
            print("Position out of bounds")
            return
        
        # Insert the new node at the desired position
        new_node.next = current_node.next
        current_node.next = new_node

    def delete_node(self, key):
        current_node = self.head

        # Base case: If head node itself holds the key to be deleted
        if current_node and current_node.data == key:
            self.head = current_node.next
            current_node = None
            return

        # Search for the key to be deleted, keep track of the previous node
        prev = None
        while current_node and current_node.data != key:
            prev = current_node
            current_node = current_node.next

        # Base case: If key was not present in linked list
        if current_node is None:
            return

        # Unlink the node from linked list
        prev.next = current_node.next
        current_node = None

# Example usage:
llist = LinkedList()

llist.insert_node("A", 0) # A, B, C, D
llist.insert_node("B", 1)
llist.insert_node("C", 2)
llist.insert_node("D", 3)

print("Original list:")
llist.traverse_list()

llist.insert_node("E", 2)
print("\nAfter inserting E at position 2:")
llist.traverse_list()

llist.delete_node("B")
print("\nAfter deleting B:")
llist.traverse_list()