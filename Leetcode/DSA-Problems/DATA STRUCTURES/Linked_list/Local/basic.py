# LINKED LIST IMPLEMENTATION
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    
    def __init__(self):
        self.head = None
        
    def traverse_list(self):
        current_node = self.head
        while current_node:
            print(current_node.data, end=" -> ")
            current_node = current_node.next
        print("None")
        
    def insert_node(self, data , position):
        new_node = Node(data)
        
        if position == 0:
            new_node.next = self.head
            self.head = new_node
            return
        
        # traverse to the desired position 
        
        current_node = self.head
        current_position = 0
        
        
        while current_node and current_position < position -1:
            current_node = current_node.next
            current_position += 1
            
        # If the current node is None, the position is out of bounds
        if current_node is None:
            print("Position out of bounds")
            return
        
        # Insert the new node at the desired position
        new_node.next = current_node.next
        current_node.next = new_node
            
        
        
    

List1 = LinkedList()

List1.insert_node(1, 0) # A, B, C, D
List1.insert_node(2, 1)
List1.insert_node(3, 2)
List1.insert_node(4, 3)

print("Printing list")

List1.traverse_list()
