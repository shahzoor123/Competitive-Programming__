class Queue:
    def __init__(self):
        self.queue = []

    def is_empty(self):
        return len(self.queue) == 0

    #add value to queue
    def enqueue(self, item):
        self.queue.append(item)

    #pop value from queue
    def dequeue(self):
        if not self.is_empty():
            return self.queue.pop(0) #pop from first element of the queue
        raise IndexError("Dequeue from an empty queue")

    def peek(self):
        if not self.is_empty():
            return self.queue[0]
        raise IndexError("Peek from an empty queue")

    def size(self):
        return len(self.queue)

# Example usage:
q = Queue()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
print(q.dequeue())  # Output: 1
print(q.peek())     # Output: 2
print(q.size())     # Output: 2 -> 2, 3<