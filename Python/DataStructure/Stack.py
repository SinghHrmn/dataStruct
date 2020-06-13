class Stack(object):
    """
    Stack Implementation
    """
    def __init__(self):
        self.items = []
    
    def isEmpty(self):
        """Returns True if Stack is empty"""
        return self.items == []
    
    def push(self, item):
        """Adds item to the top of stack"""
        return self.items.append(item)

    def pop(self):
        """Pops out the top item"""
        return self.items.pop()
    
    def peek(self):
        """Peek the top item"""
        return self.items[-1]
    
    def size(self):
        """returns the size of stack"""
        return len(self.items)
