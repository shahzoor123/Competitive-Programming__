class Node:
    """
    An object for storing a single node of a linked list.
    Models two attributes - data & the link to the next node in the list
    
    """
    data = None
    next_node = None
    
    def __init__(self, data):
        self.data = data
        
        
    def __repr__(self) -> str:
        return "<Node data: %s >" % self.data   
     
     
N1 = Node(10)

N2 = Node(20)

N1.next_node = N2

N1.next_node

        
class LinkedList:
    """
    Singly Linked List
    
    """
    def __init__(self) -> None:
        self.head = None
    
    def is_empty(self):
        return self.head == None
    
    def size(self):
        # Returns the number of nodes in the list takes 0(n) time
        
        current = self.head
        count = 0
        
        while current:
            count += 1
            current = current.next_node
            
        return count 



l = LinkedList()
N1 = Node(10)
l.head = N1

l.size()
