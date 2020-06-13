class Queue(object):
    """Queue Implementaion"""
    def __init__(self):
        self.items = []
    
    def isEmpty(self):
        """returns True if queue is empty"""
        return self.items == []
    
    def enqueue(self, item):
        self.items.insert(0, item)

    def dequeue(self):
        return self.items.pop()

    def size(self):
        return len(self.items)
