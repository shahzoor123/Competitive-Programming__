# Define a class for a node in the binary search tree
class TreeNode:
    def __init__(self, value):
        self.left = None  # Pointer to the left child node
        self.right = None  # Pointer to the right child node
        self.value = value  # Value of the node

# Define a class for the binary search tree
class BinarySearchTree:
    def __init__(self):
        self.root = None  # Initialize the root of the tree as None
    
    # Method to insert a new node into the binary search tree
    def insert(self, value):
        new_node = TreeNode(value)
       
        if self.root is None:  # If the tree is empty, set the new node as the root
            self.root = new_node

        else:
            current_node = self.root
            while True:
                if value < current_node.value:  # Go to the left subtree
                    if current_node.left is None:  # If there is no left child, insert the new node here
                        current_node.left = new_node
                        return
                    else:
                        current_node = current_node.left
                else:  # Go to the right subtree
                    if current_node.right is None:  # If there is no right child, insert the new node here
                        current_node.right = new_node
                        return
                    else:
                        current_node = current_node.right

    # Method for in-order traversal of the binary search tree (left, root, right)

    def inorder_traversal(self, node, traversal=[]):
        if node:  # If the current node is not None
            self.inorder_traversal(node.left, traversal)  # Traverse the left subtree
            traversal.append(node.value)  # Visit the current node
            self.inorder_traversal(node.right, traversal)  # Traverse the right subtree
        return traversal

    # Method for pre-order traversal of the binary search tree (root, left, right)

    def preorder_traversal(self, node, traversal=[]):
        if node:  # If the current node is not None
            traversal.append(node.value)  # Visit the current node
            self.preorder_traversal(node.left, traversal)  # Traverse the left subtree
            self.preorder_traversal(node.right, traversal)  # Traverse the right subtree
        return traversal

    # Method for post-order traversal of the binary search tree (left, right, root)
    
    def postorder_traversal(self, node, traversal=[]):
        if node:  # If the current node is not None
            self.postorder_traversal(node.left, traversal)  # Traverse the left subtree
            self.postorder_traversal(node.right, traversal)  # Traverse the right subtree
            traversal.append(node.value)  # Visit the current node
        return traversal

    # Method to search for a node with a given value in the binary search tree
    def search(self, value):
        current_node = self.root
        while current_node and current_node.value != value:
            if value < current_node.value:  # Search in the left subtree
                current_node = current_node.left
            else:  # Search in the right subtree
                current_node = current_node.right
        return current_node

# Example Usage
if __name__ == "__main__":
    tree = BinarySearchTree()
    elements = [10, 5, 15, 2, 7, 12, 17]  # Elements to be inserted into the binary search tree

    for element in elements:
        tree.insert(element)  # Insert each element into the binary search tree

    print("In-order Traversal:", tree.inorder_traversal(tree.root, []))  # Print the in-order traversal of the tree
    print("Pre-order Traversal:", tree.preorder_traversal(tree.root, []))  # Print the pre-order traversal of the tree
    print("Post-order Traversal:", tree.postorder_traversal(tree.root, []))  # Print the post-order traversal of the tree

    search_value = 7
    result = tree.search(search_value)  # Search for a specific value in the tree
    if result:
        print(f"Element {search_value} found in the tree.")  # If found, print that the element is found
    else:
        print(f"Element {search_value} not found in the tree.")  # If not found, print that the element is not found